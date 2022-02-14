
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct oxnas_reset {TYPE_2__ rcdev; int regmap; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct oxnas_reset* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (struct platform_device*,struct oxnas_reset*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct oxnas_reset *VAR_6;
 struct device *VAR_7;

 VAR_7 = VAR_5->dev.parent;
 if (!VAR_7) {
  FUNC_2(&VAR_5->dev, "no parent\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->regmap = FUNC_6(VAR_7->of_node);
 if (FUNC_0(VAR_6->regmap)) {
  FUNC_2(&VAR_5->dev, "failed to get parent regmap\n");
  return FUNC_1(VAR_6->regmap);
 }

 FUNC_5(VAR_5, VAR_6);

 VAR_6->rcdev.owner = VAR_3;
 VAR_6->rcdev.nr_resets = 32;
 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.of_node = VAR_5->dev.of_node;

 return FUNC_4(&VAR_5->dev, &VAR_6->rcdev);
}
