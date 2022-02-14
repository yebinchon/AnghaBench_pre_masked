
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtc_class_ops {int * alarm_irq_enable; int * set_alarm; int * read_alarm; } ;
struct pl031_vendor_data {int irqflags; scalar_t__ st_weekday; scalar_t__ clockwatch; int ops; } ;
struct pl031_local {TYPE_1__* rtc; scalar_t__ base; struct pl031_vendor_data* vendor; } ;
struct amba_id {struct pl031_vendor_data* data; } ;
struct TYPE_7__ {int start; } ;
struct amba_device {scalar_t__* irq; int dev; TYPE_2__ res; } ;
struct TYPE_6__ {struct rtc_class_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct amba_device*) ;
 int FUNC_3 (struct amba_device*) ;
 int FUNC_4 (struct amba_device*,int *) ;
 int FUNC_5 (struct amba_device*) ;
 int FUNC_6 (struct amba_device*,struct pl031_local*) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 struct rtc_class_ops* FUNC_11 (int *,int *,int,int ) ;
 struct pl031_local* FUNC_12 (int *,int,int ) ;
 TYPE_1__* FUNC_13 (int *) ;
 int VAR_13 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int ,int ,char*,struct pl031_local*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct amba_device *VAR_14, const struct amba_id *VAR_15)
{
 int VAR_16;
 struct pl031_local *VAR_17;
 struct pl031_vendor_data *VAR_18 = VAR_15->data;
 struct rtc_class_ops *VAR_19;
 unsigned long VAR_20, VAR_21;

 VAR_16 = FUNC_4(VAR_14, ((void*)0));
 if (VAR_16)
  goto err_req;

 VAR_17 = FUNC_12(&VAR_14->dev, sizeof(struct pl031_local),
        VAR_1);
 VAR_19 = FUNC_11(&VAR_14->dev, &VAR_18->ops, sizeof(VAR_18->ops),
      VAR_1);
 if (!VAR_17 || !VAR_19) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_17->vendor = VAR_18;
 VAR_17->base = FUNC_10(&VAR_14->dev, VAR_14->res.start,
       FUNC_16(&VAR_14->res));
 if (!VAR_17->base) {
  VAR_16 = -VAR_0;
  goto out;
 }

 FUNC_6(VAR_14, VAR_17);

 FUNC_7(&VAR_14->dev, "designer ID = 0x%02x\n", FUNC_2(VAR_14));
 FUNC_7(&VAR_14->dev, "revision = 0x%01x\n", FUNC_5(VAR_14));

 VAR_21 = FUNC_14(VAR_17->base + VAR_2);

 if (VAR_18->clockwatch)
  VAR_21 |= VAR_3;
 else
  VAR_21 |= VAR_4;
 FUNC_18(VAR_21, VAR_17->base + VAR_2);





 if (VAR_18->st_weekday) {
  if (FUNC_14(VAR_17->base + VAR_11) == 0x2000) {
   VAR_20 = FUNC_14(VAR_17->base + VAR_5);
   if ((VAR_20 &
        (VAR_8 | VAR_7 | VAR_9))
       == 0x02120000) {
    VAR_20 = VAR_20 | (0x7 << VAR_10);
    FUNC_18(0x2000, VAR_17->base + VAR_12);
    FUNC_18(VAR_20, VAR_17->base + VAR_6);
   }
  }
 }

 if (!VAR_14->irq[0]) {

  VAR_19->read_alarm = ((void*)0);
  VAR_19->set_alarm = ((void*)0);
  VAR_19->alarm_irq_enable = ((void*)0);
 }

 FUNC_9(&VAR_14->dev, 1);
 VAR_17->rtc = FUNC_13(&VAR_14->dev);
 if (FUNC_0(VAR_17->rtc))
  return FUNC_1(VAR_17->rtc);

 VAR_17->rtc->ops = VAR_19;

 VAR_16 = FUNC_17(VAR_17->rtc);
 if (VAR_16)
  goto out;

 if (VAR_14->irq[0]) {
  VAR_16 = FUNC_15(VAR_14->irq[0], VAR_13,
      VAR_18->irqflags, "rtc-pl031", VAR_17);
  if (VAR_16)
   goto out;
  FUNC_8(&VAR_14->dev, VAR_14->irq[0]);
 }
 return 0;

out:
 FUNC_3(VAR_14);
err_req:

 return VAR_16;
}
