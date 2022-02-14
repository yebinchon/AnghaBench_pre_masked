
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int * internal_ops; int flags; int name; } ;
struct m5mols_platform_data {int gpio_reset; scalar_t__ reset_polarity; int set_power; } ;
struct TYPE_10__ {int flags; } ;
struct m5mols_info {void** ffmt; int res_type; int lock; int irq_waitq; TYPE_2__ pad; struct v4l2_subdev sd; int set_power; struct m5mols_platform_data const* pdata; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_11__ {struct m5mols_platform_data* platform_data; } ;
struct i2c_client {TYPE_4__ dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 int FUNC_2 (TYPE_4__*,int ,unsigned long,char*) ;
 struct m5mols_info* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ,int ,struct v4l2_subdev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 void** VAR_11 ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct m5mols_info*,int) ;
 int VAR_14 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int) ;
 int VAR_15 ;
 int FUNC_15 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_16,
   const struct i2c_device_id *VAR_17)
{
 const struct m5mols_platform_data *VAR_18 = VAR_16->dev.platform_data;
 unsigned long VAR_19;
 struct m5mols_info *VAR_20;
 struct v4l2_subdev *VAR_21;
 int VAR_22;

 if (VAR_18 == ((void*)0)) {
  FUNC_1(&VAR_16->dev, "No platform data\n");
  return -VAR_0;
 }

 if (!FUNC_6(VAR_18->gpio_reset)) {
  FUNC_1(&VAR_16->dev, "No valid RESET GPIO specified\n");
  return -VAR_0;
 }

 if (!VAR_16->irq) {
  FUNC_1(&VAR_16->dev, "Interrupt not assigned\n");
  return -VAR_0;
 }

 VAR_20 = FUNC_3(&VAR_16->dev, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 VAR_20->pdata = VAR_18;
 VAR_20->set_power = VAR_18->set_power;

 VAR_19 = VAR_18->reset_polarity
     ? VAR_3 : VAR_4;
 VAR_22 = FUNC_2(&VAR_16->dev, VAR_18->gpio_reset, VAR_19,
        "M5MOLS_NRST");
 if (VAR_22) {
  FUNC_1(&VAR_16->dev, "Failed to request gpio: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_4(&VAR_16->dev, FUNC_0(VAR_15),
          VAR_15);
 if (VAR_22) {
  FUNC_1(&VAR_16->dev, "Failed to get regulators: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_21 = &VAR_20->sd;
 FUNC_15(VAR_21, VAR_16, &VAR_13);

 FUNC_14(VAR_21->name, VAR_9, sizeof(VAR_21->name));
 VAR_21->flags |= VAR_10;

 VAR_21->internal_ops = &VAR_14;
 VAR_20->pad.flags = VAR_8;
 VAR_22 = FUNC_12(&VAR_21->entity, 1, &VAR_20->pad);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21->entity.function = VAR_7;

 FUNC_7(&VAR_20->irq_waitq);
 FUNC_13(&VAR_20->lock);

 VAR_22 = FUNC_5(&VAR_16->dev, VAR_16->irq, VAR_12,
          VAR_5, VAR_9, VAR_21);
 if (VAR_22) {
  FUNC_1(&VAR_16->dev, "Interrupt request failed: %d\n", VAR_22);
  goto error;
 }
 VAR_20->res_type = VAR_6;
 VAR_20->ffmt[0] = VAR_11[0];
 VAR_20->ffmt[1] = VAR_11[1];

 VAR_22 = FUNC_10(VAR_20, 1);
 if (VAR_22)
  goto error;

 VAR_22 = FUNC_8(VAR_21);
 if (!VAR_22)
  VAR_22 = FUNC_9(VAR_21);

 VAR_22 = FUNC_10(VAR_20, 0);
 if (!VAR_22)
  return 0;
error:
 FUNC_11(&VAR_21->entity);
 return VAR_22;
}
