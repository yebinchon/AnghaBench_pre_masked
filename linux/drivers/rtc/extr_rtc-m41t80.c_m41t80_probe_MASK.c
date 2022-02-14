
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct m41t80_data {unsigned long features; TYPE_1__* rtc; struct i2c_client* client; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_16__ {scalar_t__ of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_2__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {TYPE_2__ dev; } ;
struct TYPE_17__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;
struct TYPE_15__ {int uie_unsupported; TYPE_4__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 struct m41t80_data* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int *,int ,int,char*,struct i2c_client*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct i2c_adapter*,int) ;
 int FUNC_10 (struct i2c_client*,struct m41t80_data*) ;
 int FUNC_11 (struct i2c_client*,int ) ;
 int FUNC_12 (struct i2c_client*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__ VAR_16 ;
 int FUNC_13 (TYPE_2__*,struct rtc_time*) ;
 int VAR_17 ;
 int FUNC_14 (struct m41t80_data*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (scalar_t__,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*) ;
 struct i2c_client* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_21,
   const struct i2c_device_id *VAR_22)
{
 struct i2c_adapter *VAR_23 = VAR_21->adapter;
 int VAR_24 = 0;
 struct rtc_time VAR_25;
 struct m41t80_data *VAR_26 = ((void*)0);
 bool VAR_27 = 0;

 if (!FUNC_9(VAR_21->adapter, VAR_4 |
         VAR_3)) {
  FUNC_2(&VAR_23->dev, "doesn't support I2C_FUNC_SMBUS_BYTE_DATA | I2C_FUNC_SMBUS_I2C_BLOCK\n");
  return -VAR_0;
 }

 VAR_26 = FUNC_6(&VAR_21->dev, sizeof(*VAR_26),
       VAR_2);
 if (!VAR_26)
  return -VAR_1;

 VAR_26->client = VAR_21;
 if (VAR_21->dev.of_node)
  VAR_26->features = (unsigned long)
   FUNC_17(&VAR_21->dev);
 else
  VAR_26->features = VAR_22->driver_data;
 FUNC_10(VAR_21, VAR_26);

 VAR_26->rtc = FUNC_8(&VAR_21->dev);
 if (FUNC_0(VAR_26->rtc))
  return FUNC_1(VAR_26->rtc);





 if (VAR_21->irq > 0) {
  VAR_24 = FUNC_7(&VAR_21->dev, VAR_21->irq,
            ((void*)0), VAR_14,
            VAR_6 | VAR_5,
            "m41t80", VAR_21);
  if (VAR_24) {
   FUNC_4(&VAR_21->dev, "unable to request IRQ, alarms disabled\n");
   VAR_21->irq = 0;
   VAR_27 = 0;
  }
 }
 if (VAR_21->irq > 0 || VAR_27) {
  VAR_16.read_alarm = VAR_15;
  VAR_16.set_alarm = VAR_17;
  VAR_16.alarm_irq_enable = VAR_13;

  FUNC_5(&VAR_21->dev, 1);
 }

 VAR_26->rtc->ops = &VAR_16;

 if (VAR_21->irq <= 0) {

  VAR_26->rtc->uie_unsupported = 1;
 }


 VAR_24 = FUNC_11(VAR_21, VAR_10);

 if (VAR_24 >= 0 && VAR_24 & VAR_7) {
  if (VAR_26->features & VAR_8) {
   FUNC_13(&VAR_21->dev, &VAR_25);
   FUNC_3(&VAR_21->dev, "HT bit was set!\n");
   FUNC_3(&VAR_21->dev, "Power Down at %ptR\n", &VAR_25);
  }
  VAR_24 = FUNC_12(VAR_21, VAR_10,
            VAR_24 & ~VAR_7);
 }

 if (VAR_24 < 0) {
  FUNC_2(&VAR_21->dev, "Can't clear HT bit\n");
  return VAR_24;
 }


 VAR_24 = FUNC_11(VAR_21, VAR_11);

 if (VAR_24 >= 0 && VAR_24 & VAR_12)
  VAR_24 = FUNC_12(VAR_21, VAR_11,
            VAR_24 & ~VAR_12);
 if (VAR_24 < 0) {
  FUNC_2(&VAR_21->dev, "Can't clear ST bit\n");
  return VAR_24;
 }
 VAR_24 = FUNC_20(VAR_26->rtc);
 if (VAR_24)
  return VAR_24;

 return 0;
}
