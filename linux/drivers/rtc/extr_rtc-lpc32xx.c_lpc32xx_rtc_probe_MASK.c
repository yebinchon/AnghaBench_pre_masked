
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct lpc32xx_rtc {int irq; TYPE_1__* rtc; int lock; TYPE_1__* rtc_base; } ;
struct TYPE_6__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_18 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *,struct resource*) ;
 struct lpc32xx_rtc* FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,int,int ,int ,int ,struct lpc32xx_rtc*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct lpc32xx_rtc*) ;
 int FUNC_11 (struct lpc32xx_rtc*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct lpc32xx_rtc*,int ,int) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_21)
{
 struct resource *VAR_22;
 struct lpc32xx_rtc *VAR_23;
 int VAR_24;
 u32 VAR_25;

 VAR_23 = FUNC_5(&VAR_21->dev, sizeof(*VAR_23), VAR_1);
 if (FUNC_15(!VAR_23))
  return -VAR_0;

 VAR_22 = FUNC_9(VAR_21, VAR_2, 0);
 VAR_23->rtc_base = FUNC_4(&VAR_21->dev, VAR_22);
 if (FUNC_0(VAR_23->rtc_base))
  return FUNC_1(VAR_23->rtc_base);

 FUNC_14(&VAR_23->lock);






 VAR_25 = FUNC_11(VAR_23, VAR_3);
 if (FUNC_11(VAR_23, VAR_15) != VAR_16) {
  VAR_25 &= ~(VAR_10 |
   VAR_4 |
   VAR_5 |
   VAR_6 |
   VAR_8 |
   VAR_9 |
   VAR_7);
  FUNC_13(VAR_23, VAR_3, VAR_25);


  FUNC_13(VAR_23, VAR_17, 0xFFFFFFFF);
  FUNC_13(VAR_23, VAR_11,
      VAR_12 |
      VAR_13 |
      VAR_14);


  FUNC_13(VAR_23, VAR_15,
      VAR_16);
 } else {
  FUNC_13(VAR_23, VAR_3,
      VAR_25 & ~VAR_5);
 }

 FUNC_10(VAR_21, VAR_23);

 VAR_23->rtc = FUNC_7(&VAR_21->dev);
 if (FUNC_0(VAR_23->rtc))
  return FUNC_1(VAR_23->rtc);

 VAR_23->rtc->ops = &VAR_20;
 VAR_23->rtc->range_max = VAR_18;

 VAR_24 = FUNC_12(VAR_23->rtc);
 if (VAR_24)
  return VAR_24;





 VAR_23->irq = FUNC_8(VAR_21, 0);
 if (VAR_23->irq < 0) {
  FUNC_2(&VAR_21->dev, "Can't get interrupt resource\n");
 } else {
  if (FUNC_6(&VAR_21->dev, VAR_23->irq,
         VAR_19,
         0, VAR_21->name, VAR_23) < 0) {
   FUNC_2(&VAR_21->dev, "Can't request interrupt.\n");
   VAR_23->irq = -1;
  } else {
   FUNC_3(&VAR_21->dev, 1);
  }
 }

 return 0;
}
