
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rtc_plat_data {scalar_t__ irq; TYPE_1__* rtc; int lock; TYPE_1__* ioaddr; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct nvmem_config {char* name; int word_size; int stride; int * priv; int reg_write; int reg_read; int size; } ;
struct TYPE_8__ {int nvram_old_abi; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (int *,struct resource*) ;
 struct rtc_plat_data* FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ,int ,int ,struct platform_device*) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct rtc_plat_data*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_16)
{
 struct resource *VAR_17;
 struct rtc_plat_data *VAR_18;
 int VAR_19 = 0;
 struct nvmem_config VAR_20 = {
  .name = "ds1511_nvram",
  .word_size = 1,
  .stride = 1,
  .size = VAR_2,
  .reg_read = VAR_13,
  .reg_write = VAR_14,
  .priv = &VAR_16->dev,
 };

 VAR_18 = FUNC_4(&VAR_16->dev, sizeof(*VAR_18), VAR_6);
 if (!VAR_18)
  return -VAR_5;

 VAR_17 = FUNC_8(VAR_16, VAR_7, 0);
 VAR_11 = FUNC_3(&VAR_16->dev, VAR_17);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);
 VAR_18->ioaddr = VAR_11;
 VAR_18->irq = FUNC_7(VAR_16, 0);




 FUNC_14(VAR_1, VAR_9);
 FUNC_14(0, VAR_10);



 FUNC_14(0, VAR_3);
 FUNC_14(0, VAR_4);



 FUNC_10();




 if (FUNC_12(VAR_10) & VAR_0)
  FUNC_2(&VAR_16->dev, "voltage-low detected.\n");

 FUNC_15(&VAR_18->lock);
 FUNC_9(VAR_16, VAR_18);

 VAR_18->rtc = FUNC_6(&VAR_16->dev);
 if (FUNC_0(VAR_18->rtc))
  return FUNC_1(VAR_18->rtc);

 VAR_18->rtc->ops = &VAR_15;

 VAR_18->rtc->nvram_old_abi = 1;

 VAR_19 = FUNC_13(VAR_18->rtc);
 if (VAR_19)
  return VAR_19;

 FUNC_11(VAR_18->rtc, &VAR_20);





 if (VAR_18->irq > 0) {
  FUNC_12(VAR_10);
  if (FUNC_5(&VAR_16->dev, VAR_18->irq, VAR_12,
   VAR_8, VAR_16->name, VAR_16) < 0) {

   FUNC_2(&VAR_16->dev, "interrupt not available.\n");
   VAR_18->irq = 0;
  }
 }

 return 0;
}
