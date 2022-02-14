
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_endpoint {int dst_addr; int ip_type; int dst_port; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct iscsi_endpoint *VAR_2,
        enum iscsi_param VAR_3, char *VAR_4)
{
 struct qedi_endpoint *VAR_5 = VAR_2->dd_data;
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_0(VAR_4, "%hu\n", VAR_5->dst_port);
  break;
 case 129:
  if (VAR_5->ip_type == VAR_1)
   VAR_6 = FUNC_0(VAR_4, "%pI4\n", VAR_5->dst_addr);
  else
   VAR_6 = FUNC_0(VAR_4, "%pI6\n", VAR_5->dst_addr);
  break;
 default:
  return -VAR_0;
 }

 return VAR_6;
}
