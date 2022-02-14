
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_present_cpu; } ;
struct lpfc_hba {scalar_t__ cfg_hdw_queue; scalar_t__ cfg_irq_chann; int cfg_enable_fc4_type; scalar_t__ cfg_nvme_enable_fb; scalar_t__ cfg_nvmet_fb_size; scalar_t__ cfg_nvmet_mrq; scalar_t__ nvmet_support; TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,scalar_t__,...) ;

void
FUNC_1(struct lpfc_hba *VAR_7)
{
 if (VAR_7->cfg_hdw_queue > VAR_7->sli4_hba.num_present_cpu)
  VAR_7->cfg_hdw_queue = VAR_7->sli4_hba.num_present_cpu;
 if (VAR_7->cfg_irq_chann > VAR_7->sli4_hba.num_present_cpu)
  VAR_7->cfg_irq_chann = VAR_7->sli4_hba.num_present_cpu;
 if (VAR_7->cfg_irq_chann > VAR_7->cfg_hdw_queue)
  VAR_7->cfg_irq_chann = VAR_7->cfg_hdw_queue;

 if (VAR_7->cfg_enable_fc4_type & VAR_4 &&
     VAR_7->nvmet_support) {
  VAR_7->cfg_enable_fc4_type &= ~VAR_3;

  FUNC_0(VAR_7, VAR_1, VAR_2,
    "6013 %s x%x fb_size x%x, fb_max x%x\n",
    "NVME Target PRLI ACC enable_fb ",
    VAR_7->cfg_nvme_enable_fb,
    VAR_7->cfg_nvmet_fb_size,
    VAR_5);

  if (VAR_7->cfg_nvme_enable_fb == 0)
   VAR_7->cfg_nvmet_fb_size = 0;
  else {
   if (VAR_7->cfg_nvmet_fb_size > VAR_5)
    VAR_7->cfg_nvmet_fb_size = VAR_5;
  }

  if (!VAR_7->cfg_nvmet_mrq)
   VAR_7->cfg_nvmet_mrq = VAR_7->cfg_irq_chann;


  if (VAR_7->cfg_nvmet_mrq > VAR_7->cfg_irq_chann) {
   VAR_7->cfg_nvmet_mrq = VAR_7->cfg_irq_chann;
   FUNC_0(VAR_7, VAR_0, VAR_2,
     "6018 Adjust lpfc_nvmet_mrq to %d\n",
     VAR_7->cfg_nvmet_mrq);
  }
  if (VAR_7->cfg_nvmet_mrq > VAR_6)
   VAR_7->cfg_nvmet_mrq = VAR_6;

 } else {

  VAR_7->nvmet_support = 0;
  VAR_7->cfg_nvmet_mrq = 0;
  VAR_7->cfg_nvmet_fb_size = 0;
 }
}
