
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct stpmic1_regulator_cfg {scalar_t__ mask_reset_reg; int mask_reset_mask; TYPE_3__ desc; } ;
struct stpmic1 {int regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int of_node; void* driver_data; int regmap; int init_data; TYPE_1__* dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct of_regulator_match {int of_node; int init_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct stpmic1* FUNC_3 (int ) ;
 struct regulator_dev* FUNC_4 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_5 (TYPE_1__*,int,int *,int ,int,int ,struct regulator_dev*) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3, int VAR_4,
          struct of_regulator_match *VAR_5,
          const struct stpmic1_regulator_cfg *VAR_6)
{
 struct stpmic1 *VAR_7 = FUNC_3(VAR_3->dev.parent);
 struct regulator_dev *VAR_8;
 struct regulator_config VAR_9 = {};
 int VAR_10 = 0;
 int VAR_11;

 VAR_9.dev = &VAR_3->dev;
 VAR_9.init_data = VAR_5->init_data;
 VAR_9.of_node = VAR_5->of_node;
 VAR_9.regmap = VAR_7->regmap;
 VAR_9.driver_data = (void *)VAR_6;

 VAR_8 = FUNC_4(&VAR_3->dev, &VAR_6->desc, &VAR_9);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_3->dev, "failed to register %s regulator\n",
   VAR_6->desc.name);
  return FUNC_1(VAR_8);
 }


 if (FUNC_6(VAR_9.of_node, "st,mask-reset", ((void*)0)) &&
     VAR_6->mask_reset_reg != 0) {
  VAR_10 = FUNC_8(VAR_7->regmap,
      VAR_6->mask_reset_reg,
      VAR_6->mask_reset_mask,
      VAR_6->mask_reset_mask);
  if (VAR_10) {
   FUNC_2(&VAR_3->dev, "set mask reset failed\n");
   return VAR_10;
  }
 }


 VAR_11 = FUNC_7(VAR_9.of_node, 0);
 if (VAR_11 > 0) {
  VAR_10 = FUNC_5(&VAR_3->dev,
      VAR_11, ((void*)0),
      VAR_2,
      VAR_0 | VAR_1,
      VAR_3->name, VAR_8);
  if (VAR_10) {
   FUNC_2(&VAR_3->dev, "Request IRQ failed\n");
   return VAR_10;
  }
 }
 return 0;
}
