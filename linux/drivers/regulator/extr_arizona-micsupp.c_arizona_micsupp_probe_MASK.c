
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_desc {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct arizona_micsupp {int init_data; int dev; int * dapm; int regmap; } ;
struct TYPE_3__ {int micvdd; } ;
struct arizona {int type; TYPE_1__ pdata; int dev; int dapm; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct regulator_desc VAR_2 ;
 int FUNC_0 (struct platform_device*,struct arizona_micsupp*,struct regulator_desc const*,int *) ;
 int VAR_3 ;
 struct regulator_desc VAR_4 ;
 int VAR_5 ;
 struct arizona* FUNC_1 (int ) ;
 struct arizona_micsupp* FUNC_2 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_6)
{
 struct arizona *VAR_7 = FUNC_1(VAR_6->dev.parent);
 const struct regulator_desc *VAR_8;
 struct arizona_micsupp *VAR_9;

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->regmap = VAR_7->regmap;
 VAR_9->dapm = &VAR_7->dapm;
 VAR_9->dev = VAR_7->dev;






 switch (VAR_7->type) {
 case 129:
 case 128:
  VAR_8 = &VAR_4;
  VAR_9->init_data = VAR_5;
  break;
 default:
  VAR_8 = &VAR_2;
  VAR_9->init_data = VAR_3;
  break;
 }

 return FUNC_0(VAR_6, VAR_9, VAR_8,
        &VAR_7->pdata.micvdd);
}
