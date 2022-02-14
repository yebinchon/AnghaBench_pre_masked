
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_offload_params {int dummy; } ;
struct beiscsi_hba {int state; } ;
struct beiscsi_endpoint {int dummy; } ;
struct beiscsi_conn {scalar_t__ login_in_progress; struct beiscsi_hba* phba; struct beiscsi_endpoint* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct beiscsi_conn*,struct beiscsi_offload_params*) ;
 int FUNC_3 (struct beiscsi_conn*,struct beiscsi_offload_params*) ;
 int FUNC_4 (struct iscsi_cls_conn*) ;
 int FUNC_5 (struct beiscsi_offload_params*,int ,int) ;

int FUNC_6(struct iscsi_cls_conn *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_4->dd_data;
 struct beiscsi_conn *VAR_6 = VAR_5->dd_data;
 struct beiscsi_endpoint *VAR_7;
 struct beiscsi_offload_params VAR_8;
 struct beiscsi_hba *VAR_9;

 VAR_9 = ((struct beiscsi_conn *)VAR_5->dd_data)->phba;

 if (!FUNC_0(VAR_9)) {
  FUNC_1(VAR_9, VAR_3, VAR_0,
       "BS_%d : HBA in error 0x%lx\n", VAR_9->state);
  return -VAR_1;
 }
 FUNC_1(VAR_6->phba, VAR_3, VAR_0,
      "BS_%d : In beiscsi_conn_start\n");

 FUNC_5(&VAR_8, 0, sizeof(struct beiscsi_offload_params));
 VAR_7 = VAR_6->ep;
 if (!VAR_7)
  FUNC_1(VAR_6->phba, VAR_2,
       VAR_0,
       "BS_%d : In beiscsi_conn_start , no beiscsi_ep\n");

 VAR_6->login_in_progress = 0;
 FUNC_3(VAR_6, &VAR_8);
 FUNC_2(VAR_6, &VAR_8);
 FUNC_4(VAR_4);
 return 0;
}
