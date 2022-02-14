
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u8 ;
struct nvmem_config {char* name; int word_size; int stride; struct ds1307* priv; int reg_write; int reg_read; scalar_t__ size; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_22__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_5__ dev; int name; } ;
struct ds1307_platform_data {int trickle_charger_setup; } ;
struct ds1307 {int type; TYPE_1__* rtc; TYPE_5__* dev; int flags; int name; TYPE_1__* regmap; } ;
struct chip_desc {size_t trickle_charger_reg; unsigned char bbsqi_bit; int offset; scalar_t__ nvram_size; scalar_t__ rtc_ops; scalar_t__ irq_handler; scalar_t__ alarm; } ;
struct acpi_device_id {size_t driver_data; } ;
typedef int regs ;
typedef enum ds_type { ____Placeholder_ds_type } ds_type ;
struct TYPE_21__ {int uie_unsupported; int nvram_old_abi; int * ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned char VAR_18 ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct acpi_device_id* FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int) ;
 unsigned char FUNC_5 (int) ;
 struct chip_desc* VAR_25 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_5__*,char*,int,...) ;
 int FUNC_8 (TYPE_5__*,char*) ;
 struct ds1307_platform_data* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (TYPE_5__*,struct ds1307*) ;
 int FUNC_12 (TYPE_5__*,char*) ;
 int FUNC_13 (TYPE_5__*,int) ;
 struct ds1307* FUNC_14 (TYPE_5__*,int,int ) ;
 TYPE_1__* FUNC_15 (struct i2c_client*,int *) ;
 int FUNC_16 (TYPE_5__*,int,int *,int ,int,int ,struct ds1307*) ;
 TYPE_1__* FUNC_17 (TYPE_5__*) ;
 int VAR_26 ;
 int FUNC_18 (struct ds1307*) ;
 int FUNC_19 (struct ds1307*) ;
 int FUNC_20 (struct ds1307*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_21 (struct ds1307*,struct chip_desc const*) ;
 int VAR_30 ;





 int FUNC_22 (struct i2c_client*,struct ds1307*) ;



 int VAR_31 ;
 scalar_t__ FUNC_23 (TYPE_5__*) ;
 scalar_t__ FUNC_24 (scalar_t__,char*) ;
 int FUNC_25 (TYPE_1__*,int,unsigned char*,int) ;
 int VAR_32 ;
 int FUNC_26 (TYPE_1__*,size_t,unsigned char) ;
 int FUNC_27 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_28 (TYPE_1__*) ;

 int FUNC_29 (int ,int *) ;

__attribute__((used)) static int FUNC_30(struct i2c_client *VAR_33,
   const struct i2c_device_id *VAR_34)
{
 struct ds1307 *VAR_35;
 int VAR_36 = -VAR_12;
 int VAR_37;
 const struct chip_desc *VAR_38;
 bool VAR_39;
 bool VAR_40 = 0;
 unsigned char VAR_41[8];
 struct ds1307_platform_data *VAR_42 = FUNC_9(&VAR_33->dev);
 u8 VAR_43 = 0;

 VAR_35 = FUNC_14(&VAR_33->dev, sizeof(struct ds1307), VAR_14);
 if (!VAR_35)
  return -VAR_13;

 FUNC_11(&VAR_33->dev, VAR_35);
 VAR_35->dev = &VAR_33->dev;
 VAR_35->name = VAR_33->name;

 VAR_35->regmap = FUNC_15(VAR_33, &VAR_32);
 if (FUNC_1(VAR_35->regmap)) {
  FUNC_8(VAR_35->dev, "regmap allocation failed\n");
  return FUNC_2(VAR_35->regmap);
 }

 FUNC_22(VAR_33, VAR_35);

 if (VAR_33->dev.of_node) {
  VAR_35->type = (enum ds_type)
   FUNC_23(&VAR_33->dev);
  VAR_38 = &VAR_25[VAR_35->type];
 } else if (VAR_34) {
  VAR_38 = &VAR_25[VAR_34->driver_data];
  VAR_35->type = VAR_34->driver_data;
 } else {
  const struct acpi_device_id *VAR_44;

  VAR_44 = FUNC_3(FUNC_0(VAR_26),
         VAR_35->dev);
  if (!VAR_44)
   return -VAR_12;
  VAR_38 = &VAR_25[VAR_44->driver_data];
  VAR_35->type = VAR_44->driver_data;
 }

 VAR_39 = VAR_33->irq > 0 && VAR_38->alarm;

 if (!VAR_42)
  VAR_43 = FUNC_21(VAR_35, VAR_38);
 else if (VAR_42->trickle_charger_setup)
  VAR_43 = VAR_42->trickle_charger_setup;

 if (VAR_43 && VAR_38->trickle_charger_reg) {
  VAR_43 |= VAR_11;
  FUNC_7(VAR_35->dev,
   "writing trickle charger info 0x%x to 0x%x\n",
   VAR_43, VAR_38->trickle_charger_reg);
  FUNC_26(VAR_35->regmap, VAR_38->trickle_charger_reg,
        VAR_43);
 }
 switch (VAR_35->type) {
 case 136:
 case 135:
 case 133:
 case 132:

  VAR_36 = FUNC_25(VAR_35->regmap, VAR_9,
           VAR_41, 2);
  if (VAR_36) {
   FUNC_7(VAR_35->dev, "read error %d\n", VAR_36);
   goto exit;
  }


  if (VAR_41[0] & VAR_8)
   VAR_41[0] &= ~VAR_8;







  if (VAR_39 || VAR_40) {
   VAR_41[0] |= VAR_6 | VAR_38->bbsqi_bit;
   VAR_41[0] &= ~(VAR_5 | VAR_4);
  }

  FUNC_26(VAR_35->regmap, VAR_9,
        VAR_41[0]);


  if (VAR_41[1] & VAR_7) {
   FUNC_26(VAR_35->regmap, VAR_10,
         VAR_41[1] & ~VAR_7);
   FUNC_12(VAR_35->dev, "SET TIME!\n");
  }
  break;

 case 128:
  VAR_36 = FUNC_25(VAR_35->regmap,
           VAR_23 << 4 | 0x08, VAR_41, 2);
  if (VAR_36) {
   FUNC_7(VAR_35->dev, "read error %d\n", VAR_36);
   goto exit;
  }


  if (!(VAR_41[1] & VAR_22)) {
   VAR_41[1] |= VAR_22;
   FUNC_26(VAR_35->regmap,
         VAR_24 << 4 | 0x08,
         VAR_41[1]);
   FUNC_12(VAR_35->dev,
     "oscillator stop detected - SET TIME!\n");
  }

  if (VAR_41[1] & VAR_20) {
   VAR_41[1] &= ~VAR_20;
   FUNC_26(VAR_35->regmap,
         VAR_24 << 4 | 0x08,
         VAR_41[1]);
   FUNC_12(VAR_35->dev, "power-on detected\n");
  }

  if (VAR_41[1] & VAR_21) {
   VAR_41[1] &= ~VAR_21;
   FUNC_26(VAR_35->regmap,
         VAR_24 << 4 | 0x08,
         VAR_41[1]);
   FUNC_12(VAR_35->dev, "voltage drop detected\n");
  }


  if (!(VAR_41[0] & VAR_19)) {
   u8 VAR_45;


   FUNC_26(VAR_35->regmap,
         VAR_23 << 4 | 0x08,
         VAR_41[0] | VAR_19);

   VAR_36 = FUNC_25(VAR_35->regmap,
            VAR_23 << 4 | 0x08,
            VAR_41, 2);
   if (VAR_36) {
    FUNC_7(VAR_35->dev, "read error %d\n", VAR_36);
    goto exit;
   }


   VAR_45 = FUNC_4(VAR_41[VAR_2]);
   if (VAR_45 == 12)
    VAR_45 = 0;
   if (VAR_41[VAR_2] & VAR_1)
    VAR_45 += 12;

   FUNC_26(VAR_35->regmap,
         VAR_2 << 4 | 0x08, VAR_45);
  }
  break;
 default:
  break;
 }


 VAR_36 = FUNC_25(VAR_35->regmap, VAR_38->offset, VAR_41,
          sizeof(VAR_41));
 if (VAR_36) {
  FUNC_7(VAR_35->dev, "read error %d\n", VAR_36);
  goto exit;
 }

 if (VAR_35->type == VAR_31 &&
     !(VAR_41[VAR_3] & VAR_18)) {
  FUNC_26(VAR_35->regmap, VAR_3,
        VAR_41[VAR_3] |
        VAR_18);
 }

 VAR_37 = VAR_41[VAR_2];
 switch (VAR_35->type) {
 case 134:
 case 131:
 case 130:
 case 129:




  break;
 case 128:
  break;
 default:
  if (!(VAR_37 & VAR_0))
   break;





  VAR_37 = FUNC_4(VAR_37 & 0x1f);
  if (VAR_37 == 12)
   VAR_37 = 0;
  if (VAR_41[VAR_2] & VAR_1)
   VAR_37 += 12;
  FUNC_26(VAR_35->regmap, VAR_38->offset + VAR_2,
        FUNC_5(VAR_37));
 }

 if (VAR_39 || VAR_40) {
  FUNC_13(VAR_35->dev, 1);
  FUNC_29(VAR_15, &VAR_35->flags);
 }

 VAR_35->rtc = FUNC_17(VAR_35->dev);
 if (FUNC_1(VAR_35->rtc))
  return FUNC_2(VAR_35->rtc);

 if (VAR_40 && !VAR_39) {
  FUNC_10(VAR_35->dev,
    "'wakeup-source' is set, request for an IRQ is disabled!\n");

  VAR_35->rtc->uie_unsupported = 1;
 }

 if (VAR_39) {
  VAR_36 = FUNC_16(VAR_35->dev, VAR_33->irq, ((void*)0),
      VAR_38->irq_handler ?: VAR_27,
      VAR_17 | VAR_16,
      VAR_35->name, VAR_35);
  if (VAR_36) {
   VAR_33->irq = 0;
   FUNC_13(VAR_35->dev, 0);
   FUNC_6(VAR_15, &VAR_35->flags);
   FUNC_8(VAR_35->dev, "unable to request IRQ!\n");
  } else {
   FUNC_7(VAR_35->dev, "got IRQ %d\n", VAR_33->irq);
  }
 }

 VAR_35->rtc->ops = VAR_38->rtc_ops ?: &VAR_30;
 VAR_36 = FUNC_18(VAR_35);
 if (VAR_36)
  return VAR_36;

 VAR_36 = FUNC_28(VAR_35->rtc);
 if (VAR_36)
  return VAR_36;

 if (VAR_38->nvram_size) {
  struct nvmem_config VAR_46 = {
   .name = "ds1307_nvram",
   .word_size = 1,
   .stride = 1,
   .size = VAR_38->nvram_size,
   .reg_read = VAR_28,
   .reg_write = VAR_29,
   .priv = VAR_35,
  };

  VAR_35->rtc->nvram_old_abi = 1;
  FUNC_27(VAR_35->rtc, &VAR_46);
 }

 FUNC_20(VAR_35);
 FUNC_19(VAR_35);

 return 0;

exit:
 return VAR_36;
}
