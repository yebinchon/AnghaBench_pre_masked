
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;


 int FUNC_0 (int ,struct iscsi_conn*,char*,int) ;
 int FUNC_1 (struct iscsi_session*,struct iscsi_conn*,int) ;

void FUNC_2(struct iscsi_cls_conn *VAR_1, int VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->dd_data;
 struct iscsi_session *VAR_4 = VAR_3->session;

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_1(VAR_4, VAR_3, VAR_2);
  break;
 default:
  FUNC_0(VAR_0, VAR_3,
      "invalid stop flag %d\n", VAR_2);
 }
}
