
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_desc {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct arizona_ldo1 {int init_data; int regmap; } ;
struct TYPE_3__ {int ldo1; } ;
struct arizona {int type; int external_dcvdd; TYPE_1__ pdata; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;






 struct regulator_desc VAR_2 ;
 int FUNC_0 (struct platform_device*,struct arizona_ldo1*,struct regulator_desc const*,int *,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct regulator_desc VAR_5 ;
 int VAR_6 ;
 struct arizona* FUNC_1 (int ) ;
 struct arizona_ldo1* FUNC_2 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7)
{
 struct arizona *VAR_8 = FUNC_1(VAR_7->dev.parent);
 struct arizona_ldo1 *VAR_9;
 const struct regulator_desc *VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->regmap = VAR_8->regmap;






 switch (VAR_8->type) {
 case 132:
 case 129:
 case 128:
 case 133:
  VAR_10 = &VAR_5;
  VAR_9->init_data = VAR_4;
  break;
 case 131:
 case 130:
  VAR_10 = &VAR_2;
  VAR_9->init_data = VAR_6;
  break;
 default:
  VAR_10 = &VAR_2;
  VAR_9->init_data = VAR_3;
  break;
 }

 VAR_12 = FUNC_0(VAR_7, VAR_9, VAR_10,
           &VAR_8->pdata.ldo1,
           &VAR_11);
 if (VAR_12 == 0)
  VAR_8->external_dcvdd = VAR_11;

 return VAR_12;
}
