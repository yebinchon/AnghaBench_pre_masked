
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc {int dev; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct sh_pfc* driver_data; int * init_data; int dev; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,char*,int) ;
 struct regulator_dev* FUNC_3 (int ,int *,struct regulator_config*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct sh_pfc *VAR_2)
{
 struct regulator_config VAR_3 = { };
 struct regulator_dev *VAR_4;
 int VAR_5;

 VAR_3.dev = VAR_2->dev;
 VAR_3.init_data = &VAR_1;
 VAR_3.driver_data = VAR_2;

 VAR_4 = FUNC_3(VAR_2->dev, &VAR_0, &VAR_3);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_2(VAR_2->dev, "Failed to register VCCQ MC0 regulator: %d\n",
   VAR_5);
  return VAR_5;
 }

 return 0;
}
