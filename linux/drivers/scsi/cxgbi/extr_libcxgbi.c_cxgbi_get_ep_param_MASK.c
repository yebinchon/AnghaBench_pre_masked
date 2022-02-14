
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct cxgbi_sock {int daddr; } ;
struct cxgbi_endpoint {struct cxgbi_sock* csk; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct sockaddr_storage*,int,char*) ;
 int FUNC_1 (int,char*,struct iscsi_endpoint*,int) ;

int FUNC_2(struct iscsi_endpoint *VAR_3, enum iscsi_param VAR_4,
         char *VAR_5)
{
 struct cxgbi_endpoint *VAR_6 = VAR_3->dd_data;
 struct cxgbi_sock *VAR_7;

 FUNC_1(1 << VAR_0,
  "cls_conn 0x%p, param %d.\n", VAR_3, VAR_4);

 switch (VAR_4) {
 case 128:
 case 129:
  if (!VAR_6)
   return -VAR_2;

  VAR_7 = VAR_6->csk;
  if (!VAR_7)
   return -VAR_2;

  return FUNC_0((struct sockaddr_storage *)
       &VAR_7->daddr, VAR_4, VAR_5);
 default:
  break;
 }
 return -VAR_1;
}
