
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int function; } ;
struct v4l2_subdev {int flags; TYPE_1__ entity; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {scalar_t__ irq; TYPE_4__* adapter; int dev; int addr; } ;
struct TYPE_7__ {int flags; } ;
struct adv7180_state {scalar_t__ irq; int powered; int mutex; void* csi_client; void* vpp_client; TYPE_2__ pad; struct v4l2_subdev sd; scalar_t__ input; struct adv7180_chip_info* chip_info; int curr_norm; void* pwdn_gpio; int field; struct i2c_client* client; } ;
struct adv7180_chip_info {int flags; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (void*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct adv7180_state*) ;
 int FUNC_3 (struct adv7180_state*) ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_4 (int *,char*,int ) ;
 struct adv7180_state* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (scalar_t__,struct adv7180_state*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 void* FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (struct adv7180_state*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__,int *,int ,int,int ,struct adv7180_state*) ;
 int FUNC_16 (struct v4l2_subdev*) ;
 int FUNC_17 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_18 (struct i2c_client*,char*,int) ;
 int FUNC_19 (struct i2c_client*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_21,
    const struct i2c_device_id *VAR_22)
{
 struct adv7180_state *VAR_23;
 struct v4l2_subdev *VAR_24;
 int VAR_25;


 if (!FUNC_7(VAR_21->adapter, VAR_9))
  return -VAR_5;

 FUNC_19(VAR_21, "chip found @ 0x%02x (%s)\n",
   VAR_21->addr, VAR_21->adapter->name);

 VAR_23 = FUNC_5(&VAR_21->dev, sizeof(*VAR_23), VAR_7);
 if (VAR_23 == ((void*)0))
  return -VAR_6;

 VAR_23->client = VAR_21;
 VAR_23->field = VAR_15;
 VAR_23->chip_info = (struct adv7180_chip_info *)VAR_22->driver_data;

 VAR_23->pwdn_gpio = FUNC_4(&VAR_21->dev, "powerdown",
         VAR_8);
 if (FUNC_0(VAR_23->pwdn_gpio)) {
  VAR_25 = FUNC_1(VAR_23->pwdn_gpio);
  FUNC_18(VAR_21, "request for power pin failed: %d\n", VAR_25);
  return VAR_25;
 }

 if (VAR_23->chip_info->flags & VAR_3) {
  VAR_23->csi_client = FUNC_8(VAR_21->adapter,
    VAR_0);
  if (FUNC_0(VAR_23->csi_client))
   return FUNC_1(VAR_23->csi_client);
 }

 if (VAR_23->chip_info->flags & VAR_2) {
  VAR_23->vpp_client = FUNC_8(VAR_21->adapter,
    VAR_1);
  if (FUNC_0(VAR_23->vpp_client)) {
   VAR_25 = FUNC_1(VAR_23->vpp_client);
   goto err_unregister_csi_client;
  }
 }

 VAR_23->irq = VAR_21->irq;
 FUNC_14(&VAR_23->mutex);
 VAR_23->curr_norm = VAR_16;
 if (VAR_23->chip_info->flags & VAR_4)
  VAR_23->powered = 1;
 else
  VAR_23->powered = 0;
 VAR_23->input = 0;
 VAR_24 = &VAR_23->sd;
 FUNC_17(VAR_24, VAR_21, &VAR_20);
 VAR_24->flags |= VAR_17 | VAR_18;

 VAR_25 = FUNC_3(VAR_23);
 if (VAR_25)
  goto err_unregister_vpp_client;

 VAR_23->pad.flags = VAR_14;
 VAR_24->entity.function = VAR_13;
 VAR_25 = FUNC_12(&VAR_24->entity, 1, &VAR_23->pad);
 if (VAR_25)
  goto err_free_ctrl;

 VAR_25 = FUNC_10(VAR_23);
 if (VAR_25)
  goto err_media_entity_cleanup;

 if (VAR_23->irq) {
  VAR_25 = FUNC_15(VAR_21->irq, ((void*)0), VAR_19,
        VAR_10 | VAR_11,
        VAR_12, VAR_23);
  if (VAR_25)
   goto err_media_entity_cleanup;
 }

 VAR_25 = FUNC_16(VAR_24);
 if (VAR_25)
  goto err_free_irq;

 return 0;

err_free_irq:
 if (VAR_23->irq > 0)
  FUNC_6(VAR_21->irq, VAR_23);
err_media_entity_cleanup:
 FUNC_11(&VAR_24->entity);
err_free_ctrl:
 FUNC_2(VAR_23);
err_unregister_vpp_client:
 FUNC_9(VAR_23->vpp_client);
err_unregister_csi_client:
 FUNC_9(VAR_23->csi_client);
 FUNC_13(&VAR_23->mutex);
 return VAR_25;
}
