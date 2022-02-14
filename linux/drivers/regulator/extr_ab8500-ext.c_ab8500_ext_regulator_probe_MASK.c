
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {TYPE_1__* init_data; struct ab8500_ext_regulator_info* driver_data; TYPE_2__* dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct ab8500_regulator_platform_data {int num_ext_regulator; TYPE_1__* ext_regulator; } ;
struct TYPE_8__ {int name; } ;
struct ab8500_ext_regulator_info {int update_val; int update_val_hp; int update_val_lp; TYPE_3__ desc; struct ab8500_ext_regulator_cfg* cfg; TYPE_2__* dev; } ;
struct ab8500_ext_regulator_cfg {int dummy; } ;
struct ab8500 {int dummy; } ;
struct TYPE_6__ {scalar_t__ driver_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ab8500_ext_regulator_info*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct ab8500_ext_regulator_info* VAR_2 ;
 struct ab8500_regulator_platform_data VAR_3 ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct ab8500* FUNC_5 (int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 scalar_t__ FUNC_7 (struct ab8500*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct ab8500 *VAR_5 = FUNC_5(VAR_4->dev.parent);
 struct ab8500_regulator_platform_data *VAR_6 = &VAR_3;
 struct regulator_config VAR_7 = { };
 struct regulator_dev *VAR_8;
 int VAR_9;

 if (!VAR_5) {
  FUNC_4(&VAR_4->dev, "null mfd parent\n");
  return -VAR_1;
 }


 if (VAR_6->num_ext_regulator != FUNC_0(VAR_2)) {
  FUNC_4(&VAR_4->dev, "Configuration error: size mismatch.\n");
  return -VAR_1;
 }


 if (FUNC_7(VAR_5)) {
  struct ab8500_ext_regulator_info *VAR_10;


  VAR_10 = &VAR_2[VAR_0];
  VAR_10->update_val = 0x30;
  VAR_10->update_val_hp = 0x30;
  VAR_10->update_val_lp = 0x10;
 }


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
  struct ab8500_ext_regulator_info *VAR_11 = ((void*)0);


  VAR_11 = &VAR_2[VAR_9];
  VAR_11->dev = &VAR_4->dev;
  VAR_11->cfg = (struct ab8500_ext_regulator_cfg *)
   VAR_6->ext_regulator[VAR_9].driver_data;

  VAR_7.dev = &VAR_4->dev;
  VAR_7.driver_data = VAR_11;
  VAR_7.init_data = &VAR_6->ext_regulator[VAR_9];


  VAR_8 = FUNC_6(&VAR_4->dev, &VAR_11->desc,
            &VAR_7);
  if (FUNC_1(VAR_8)) {
   FUNC_4(&VAR_4->dev, "failed to register regulator %s\n",
     VAR_11->desc.name);
   return FUNC_2(VAR_8);
  }

  FUNC_3(&VAR_4->dev, "%s-probed\n", VAR_11->desc.name);
 }

 return 0;
}
