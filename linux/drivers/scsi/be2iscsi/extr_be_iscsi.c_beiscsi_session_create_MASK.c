
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct iscsi_session {struct beiscsi_session* dd_data; } ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct beiscsi_session {int bhs_pool; } ;
struct beiscsi_io_task {int dummy; } ;
struct TYPE_3__ {scalar_t__ wrbs_per_cxn; } ;
struct beiscsi_hba {TYPE_2__* pcidev; struct Scsi_Host* shost; TYPE_1__ params; int state; } ;
struct beiscsi_endpoint {struct beiscsi_hba* phba; } ;
struct be_cmd_bhs {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int VAR_4 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_2 (char*,int *,int,int,int ) ;
 struct iscsi_cls_session* FUNC_3 (int *,struct Scsi_Host*,scalar_t__,int,int,int ,int ) ;
 int FUNC_4 (struct iscsi_cls_session*) ;
 int FUNC_5 (char*) ;

struct iscsi_cls_session *FUNC_6(struct iscsi_endpoint *VAR_5,
       u16 VAR_6,
       u16 VAR_7,
       u32 VAR_8)
{
 struct Scsi_Host *VAR_9;
 struct beiscsi_endpoint *VAR_10;
 struct iscsi_cls_session *VAR_11;
 struct beiscsi_hba *VAR_12;
 struct iscsi_session *VAR_13;
 struct beiscsi_session *VAR_14;
 struct beiscsi_io_task *VAR_15;


 if (!VAR_5) {
  FUNC_5("beiscsi_session_create: invalid ep\n");
  return ((void*)0);
 }
 VAR_10 = VAR_5->dd_data;
 VAR_12 = VAR_10->phba;

 if (!FUNC_0(VAR_12)) {
  FUNC_1(VAR_12, VAR_3, VAR_0,
       "BS_%d : HBA in error 0x%lx\n", VAR_12->state);
  return ((void*)0);
 }

 FUNC_1(VAR_12, VAR_3, VAR_0,
      "BS_%d : In beiscsi_session_create\n");
 if (VAR_6 > VAR_10->phba->params.wrbs_per_cxn) {
  FUNC_1(VAR_12, VAR_2, VAR_0,
       "BS_%d : Cannot handle %d cmds."
       "Max cmds per session supported is %d. Using %d."
       "\n", VAR_6,
       VAR_10->phba->params.wrbs_per_cxn,
       VAR_10->phba->params.wrbs_per_cxn);

  VAR_6 = VAR_10->phba->params.wrbs_per_cxn;
 }

 VAR_9 = VAR_12->shost;
 VAR_11 = FUNC_3(&VAR_4,
       VAR_9, VAR_6,
       sizeof(*VAR_14),
       sizeof(*VAR_15),
       VAR_8, VAR_1);
 if (!VAR_11)
  return ((void*)0);
 VAR_13 = VAR_11->dd_data;
 VAR_14 = VAR_13->dd_data;
 VAR_14->bhs_pool = FUNC_2("beiscsi_bhs_pool",
         &VAR_12->pcidev->dev,
         sizeof(struct be_cmd_bhs),
         64, 0);
 if (!VAR_14->bhs_pool)
  goto destroy_sess;

 return VAR_11;
destroy_sess:
 FUNC_4(VAR_11);
 return ((void*)0);
}
