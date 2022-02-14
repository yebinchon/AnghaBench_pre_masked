
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_config {struct lp3972* driver_data; int init_data; int dev; } ;
struct lp3972_regulator_subdev {size_t id; int initdata; } ;
struct lp3972_platform_data {int num_regulators; struct lp3972_regulator_subdev* regulators; } ;
struct lp3972 {int dev; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,char*,int) ;
 struct regulator_dev* FUNC_3 (int ,int *,struct regulator_config*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_4(struct lp3972 *VAR_1,
 struct lp3972_platform_data *VAR_2)
{
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_2->num_regulators; VAR_3++) {
  struct lp3972_regulator_subdev *VAR_5 = &VAR_2->regulators[VAR_3];
  struct regulator_config VAR_6 = { };
  struct regulator_dev *VAR_7;

  VAR_6.dev = VAR_1->dev;
  VAR_6.init_data = VAR_5->initdata;
  VAR_6.driver_data = VAR_1;

  VAR_7 = FUNC_3(VAR_1->dev,
            &VAR_0[VAR_5->id], &VAR_6);
  if (FUNC_0(VAR_7)) {
   VAR_4 = FUNC_1(VAR_7);
   FUNC_2(VAR_1->dev, "regulator init failed: %d\n",
    VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
