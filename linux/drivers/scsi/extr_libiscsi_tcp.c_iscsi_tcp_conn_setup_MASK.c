
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_tcp_conn {struct iscsi_tcp_conn* dd_data; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; int max_recv_dlength; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 struct iscsi_cls_conn* FUNC_0 (struct iscsi_cls_session*,int,int ) ;

struct iscsi_cls_conn *
FUNC_1(struct iscsi_cls_session *VAR_1, int VAR_2,
        uint32_t VAR_3)

{
 struct iscsi_conn *VAR_4;
 struct iscsi_cls_conn *VAR_5;
 struct iscsi_tcp_conn *VAR_6;

 VAR_5 = FUNC_0(VAR_1,
        sizeof(*VAR_6) + VAR_2, VAR_3);
 if (!VAR_5)
  return ((void*)0);
 VAR_4 = VAR_5->dd_data;




 VAR_4->max_recv_dlength = VAR_0;

 VAR_6 = VAR_4->dd_data;
 VAR_6->iscsi_conn = VAR_4;
 VAR_6->dd_data = VAR_4->dd_data + sizeof(*VAR_6);
 return VAR_5;
}
