
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct i2c_device_id {unsigned int driver_data; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_4__ dev; int adapter; } ;
struct device_node {int dummy; } ;
struct abx80x_priv {TYPE_1__* rtc; struct i2c_client* client; } ;
typedef int buf ;
struct TYPE_14__ {int pn; scalar_t__ has_wdog; scalar_t__ has_tc; } ;
struct TYPE_12__ {int * ops; } ;


 unsigned int VAR_0 ;
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
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int VAR_21 ;
 TYPE_9__* VAR_22 ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct i2c_client*,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (struct abx80x_priv*) ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 int FUNC_7 (TYPE_4__*,char*,int,...) ;
 struct abx80x_priv* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,int,int *,int ,int,char*,struct i2c_client*) ;
 TYPE_1__* FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct abx80x_priv*) ;
 int FUNC_13 (struct i2c_client*,int ) ;
 int FUNC_14 (struct i2c_client*,int ,int,char*) ;
 int FUNC_15 (struct i2c_client*,int ,int) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int VAR_25 ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_26,
   const struct i2c_device_id *VAR_27)
{
 struct device_node *VAR_28 = VAR_26->dev.of_node;
 struct abx80x_priv *VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33 = -VAR_13;
 char VAR_34[7];
 unsigned int VAR_35 = VAR_27->driver_data;
 unsigned int VAR_36;
 unsigned int VAR_37, VAR_38;
 unsigned int VAR_39;
 unsigned int VAR_40;
 unsigned int VAR_41;

 if (!FUNC_11(VAR_26->adapter, VAR_18))
  return -VAR_15;

 VAR_32 = FUNC_14(VAR_26, VAR_11,
         sizeof(VAR_34), VAR_34);
 if (VAR_32 < 0) {
  FUNC_6(&VAR_26->dev, "Unable to read partnumber\n");
  return -VAR_14;
 }

 VAR_36 = (VAR_34[0] << 8) | VAR_34[1];
 VAR_37 = VAR_34[2] >> 3;
 VAR_38 = VAR_34[2] & 0x7;
 VAR_39 = ((VAR_34[4] & 0x80) << 2) | ((VAR_34[6] & 0x80) << 1) | VAR_34[3];
 VAR_41 = ((VAR_34[4] & 0x7f) << 8) | VAR_34[5];
 VAR_40 = (VAR_34[6] & 0x7c) >> 2;
 FUNC_7(&VAR_26->dev, "model %04x, revision %u.%u, lot %x, wafer %x, uid %x\n",
   VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41);

 VAR_31 = FUNC_13(VAR_26, VAR_9);
 if (VAR_31 < 0) {
  FUNC_6(&VAR_26->dev, "Unable to read control register\n");
  return -VAR_14;
 }

 VAR_32 = FUNC_15(VAR_26, VAR_9,
     ((VAR_31 & ~(VAR_3 |
         VAR_4)) |
      VAR_5));
 if (VAR_32 < 0) {
  FUNC_6(&VAR_26->dev, "Unable to write control register\n");
  return -VAR_14;
 }


 if (VAR_35 == VAR_21) {






  VAR_31 = FUNC_13(VAR_26, VAR_10);
  if (VAR_31 < 0) {
   FUNC_6(&VAR_26->dev,
    "Unable to read control2 register\n");
   return -VAR_14;
  }

  VAR_32 = FUNC_15(VAR_26, VAR_10,
      VAR_31 & ~VAR_2);
  if (VAR_32 < 0) {
   FUNC_6(&VAR_26->dev,
    "Unable to write control2 register\n");
   return -VAR_14;
  }






  VAR_31 = FUNC_13(VAR_26, VAR_12);
  if (VAR_31 < 0) {
   FUNC_6(&VAR_26->dev,
    "Unable to read output control register\n");
   return -VAR_14;
  }





  VAR_32 = FUNC_15(VAR_26, VAR_8,
      VAR_1);
  if (VAR_32 < 0) {
   FUNC_6(&VAR_26->dev,
    "Unable to write configuration key\n");
   return -VAR_14;
  }

  VAR_32 = FUNC_15(VAR_26, VAR_12,
      VAR_31 | VAR_6);
  if (VAR_32 < 0) {
   FUNC_6(&VAR_26->dev,
    "Unable to write output control register\n");
   return -VAR_14;
  }
 }


 if (VAR_35 == VAR_0) {
  for (VAR_30 = 0; VAR_22[VAR_30].pn; VAR_30++)
   if (VAR_36 == VAR_22[VAR_30].pn)
    break;
  if (VAR_22[VAR_30].pn == 0) {
   FUNC_6(&VAR_26->dev, "Unknown part: %04x\n",
    VAR_36);
   return -VAR_13;
  }
  VAR_35 = VAR_30;
 }

 if (VAR_36 != VAR_22[VAR_35].pn) {
  FUNC_6(&VAR_26->dev, "partnumber mismatch %04x != %04x\n",
   VAR_36, VAR_22[VAR_35].pn);
  return -VAR_13;
 }

 if (VAR_28 && VAR_22[VAR_35].has_tc)
  VAR_33 = FUNC_3(VAR_28);

 if (VAR_33 > 0) {
  FUNC_7(&VAR_26->dev, "Enabling trickle charger: %02x\n",
    VAR_33);
  FUNC_4(VAR_26, VAR_33);
 }

 VAR_32 = FUNC_15(VAR_26, VAR_7,
     FUNC_0(2));
 if (VAR_32)
  return VAR_32;

 VAR_29 = FUNC_8(&VAR_26->dev, sizeof(*VAR_29), VAR_17);
 if (VAR_29 == ((void*)0))
  return -VAR_16;

 VAR_29->rtc = FUNC_10(&VAR_26->dev);
 if (FUNC_1(VAR_29->rtc))
  return FUNC_2(VAR_29->rtc);

 VAR_29->rtc->ops = &VAR_24;
 VAR_29->client = VAR_26;

 FUNC_12(VAR_26, VAR_29);

 if (VAR_22[VAR_35].has_wdog) {
  VAR_32 = FUNC_5(VAR_29);
  if (VAR_32)
   return VAR_32;
 }

 if (VAR_26->irq > 0) {
  FUNC_7(&VAR_26->dev, "IRQ %d supplied\n", VAR_26->irq);
  VAR_32 = FUNC_9(&VAR_26->dev, VAR_26->irq, ((void*)0),
      VAR_23,
      VAR_20 | VAR_19,
      "abx8xx",
      VAR_26);
  if (VAR_32) {
   FUNC_6(&VAR_26->dev, "unable to request IRQ, alarms disabled\n");
   VAR_26->irq = 0;
  }
 }

 VAR_32 = FUNC_16(VAR_29->rtc, &VAR_25);
 if (VAR_32) {
  FUNC_6(&VAR_26->dev, "Failed to create sysfs group: %d\n",
   VAR_32);
  return VAR_32;
 }

 return FUNC_17(VAR_29->rtc);
}
