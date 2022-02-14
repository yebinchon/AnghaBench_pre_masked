
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct rtc_class_ops {int dummy; } ;
struct resource {int flags; int start; } ;
struct TYPE_14__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct nvmem_config {char* name; int word_size; int stride; int size; struct platform_device* priv; int reg_write; int reg_read; } ;
struct m48t59_private {scalar_t__ irq; TYPE_1__* rtc; int lock; scalar_t__ ioaddr; } ;
struct m48t59_plat_data {int type; int offset; scalar_t__ ioaddr; scalar_t__ read_byte; scalar_t__ write_byte; } ;
struct TYPE_13__ {int nvram_old_abi; struct rtc_class_ops const* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;



 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 struct m48t59_plat_data* FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ) ;
 void* FUNC_5 (TYPE_4__*,int,int ) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int ,int ,char*,TYPE_4__*) ;
 TYPE_1__* FUNC_7 (TYPE_4__*) ;
 struct rtc_class_ops VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct rtc_class_ops VAR_14 ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int,int ) ;
 int FUNC_10 (struct platform_device*,struct m48t59_private*) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct m48t59_plat_data *VAR_16 = FUNC_3(&VAR_15->dev);
 struct m48t59_private *VAR_17 = ((void*)0);
 struct resource *VAR_18;
 int VAR_19 = -VAR_2;
 const struct rtc_class_ops *VAR_20;
 struct nvmem_config VAR_21 = {
  .name = "m48t59-",
  .word_size = 1,
  .stride = 1,
  .reg_read = VAR_11,
  .reg_write = VAR_12,
  .priv = VAR_15,
 };


 VAR_18 = FUNC_9(VAR_15, VAR_5, 0);
 if (!VAR_18) {
  VAR_18 = FUNC_9(VAR_15, VAR_4, 0);
  if (!VAR_18)
   return -VAR_0;
 }

 if (VAR_18->flags & VAR_4) {



  if (!VAR_16 || !VAR_16->write_byte || !VAR_16->read_byte)
   return -VAR_0;
 } else if (VAR_18->flags & VAR_5) {

  if (!VAR_16) {
   VAR_16 = FUNC_5(&VAR_15->dev, sizeof(*VAR_16),
      VAR_3);
   if (!VAR_16)
    return -VAR_2;

   VAR_15->dev.platform_data = VAR_16;
  }
  if (!VAR_16->type)
   VAR_16->type = 128;


  if (!VAR_16->write_byte)
   VAR_16->write_byte = VAR_10;
  if (!VAR_16->read_byte)
   VAR_16->read_byte = VAR_9;
 }

 VAR_17 = FUNC_5(&VAR_15->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->ioaddr = VAR_16->ioaddr;

 if (!VAR_17->ioaddr) {

  VAR_17->ioaddr = FUNC_4(&VAR_15->dev, VAR_18->start,
      FUNC_11(VAR_18));
  if (!VAR_17->ioaddr)
   return VAR_19;
 }




 VAR_17->irq = FUNC_8(VAR_15, 0);
 if (VAR_17->irq <= 0)
  VAR_17->irq = VAR_7;

 if (VAR_17->irq != VAR_7) {
  VAR_19 = FUNC_6(&VAR_15->dev, VAR_17->irq,
    VAR_13, VAR_6,
    "rtc-m48t59", &VAR_15->dev);
  if (VAR_19)
   return VAR_19;
 }
 switch (VAR_16->type) {
 case 128:
  VAR_20 = &VAR_14;
  VAR_16->offset = 0x1ff0;
  break;
 case 130:
  VAR_20 = &VAR_8;
  VAR_16->offset = 0x7f0;
  break;
 case 129:
  VAR_20 = &VAR_8;
  VAR_16->offset = 0x1ff0;
  break;
 default:
  FUNC_2(&VAR_15->dev, "Unknown RTC type\n");
  return -VAR_1;
 }

 FUNC_14(&VAR_17->lock);
 FUNC_10(VAR_15, VAR_17);

 VAR_17->rtc = FUNC_7(&VAR_15->dev);
 if (FUNC_0(VAR_17->rtc))
  return FUNC_1(VAR_17->rtc);

 VAR_17->rtc->nvram_old_abi = 1;
 VAR_17->rtc->ops = VAR_20;

 VAR_21.size = VAR_16->offset;
 VAR_19 = FUNC_12(VAR_17->rtc, &VAR_21);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_13(VAR_17->rtc);
 if (VAR_19)
  return VAR_19;

 return 0;
}
