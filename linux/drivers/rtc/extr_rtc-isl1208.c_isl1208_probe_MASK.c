
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_17__ {struct isl1208_state* priv; int size; } ;
struct isl1208_state {TYPE_1__* rtc; TYPE_3__ nvmem_config; TYPE_5__* config; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_19__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_6__ dev; int adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_18__ {scalar_t__ has_timestamp; scalar_t__ has_tamper; int nvmem_length; } ;
struct TYPE_16__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 struct isl1208_state* FUNC_4 (TYPE_6__*,int,int ) ;
 TYPE_1__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct isl1208_state*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 TYPE_5__* VAR_9 ;
 int FUNC_10 (struct i2c_client*) ;
 scalar_t__ FUNC_11 (struct i2c_client*) ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (struct i2c_client*,int) ;
 int VAR_13 ;
 TYPE_5__* FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_19(struct i2c_client *VAR_14, const struct i2c_device_id *VAR_15)
{
 int VAR_16 = 0;
 struct isl1208_state *VAR_17;
 int VAR_18 = -1;

 if (!FUNC_6(VAR_14->adapter, VAR_3))
  return -VAR_0;

 if (FUNC_11(VAR_14) < 0)
  return -VAR_0;


 VAR_17 = FUNC_4(&VAR_14->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;
 FUNC_7(VAR_14, VAR_17);


 if (VAR_14->dev.of_node) {
  VAR_17->config = FUNC_13(&VAR_14->dev);
  if (!VAR_17->config)
   return -VAR_0;
 } else {
  if (VAR_15->driver_data >= VAR_8)
   return -VAR_0;
  VAR_17->config = &VAR_9[VAR_15->driver_data];
 }

 VAR_17->rtc = FUNC_5(&VAR_14->dev);
 if (FUNC_0(VAR_17->rtc))
  return FUNC_1(VAR_17->rtc);

 VAR_17->rtc->ops = &VAR_11;


 VAR_17->nvmem_config = VAR_10;
 VAR_17->nvmem_config.size = VAR_17->config->nvmem_length;
 VAR_17->nvmem_config.priv = VAR_17;

 VAR_16 = FUNC_10(VAR_14);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_14->dev, "reading status failed\n");
  return VAR_16;
 }

 if (VAR_16 & VAR_4)
  FUNC_3(&VAR_14->dev, "rtc power failure detected, "
    "please set clock.\n");

 if (VAR_17->config->has_tamper) {
  struct device_node *VAR_19 = VAR_14->dev.of_node;
  u32 VAR_20;

  VAR_16 = FUNC_8(VAR_14, VAR_5);
  if (VAR_16 < 0) {
   FUNC_2(&VAR_14->dev, "failed to read EV reg\n");
   return VAR_16;
  }
  VAR_16 |= VAR_6;
  if (!FUNC_15(VAR_19, "isil,ev-evienb", &VAR_20)) {
   if (VAR_20)
    VAR_16 |= VAR_7;
   else
    VAR_16 &= ~VAR_7;
  }
  VAR_16 = FUNC_9(VAR_14, VAR_5, VAR_16);
  if (VAR_16 < 0) {
   FUNC_2(&VAR_14->dev, "could not enable tamper detection\n");
   return VAR_16;
  }
  VAR_18 = FUNC_14(VAR_19, "evdet");
 }
 if (VAR_17->config->has_timestamp) {
  VAR_16 = FUNC_16(VAR_17->rtc, &VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_16(VAR_17->rtc, &VAR_12);
 if (VAR_16)
  return VAR_16;

 if (VAR_14->irq > 0)
  VAR_16 = FUNC_12(VAR_14, VAR_14->irq);
 if (VAR_16)
  return VAR_16;

 if (VAR_18 > 0 && VAR_18 != VAR_14->irq)
  VAR_16 = FUNC_12(VAR_14, VAR_18);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_17(VAR_17->rtc, &VAR_17->nvmem_config);
 if (VAR_16)
  return VAR_16;

 return FUNC_18(VAR_17->rtc);
}
