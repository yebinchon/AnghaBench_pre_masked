
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int function; } ;
struct v4l2_subdev {int flags; TYPE_1__ entity; int ctrl_handler; int * internal_ops; int name; } ;
struct regmap_config {int reg_bits; int val_bits; int max_register; } ;
struct TYPE_9__ {int flags; } ;
struct ov965x {scalar_t__ mclk_frequency; int lock; int * fiv; int * frame_size; int format; TYPE_2__ pad; struct v4l2_subdev sd; int clk; int regmap; } ;
struct ov9650_platform_data {scalar_t__ mclk_frequency; } ;
struct TYPE_10__ {struct ov9650_platform_data* platform_data; } ;
struct i2c_client {TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 struct ov965x* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ov965x*) ;
 int FUNC_13 (struct ov965x*,struct ov9650_platform_data const*) ;
 int FUNC_14 (struct v4l2_subdev*) ;
 int * VAR_8 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ov965x*) ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct ov965x*) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (struct v4l2_subdev*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_12)
{
 const struct ov9650_platform_data *VAR_13 = VAR_12->dev.platform_data;
 struct v4l2_subdev *VAR_14;
 struct ov965x *VAR_15;
 int VAR_16;
 static const struct regmap_config VAR_17 = {
  .reg_bits = 8,
  .val_bits = 8,
  .max_register = 0xab,
 };

 VAR_15 = FUNC_6(&VAR_12->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->regmap = FUNC_7(VAR_12, &VAR_17);
 if (FUNC_0(VAR_15->regmap)) {
  FUNC_3(&VAR_12->dev, "Failed to allocate register map\n");
  return FUNC_1(VAR_15->regmap);
 }

 if (VAR_13) {
  if (VAR_13->mclk_frequency == 0) {
   FUNC_3(&VAR_12->dev, "MCLK frequency not specified\n");
   return -VAR_1;
  }
  VAR_15->mclk_frequency = VAR_13->mclk_frequency;

  VAR_16 = FUNC_13(VAR_15, VAR_13);
  if (VAR_16 < 0)
   return VAR_16;
 } else if (FUNC_4(&VAR_12->dev)) {
  VAR_15->clk = FUNC_5(&VAR_12->dev, ((void*)0));
  if (FUNC_0(VAR_15->clk))
   return FUNC_1(VAR_15->clk);
  VAR_15->mclk_frequency = FUNC_2(VAR_15->clk);

  VAR_16 = FUNC_12(VAR_15);
  if (VAR_16 < 0)
   return VAR_16;
 } else {
  FUNC_3(&VAR_12->dev,
   "Neither platform data nor device property specified\n");

  return -VAR_1;
 }

 FUNC_11(&VAR_15->lock);

 VAR_14 = &VAR_15->sd;
 FUNC_21(VAR_14, VAR_12, &VAR_11);
 FUNC_18(VAR_14->name, VAR_0, sizeof(VAR_14->name));

 VAR_14->internal_ops = &VAR_10;
 VAR_14->flags |= VAR_6 |
       VAR_7;

 VAR_15->pad.flags = VAR_5;
 VAR_14->entity.function = VAR_4;
 VAR_16 = FUNC_9(&VAR_14->entity, 1, &VAR_15->pad);
 if (VAR_16 < 0)
  goto err_mutex;

 VAR_16 = FUNC_16(VAR_15);
 if (VAR_16 < 0)
  goto err_me;

 FUNC_15(&VAR_15->format);
 VAR_15->frame_size = &VAR_8[0];
 VAR_15->fiv = &VAR_9[0];

 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16 < 0)
  goto err_ctrls;


 FUNC_17(VAR_15);

 VAR_16 = FUNC_19(VAR_14);
 if (VAR_16 < 0)
  goto err_ctrls;

 return 0;
err_ctrls:
 FUNC_20(VAR_14->ctrl_handler);
err_me:
 FUNC_8(&VAR_14->entity);
err_mutex:
 FUNC_10(&VAR_15->lock);
 return VAR_16;
}
