
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_ecount; int cq_esize; int eq_ecount; int eq_esize; } ;
struct lpfc_hba {scalar_t__ cfg_irq_chann; scalar_t__ cfg_nvmet_mrq; TYPE_1__ sli4_hba; int cfg_hdw_queue; scalar_t__ nvmet_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_7)
{





 if (VAR_7->nvmet_support) {
  if (VAR_7->cfg_irq_chann < VAR_7->cfg_nvmet_mrq)
   VAR_7->cfg_nvmet_mrq = VAR_7->cfg_irq_chann;
  if (VAR_7->cfg_nvmet_mrq > VAR_6)
   VAR_7->cfg_nvmet_mrq = VAR_6;
 }

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "2574 IO channels: hdwQ %d IRQ %d MRQ: %d\n",
   VAR_7->cfg_hdw_queue, VAR_7->cfg_irq_chann,
   VAR_7->cfg_nvmet_mrq);


 VAR_7->sli4_hba.eq_esize = VAR_5;
 VAR_7->sli4_hba.eq_ecount = VAR_4;


 VAR_7->sli4_hba.cq_esize = VAR_3;
 VAR_7->sli4_hba.cq_ecount = VAR_2;
 return 0;
}
