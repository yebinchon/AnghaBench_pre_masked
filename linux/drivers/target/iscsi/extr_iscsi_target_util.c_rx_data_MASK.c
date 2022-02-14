
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int dummy; } ;
struct iscsi_data_count {int iov_count; int data_length; int type; struct kvec* iov; } ;
struct iscsi_conn {int conn_ops; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_data_count*) ;
 int FUNC_1 (struct iscsi_data_count*,int ,int) ;

int FUNC_2(
 struct iscsi_conn *VAR_1,
 struct kvec *VAR_2,
 int VAR_3,
 int VAR_4)
{
 struct iscsi_data_count VAR_5;

 if (!VAR_1 || !VAR_1->sock || !VAR_1->conn_ops)
  return -1;

 FUNC_1(&VAR_5, 0, sizeof(struct iscsi_data_count));
 VAR_5.iov = VAR_2;
 VAR_5.iov_count = VAR_3;
 VAR_5.data_length = VAR_4;
 VAR_5.type = VAR_0;

 return FUNC_0(VAR_1, &VAR_5);
}
