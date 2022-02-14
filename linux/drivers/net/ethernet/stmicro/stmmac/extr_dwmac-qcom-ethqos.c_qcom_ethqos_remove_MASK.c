
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_ethqos {int rgmii_clk; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct qcom_ethqos* FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct qcom_ethqos *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_2->rgmii_clk);

 return VAR_3;
}
