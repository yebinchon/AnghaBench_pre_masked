
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int write; TYPE_1__* dev; } ;
struct pm8916_pon {long reason_shift; TYPE_3__ reboot_mode; int baseaddr; int regmap; TYPE_1__* dev; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int *) ;
 struct pm8916_pon* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (struct platform_device*,struct pm8916_pon*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct pm8916_pon *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dev = &VAR_4->dev;

 VAR_5->regmap = FUNC_1(VAR_4->dev.parent, ((void*)0));
 if (!VAR_5->regmap) {
  FUNC_0(&VAR_4->dev, "failed to locate regmap\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_4->dev.of_node, "reg",
         &VAR_5->baseaddr);
 if (VAR_6)
  return VAR_6;

 VAR_5->reboot_mode.dev = &VAR_4->dev;
 VAR_5->reason_shift = (long)FUNC_5(&VAR_4->dev);
 VAR_5->reboot_mode.write = VAR_3;
 VAR_6 = FUNC_4(&VAR_4->dev, &VAR_5->reboot_mode);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "can't register reboot mode\n");
  return VAR_6;
 }

 FUNC_7(VAR_4, VAR_5);

 return FUNC_3(&VAR_4->dev);
}
