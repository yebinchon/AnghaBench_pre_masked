
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct rtc_device {int uie_unsupported; int nvram_old_abi; int max_user_freq; int range_max; int range_min; int * ops; } ;
struct resource {int start; } ;
struct TYPE_7__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct nvmem_config {char* name; struct ds1685_priv* priv; int reg_write; int reg_read; int size; } ;
struct ds1685_rtc_platform_data {scalar_t__ regstep; int (* plat_read ) (struct ds1685_priv*,int ) ;scalar_t__ no_irq; scalar_t__ uie_unsupported; scalar_t__ bcd_mode; scalar_t__ plat_post_ram_clear; scalar_t__ plat_wake_alarm; scalar_t__ plat_prepare_poweroff; scalar_t__ alloc_io_resources; int (* plat_write ) (struct ds1685_priv*,int ,int) ;} ;
struct ds1685_priv {int regstep; int (* read ) (struct ds1685_priv*,int ) ;int irq_num; scalar_t__ no_irq; struct rtc_device* dev; scalar_t__ uie_unsupported; int (* write ) (struct ds1685_priv*,int ,int) ;scalar_t__ bcd_mode; scalar_t__ post_ram_clear; scalar_t__ wake_alarm; scalar_t__ prepare_poweroff; scalar_t__ alloc_io_resources; int regs; int size; int baseaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_8 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 struct ds1685_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int,int *,int ,int,int ,struct platform_device*) ;
 struct rtc_device* FUNC_8 (TYPE_1__*) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_9 (struct ds1685_priv*,int ) ;
 int FUNC_10 (struct ds1685_priv*,int,int ,int ) ;
 int FUNC_11 (struct ds1685_priv*,int,int ,int ) ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_12 (struct ds1685_priv*) ;
 int VAR_45 ;
 int FUNC_13 (struct ds1685_priv*,int ,int) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct ds1685_priv*) ;
 int FUNC_17 (struct resource*) ;
 int FUNC_18 (struct rtc_device*,int *) ;
 int FUNC_19 (struct rtc_device*,struct nvmem_config*) ;
 int FUNC_20 (struct rtc_device*) ;
 int FUNC_21 (struct ds1685_priv*,int ) ;
 int FUNC_22 (struct ds1685_priv*,int ,int) ;
 int FUNC_23 (struct ds1685_priv*,int ,int) ;
 int FUNC_24 (struct ds1685_priv*,int ) ;
 int FUNC_25 (struct ds1685_priv*,int ,int) ;
 int FUNC_26 (struct ds1685_priv*,int ,int) ;
 int FUNC_27 (struct ds1685_priv*,int ,int) ;
 int FUNC_28 (struct ds1685_priv*,int ) ;
 int FUNC_29 (struct ds1685_priv*,int ) ;
 int FUNC_30 (struct ds1685_priv*,int ) ;
 int FUNC_31 (struct ds1685_priv*,int ,int) ;
 int FUNC_32 (struct ds1685_priv*,int ,int) ;
 int FUNC_33 (struct ds1685_priv*,int ) ;
 int FUNC_34 (struct ds1685_priv*,int ) ;
 int FUNC_35 (struct ds1685_priv*,int ,int) ;
 int FUNC_36 (struct ds1685_priv*,int ) ;
 int FUNC_37 (struct ds1685_priv*,int ,int) ;
 int FUNC_38 (struct ds1685_priv*,int ) ;
 int FUNC_39 (struct ds1685_priv*,int ,int) ;
 int FUNC_40 (struct ds1685_priv*,int ) ;
 int FUNC_41 (struct ds1685_priv*,int ,int) ;
 int FUNC_42 (struct ds1685_priv*,int ) ;
 int FUNC_43 (struct ds1685_priv*,int ,int) ;
 int FUNC_44 (struct ds1685_priv*,int ) ;
 int FUNC_45 (struct ds1685_priv*,int ) ;
 int FUNC_46 (struct ds1685_priv*,int ) ;
 int FUNC_47 (struct ds1685_priv*,int ) ;
 scalar_t__ FUNC_48 (int) ;

__attribute__((used)) static int
FUNC_49(struct platform_device *VAR_46)
{
 struct rtc_device *VAR_47;
 struct resource *VAR_48;
 struct ds1685_priv *VAR_49;
 struct ds1685_rtc_platform_data *VAR_50;
 u8 VAR_51, VAR_52, VAR_53;
 unsigned char VAR_54;
 int VAR_55 = 0;
 struct nvmem_config VAR_56 = {
  .name = "ds1685_nvram",
  .size = VAR_8,
  .reg_read = VAR_41,
  .reg_write = VAR_42,
 };


 VAR_50 = (struct ds1685_rtc_platform_data *) VAR_46->dev.platform_data;
 if (!VAR_50)
  return -VAR_1;


 VAR_49 = FUNC_5(&VAR_46->dev, sizeof(*VAR_49), VAR_4);
 if (!VAR_49)
  return -VAR_2;







 if (VAR_50->alloc_io_resources) {

  VAR_48 = FUNC_15(VAR_46, VAR_5, 0);
  if (!VAR_48)
   return -VAR_3;
  VAR_49->size = FUNC_17(VAR_48);



  if (!FUNC_6(&VAR_46->dev, VAR_48->start, VAR_49->size,
          VAR_46->name))
   return -VAR_0;





  VAR_49->baseaddr = VAR_48->start;
  VAR_49->regs = FUNC_4(&VAR_46->dev, VAR_48->start, VAR_49->size);
  if (!VAR_49->regs)
   return -VAR_2;
 }
 VAR_49->alloc_io_resources = VAR_50->alloc_io_resources;


 if (VAR_50->regstep > 0)
  VAR_49->regstep = VAR_50->regstep;
 else
  VAR_49->regstep = 1;


 if (VAR_50->plat_read)
  VAR_49->read = VAR_50->plat_read;
 else
  if (VAR_50->alloc_io_resources)
   VAR_49->read = FUNC_9;
  else
   return -VAR_3;


 if (VAR_50->plat_write)
  VAR_49->write = VAR_50->plat_write;
 else
  if (VAR_50->alloc_io_resources)
   VAR_49->write = FUNC_13;
  else
   return -VAR_3;


 if (VAR_50->plat_prepare_poweroff)
  VAR_49->prepare_poweroff = VAR_50->plat_prepare_poweroff;


 if (VAR_50->plat_wake_alarm)
  VAR_49->wake_alarm = VAR_50->plat_wake_alarm;


 if (VAR_50->plat_post_ram_clear)
  VAR_49->post_ram_clear = VAR_50->plat_post_ram_clear;


 FUNC_16(VAR_46, VAR_49);


 VAR_51 = VAR_49->read(VAR_49, VAR_15);
 if (!(VAR_51 & VAR_17))
  VAR_51 |= VAR_17;


 VAR_51 &= ~(VAR_18);


 VAR_51 &= ~(VAR_19);





 VAR_51 |= VAR_16;
 VAR_49->write(VAR_49, VAR_15, VAR_51);


 VAR_49->write(VAR_49, VAR_30,
     (VAR_49->read(VAR_49, VAR_30) | VAR_12));


 VAR_49->write(VAR_49, VAR_20,
     (VAR_49->read(VAR_49, VAR_20) | VAR_25));


 while (VAR_49->read(VAR_49, VAR_29) & VAR_9)
  FUNC_2();





 VAR_52 = VAR_49->read(VAR_49, VAR_20);
 if (VAR_50->bcd_mode)
  VAR_52 &= ~(VAR_22);
 else
  VAR_52 |= VAR_22;
 VAR_49->bcd_mode = VAR_50->bcd_mode;






 if (VAR_52 & VAR_23)
  VAR_52 &= ~(VAR_23);


 if (!(VAR_52 & VAR_21)) {

  VAR_53 = VAR_49->read(VAR_49, VAR_31);
  VAR_54 = VAR_53 & VAR_37;
  VAR_53 = FUNC_10(VAR_49, VAR_53, VAR_32,
        VAR_33);
  VAR_53 = ((VAR_53 == 12) ? 0 : ((VAR_54) ? VAR_53 + 12 : VAR_53));


  VAR_52 |= VAR_21;


  VAR_49->write(VAR_49, VAR_20, VAR_52);


  VAR_49->write(VAR_49, VAR_31,
      FUNC_11(VAR_49, VAR_53,
           VAR_35,
           VAR_34));


  VAR_53 = VAR_49->read(VAR_49, VAR_36);
  VAR_54 = VAR_53 & VAR_37;
  VAR_53 = FUNC_10(VAR_49, VAR_53, VAR_32,
        VAR_33);
  VAR_53 = ((VAR_53 == 12) ? 0 : ((VAR_54) ? VAR_53 + 12 : VAR_53));


  VAR_49->write(VAR_49, VAR_36,
      FUNC_11(VAR_49, VAR_53,
           VAR_35,
           VAR_34));
 } else {

  VAR_49->write(VAR_49, VAR_20, VAR_52);
 }


 VAR_49->write(VAR_49, VAR_20,
     (VAR_49->read(VAR_49, VAR_20) & ~(VAR_25)));


 if (!(VAR_49->read(VAR_49, VAR_27) & VAR_28))
  FUNC_3(&VAR_46->dev,
    "Main battery is exhausted! RTC may be invalid!\n");


 if (!(VAR_49->read(VAR_49, VAR_29) & VAR_11))
  FUNC_3(&VAR_46->dev,
    "Aux battery is exhausted or not available.\n");


 VAR_49->write(VAR_49, VAR_20,
     (VAR_49->read(VAR_49, VAR_20) & ~(VAR_24)));


 VAR_49->read(VAR_49, VAR_26);


 VAR_49->write(VAR_49, VAR_30,
     (VAR_49->read(VAR_49, VAR_30) & ~(VAR_14)));


 VAR_49->write(VAR_49, VAR_29,
     (VAR_49->read(VAR_49, VAR_29) & ~(VAR_10)));





 VAR_49->write(VAR_49, VAR_30,
     (VAR_49->read(VAR_49, VAR_30) | VAR_13));

 VAR_47 = FUNC_8(&VAR_46->dev);
 if (FUNC_0(VAR_47))
  return FUNC_1(VAR_47);

 VAR_47->ops = &VAR_44;


 VAR_47->range_min = VAR_39;
 VAR_47->range_max = VAR_40;


 VAR_47->max_user_freq = VAR_38;


 if (VAR_50->uie_unsupported)
  VAR_47->uie_unsupported = 1;
 VAR_49->uie_unsupported = VAR_50->uie_unsupported;

 VAR_49->dev = VAR_47;
 if (!VAR_50->no_irq) {
  VAR_55 = FUNC_14(VAR_46, 0);
  if (VAR_55 <= 0)
   return VAR_55;

  VAR_49->irq_num = VAR_55;


  VAR_55 = FUNC_7(&VAR_46->dev, VAR_49->irq_num,
           ((void*)0), VAR_43,
           VAR_7 | VAR_6,
           VAR_46->name, VAR_46);


  if (FUNC_48(VAR_55)) {
   FUNC_3(&VAR_46->dev,
     "RTC interrupt not available\n");
   VAR_49->irq_num = 0;
  }
 }
 VAR_49->no_irq = VAR_50->no_irq;


 FUNC_12(VAR_49);

 VAR_55 = FUNC_18(VAR_47, &VAR_45);
 if (VAR_55)
  return VAR_55;

 VAR_47->nvram_old_abi = 1;
 VAR_56.priv = VAR_49;
 VAR_55 = FUNC_19(VAR_47, &VAR_56);
 if (VAR_55)
  return VAR_55;

 return FUNC_20(VAR_47);
}
