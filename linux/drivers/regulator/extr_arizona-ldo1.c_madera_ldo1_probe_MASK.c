
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int ldo1; } ;
struct madera {int internal_dcvdd; TYPE_1__ pdata; int regmap; } ;
struct arizona_ldo1 {int init_data; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,struct arizona_ldo1*,int *,int *,int*) ;
 struct madera* FUNC_1 (int ) ;
 struct arizona_ldo1* FUNC_2 (TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4)
{
 struct madera *VAR_5 = FUNC_1(VAR_4->dev.parent);
 struct arizona_ldo1 *VAR_6;
 bool VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->regmap = VAR_5->regmap;

 VAR_6->init_data = VAR_3;

 VAR_8 = FUNC_0(VAR_4, VAR_6, &VAR_2,
           &VAR_5->pdata.ldo1,
           &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_5->internal_dcvdd = !VAR_7;

 return 0;
}
