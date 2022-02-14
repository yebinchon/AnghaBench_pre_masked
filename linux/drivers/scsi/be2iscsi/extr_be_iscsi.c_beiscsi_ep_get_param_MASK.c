
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct beiscsi_endpoint {int dst6_addr; int dst_addr; int ip_type; int * dst_tcpport; int phba; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (char*,char*,int *) ;

int FUNC_2(struct iscsi_endpoint *VAR_4,
      enum iscsi_param VAR_5, char *VAR_6)
{
 struct beiscsi_endpoint *VAR_7 = VAR_4->dd_data;
 int VAR_8;

 FUNC_0(VAR_7->phba, VAR_3,
      VAR_1,
      "BS_%d : In beiscsi_ep_get_param,"
      " param= %d\n", VAR_5);

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_1(VAR_6, "%hu\n", VAR_7->dst_tcpport);
  break;
 case 129:
  if (VAR_7->ip_type == VAR_0)
   VAR_8 = FUNC_1(VAR_6, "%pI4\n", &VAR_7->dst_addr);
  else
   VAR_8 = FUNC_1(VAR_6, "%pI6\n", &VAR_7->dst6_addr);
  break;
 default:
  VAR_8 = -VAR_2;
 }
 return VAR_8;
}
