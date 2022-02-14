
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {TYPE_2__* sock; int sendpage; } ;
struct iscsi_conn {int datadgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int sendpage; } ;





 int FUNC_0 (struct iscsi_cls_conn*,int,char*,int) ;
 int FUNC_1 (struct iscsi_conn*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct iscsi_cls_conn *VAR_1,
           enum iscsi_param VAR_2, char *VAR_3,
           int VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_1->dd_data;
 struct iscsi_tcp_conn *VAR_6 = VAR_5->dd_data;
 struct iscsi_sw_tcp_conn *VAR_7 = VAR_6->dd_data;

 switch(VAR_2) {
 case 129:
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_7->sendpage = VAR_5->datadgst_en ?
   VAR_0 : VAR_7->sock->ops->sendpage;
  break;
 case 128:
  return FUNC_1(VAR_5, VAR_3);
 default:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
