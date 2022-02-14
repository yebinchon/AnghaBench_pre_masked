
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct beiscsi_hba {int state; } ;
struct beiscsi_endpoint {struct iscsi_endpoint* openiscsi_ep; struct beiscsi_hba* phba; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iscsi_endpoint* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_3 (struct iscsi_endpoint*,int *,struct sockaddr*,int) ;
 struct iscsi_endpoint* FUNC_4 (int) ;
 int FUNC_5 (struct iscsi_endpoint*) ;
 struct beiscsi_hba* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;

struct iscsi_endpoint *
FUNC_9(struct Scsi_Host *VAR_9, struct sockaddr *VAR_10,
     int VAR_11)
{
 struct beiscsi_hba *VAR_12;
 struct beiscsi_endpoint *VAR_13;
 struct iscsi_endpoint *VAR_14;
 int VAR_15;

 if (!VAR_9) {
  VAR_15 = -VAR_5;
  FUNC_7("beiscsi_ep_connect shost is NULL\n");
  return FUNC_0(VAR_15);
 }

 VAR_12 = FUNC_6(VAR_9);
 if (!FUNC_1(VAR_12)) {
  VAR_15 = -VAR_3;
  FUNC_2(VAR_12, VAR_7, VAR_1,
       "BS_%d : HBA in error 0x%lx\n", VAR_12->state);
  return FUNC_0(VAR_15);
 }
 if (!FUNC_8(VAR_0, &VAR_12->state)) {
  VAR_15 = -VAR_2;
  FUNC_2(VAR_12, VAR_8, VAR_1,
       "BS_%d : The Adapter Port state is Down!!!\n");
  return FUNC_0(VAR_15);
 }

 VAR_14 = FUNC_4(sizeof(struct beiscsi_endpoint));
 if (!VAR_14) {
  VAR_15 = -VAR_4;
  return FUNC_0(VAR_15);
 }

 VAR_13 = VAR_14->dd_data;
 VAR_13->phba = VAR_12;
 VAR_13->openiscsi_ep = VAR_14;
 VAR_15 = FUNC_3(VAR_14, ((void*)0), VAR_10, VAR_11);
 if (VAR_15) {
  FUNC_2(VAR_12, VAR_6, VAR_1,
       "BS_%d : Failed in beiscsi_open_conn\n");
  goto free_ep;
 }

 return VAR_14;

free_ep:
 FUNC_5(VAR_14);
 return FUNC_0(VAR_15);
}
