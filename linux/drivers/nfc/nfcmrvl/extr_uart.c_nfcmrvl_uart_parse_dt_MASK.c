
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcmrvl_platform_data {int flow_control; int break_control; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,struct nfcmrvl_platform_data*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_1,
     struct nfcmrvl_platform_data *VAR_2)
{
 struct device_node *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1, "marvell,nfc-uart");
 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_1, "mrvl,nfc-uart");
  if (!VAR_3)
   return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  FUNC_4("Failed to get generic entries\n");
  FUNC_3(VAR_3);
  return VAR_4;
 }

 if (FUNC_1(VAR_3, "flow-control", ((void*)0)))
  VAR_2->flow_control = 1;
 else
  VAR_2->flow_control = 0;

 if (FUNC_1(VAR_3, "break-control", ((void*)0)))
  VAR_2->break_control = 1;
 else
  VAR_2->break_control = 0;

 FUNC_3(VAR_3);

 return 0;
}
