
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_work_evt {int evt_listp; int evt; scalar_t__ evt_arg1; } ;
struct lpfc_vport {int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_3__ {int wwn; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_flag; struct lpfc_work_evt dev_loss_evt; TYPE_2__ nlp_portname; int * rport; int nlp_DID; struct lpfc_vport* vport; int nlp_sid; } ;
struct lpfc_hba {int hbalock; int work_list; } ;
struct fc_rport {scalar_t__ port_name; int dev; struct lpfc_rport_data* dd_data; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;

void
FUNC_13(struct fc_rport *VAR_8)
{
 struct lpfc_rport_data *VAR_9;
 struct lpfc_nodelist * VAR_10;
 struct lpfc_vport *VAR_11;
 struct Scsi_Host *VAR_12;
 struct lpfc_hba *VAR_13;
 struct lpfc_work_evt *VAR_14;
 int VAR_15;
 int VAR_16;
 unsigned long VAR_17;

 VAR_9 = VAR_8->dd_data;
 VAR_10 = VAR_9->pnode;
 if (!VAR_10 || !FUNC_0(VAR_10))
  return;

 VAR_11 = VAR_10->vport;
 VAR_13 = VAR_11->phba;

 FUNC_3(VAR_11, VAR_4,
  "rport devlosscb: sid:x%x did:x%x flg:x%x",
  VAR_10->nlp_sid, VAR_10->nlp_DID, VAR_10->nlp_flag);

 FUNC_6(VAR_10->vport, VAR_2, VAR_3,
    "3181 dev_loss_callbk x%06x, rport x%px flg x%x\n",
    VAR_10->nlp_DID, VAR_10->rport, VAR_10->nlp_flag);





 if (VAR_11->load_flag & VAR_0) {
  VAR_15 = VAR_9->pnode != ((void*)0);
  VAR_16 = VAR_10->rport != ((void*)0);
  VAR_9->pnode = ((void*)0);
  VAR_10->rport = ((void*)0);
  if (VAR_15)
   FUNC_5(VAR_10);
  if (VAR_16)
   FUNC_9(&VAR_8->dev);
  return;
 }

 if (VAR_10->nlp_state == VAR_7)
  return;

 if (VAR_8->port_name != FUNC_12(VAR_10->nlp_portname.u.wwn))
  FUNC_6(VAR_11, VAR_1, VAR_3,
    "6789 rport name %llx != node port name %llx",
    VAR_8->port_name,
    FUNC_12(VAR_10->nlp_portname.u.wwn));

 VAR_14 = &VAR_10->dev_loss_evt;

 if (!FUNC_2(&VAR_14->evt_listp)) {
  FUNC_6(VAR_11, VAR_1, VAR_3,
    "6790 rport name %llx dev_loss_evt pending",
    VAR_8->port_name);
  return;
 }

 VAR_12 = FUNC_7(VAR_11);
 FUNC_10(VAR_12->host_lock, VAR_17);
 VAR_10->nlp_flag |= VAR_6;
 FUNC_11(VAR_12->host_lock, VAR_17);




 VAR_14->evt_arg1 = FUNC_4(VAR_10);

 FUNC_10(&VAR_13->hbalock, VAR_17);
 if (VAR_14->evt_arg1) {
  VAR_14->evt = VAR_5;
  FUNC_1(&VAR_14->evt_listp, &VAR_13->work_list);
  FUNC_8(VAR_13);
 }
 FUNC_11(&VAR_13->hbalock, VAR_17);

 return;
}
