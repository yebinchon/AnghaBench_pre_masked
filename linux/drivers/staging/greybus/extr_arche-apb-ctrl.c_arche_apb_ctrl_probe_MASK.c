
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {int init_disabled; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*,struct arche_apb_ctrl_drvdata*) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int *) ;
 struct arche_apb_ctrl_drvdata* FUNC_4 (struct device*,int,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (struct platform_device*,struct arche_apb_ctrl_drvdata*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 int VAR_5;
 struct arche_apb_ctrl_drvdata *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_4, VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_7, "failed to get apb devicetree data %d\n", VAR_5);
  return VAR_5;
 }


 VAR_6->state = VAR_0;

 if (FUNC_5(VAR_4->dev.of_node, "arche,init-disable"))
  VAR_6->init_disabled = 1;

 FUNC_6(VAR_4, VAR_6);


 VAR_5 = FUNC_3(VAR_7, &VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_7, "failed to create state file in sysfs\n");
  return VAR_5;
 }

 FUNC_2(&VAR_4->dev, "Device registered successfully\n");
 return 0;
}
