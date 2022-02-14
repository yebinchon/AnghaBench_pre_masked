
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct altr_a10sr {int regmap; } ;
struct TYPE_5__ {int of_node; int * ops; int nr_resets; int owner; } ;
struct a10sr_reset {TYPE_2__ rcdev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct altr_a10sr* FUNC_0 (int ) ;
 struct a10sr_reset* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (struct platform_device*,struct a10sr_reset*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct altr_a10sr *VAR_6 = FUNC_0(VAR_5->dev.parent);
 struct a10sr_reset *VAR_7;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(struct a10sr_reset),
       VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->rcdev.owner = VAR_3;
 VAR_7->rcdev.nr_resets = VAR_0;
 VAR_7->rcdev.ops = &VAR_4;
 VAR_7->rcdev.of_node = VAR_5->dev.of_node;
 VAR_7->regmap = VAR_6->regmap;

 FUNC_3(VAR_5, VAR_7);

 return FUNC_2(&VAR_5->dev, &VAR_7->rcdev);
}
