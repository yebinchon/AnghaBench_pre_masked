
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct serv_parm {int portName; } ;
struct TYPE_5__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_6__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {scalar_t__ num_disc_nodes; int fc_flag; int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct TYPE_4__ {int elsLogiCol; } ;
struct lpfc_hba {TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct ls_rjt*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static uint32_t
FUNC_10(struct lpfc_vport *VAR_4, struct lpfc_nodelist *VAR_5,
      void *VAR_6, uint32_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_5(VAR_4);
 struct lpfc_hba *VAR_9 = VAR_4->phba;
 struct lpfc_iocbq *VAR_10 = VAR_6;
 struct lpfc_dmabuf *VAR_11 = (struct lpfc_dmabuf *) VAR_10->context2;
 uint32_t *VAR_12 = (uint32_t *) VAR_11->virt;
 struct serv_parm *VAR_13 = (struct serv_parm *) (VAR_12 + 1);
 struct ls_rjt VAR_14;
 int VAR_15;

 FUNC_7(&VAR_14, 0, sizeof (struct ls_rjt));




 VAR_9->fc_stat.elsLogiCol++;
 VAR_15 = FUNC_6(&VAR_4->fc_portname, &VAR_13->portName,
     sizeof(struct lpfc_name));

 if (VAR_15 >= 0) {


  VAR_14.un.b.lsRjtRsnCode = VAR_2;
  VAR_14.un.b.lsRjtRsnCodeExp = VAR_1;
  FUNC_1(VAR_4, VAR_14.un.lsRjtError, VAR_10, VAR_5,
   ((void*)0));
 } else {
  if (FUNC_4(VAR_4, VAR_5, VAR_10) &&
      (VAR_5->nlp_flag & VAR_3) &&
      (VAR_4->num_disc_nodes)) {
   FUNC_8(VAR_8->host_lock);
   VAR_5->nlp_flag &= ~VAR_3;
   FUNC_9(VAR_8->host_lock);

   FUNC_3(VAR_4);
   if (VAR_4->num_disc_nodes == 0) {
    FUNC_8(VAR_8->host_lock);
    VAR_4->fc_flag &= ~VAR_0;
    FUNC_9(VAR_8->host_lock);
    FUNC_0(VAR_4);
    FUNC_2(VAR_4);
   }
  }
 }

 return VAR_5->nlp_state;
}
