
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_coincell {TYPE_1__* dev; int base_addr; int regmap; } ;
struct TYPE_2__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct qcom_coincell*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct qcom_coincell VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 bool VAR_6;
 int VAR_7;

 VAR_3.dev = &VAR_1->dev;

 VAR_3.regmap = FUNC_1(VAR_1->dev.parent, ((void*)0));
 if (!VAR_3.regmap) {
  FUNC_0(VAR_3.dev, "Unable to get regmap\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_2, "reg", &VAR_3.base_addr);
 if (VAR_7)
  return VAR_7;

 VAR_6 = !FUNC_2(VAR_2, "qcom,charger-disable");

 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_2, "qcom,rset-ohms", &VAR_4);
  if (VAR_7) {
   FUNC_0(VAR_3.dev,
    "can't find 'qcom,rset-ohms' in DT block");
   return VAR_7;
  }

  VAR_7 = FUNC_3(VAR_2, "qcom,vset-millivolts", &VAR_5);
  if (VAR_7) {
   FUNC_0(VAR_3.dev,
       "can't find 'qcom,vset-millivolts' in DT block");
   return VAR_7;
  }
 }

 return FUNC_4(&VAR_3, VAR_4, VAR_5, VAR_6);
}
