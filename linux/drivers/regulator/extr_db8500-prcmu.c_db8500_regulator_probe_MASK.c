
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_init_data* init_data; int * dev; struct dbx500_regulator_info* driver_data; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int name; } ;
struct dbx500_regulator_info {TYPE_1__ desc; } ;


 int FUNC_0 (struct dbx500_regulator_info*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct dbx500_regulator_info* VAR_0 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ,int) ;
 struct regulator_init_data* FUNC_5 (int *) ;
 struct regulator_dev* FUNC_6 (int *,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (struct platform_device*,struct dbx500_regulator_info*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct regulator_init_data *VAR_2;
 struct dbx500_regulator_info *VAR_3;
 struct regulator_config VAR_4 = { };
 struct regulator_dev *VAR_5;
 int VAR_6, VAR_7;

 VAR_2 = FUNC_5(&VAR_1->dev);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {

  VAR_3 = &VAR_0[VAR_7];

  VAR_4.driver_data = VAR_3;
  VAR_4.dev = &VAR_1->dev;
  if (VAR_2)
   VAR_4.init_data = &VAR_2[VAR_7];

  VAR_5 = FUNC_6(&VAR_1->dev, &VAR_3->desc,
            &VAR_4);
  if (FUNC_1(VAR_5)) {
   VAR_6 = FUNC_2(VAR_5);
   FUNC_4(&VAR_1->dev, "failed to register %s: err %i\n",
    VAR_3->desc.name, VAR_6);
   return VAR_6;
  }
  FUNC_3(&VAR_1->dev, "regulator-%s-probed\n", VAR_3->desc.name);
 }

 FUNC_7(VAR_1, VAR_0,
       FUNC_0(VAR_0));
 return 0;
}
