
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_session {struct beiscsi_session* dd_data; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_session {int dummy; } ;
struct beiscsi_hba {int dummy; } ;
struct beiscsi_conn {struct beiscsi_session* beiscsi_sess; struct iscsi_conn* conn; struct beiscsi_hba* phba; int * ep; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 struct iscsi_cls_conn* FUNC_1 (struct iscsi_cls_session*,int,int ) ;
 struct beiscsi_hba* FUNC_2 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_3 (struct iscsi_cls_session*) ;

struct iscsi_cls_conn *
FUNC_4(struct iscsi_cls_session *VAR_2, u32 VAR_3)
{
 struct beiscsi_hba *VAR_4;
 struct Scsi_Host *VAR_5;
 struct iscsi_cls_conn *VAR_6;
 struct beiscsi_conn *VAR_7;
 struct iscsi_conn *VAR_8;
 struct iscsi_session *VAR_9;
 struct beiscsi_session *VAR_10;

 VAR_5 = FUNC_3(VAR_2);
 VAR_4 = FUNC_2(VAR_5);

 FUNC_0(VAR_4, VAR_1, VAR_0,
      "BS_%d : In beiscsi_conn_create ,cid"
      "from iscsi layer=%d\n", VAR_3);

 VAR_6 = FUNC_1(VAR_2, sizeof(*VAR_7), VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_8 = VAR_6->dd_data;
 VAR_7 = VAR_8->dd_data;
 VAR_7->ep = ((void*)0);
 VAR_7->phba = VAR_4;
 VAR_7->conn = VAR_8;
 VAR_9 = VAR_2->dd_data;
 VAR_10 = VAR_9->dd_data;
 VAR_7->beiscsi_sess = VAR_10;
 return VAR_6;
}
