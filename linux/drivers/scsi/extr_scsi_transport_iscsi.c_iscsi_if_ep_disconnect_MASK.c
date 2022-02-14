
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iscsi_transport {int (* ep_disconnect ) (struct iscsi_endpoint*) ;} ;
struct iscsi_endpoint {struct iscsi_cls_conn* conn; } ;
struct iscsi_cls_conn {int ep_mutex; int * ep; } ;


 int VAR_0 ;
 struct iscsi_endpoint* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iscsi_endpoint*) ;

__attribute__((used)) static int FUNC_4(struct iscsi_transport *VAR_1,
      u64 VAR_2)
{
 struct iscsi_cls_conn *VAR_3;
 struct iscsi_endpoint *VAR_4;

 if (!VAR_1->ep_disconnect)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 VAR_3 = VAR_4->conn;
 if (VAR_3) {
  FUNC_1(&VAR_3->ep_mutex);
  VAR_3->ep = ((void*)0);
  FUNC_2(&VAR_3->ep_mutex);
 }

 VAR_1->ep_disconnect(VAR_4);
 return 0;
}
