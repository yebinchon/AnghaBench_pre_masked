
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct spear_rtc_config {TYPE_1__* clk; TYPE_1__* rtc; int lock; TYPE_1__* ioaddr; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_8__ {int uie_unsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (int *,int *) ;
 TYPE_1__* FUNC_8 (int *,struct resource*) ;
 struct spear_rtc_config* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int,int ,int ,int ,struct spear_rtc_config*) ;
 TYPE_1__* FUNC_11 (int *,int ,int *,int ) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct spear_rtc_config*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct spear_rtc_config *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_9(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_10 = FUNC_12(VAR_6, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_10(&VAR_6->dev, VAR_10, VAR_4, 0, VAR_6->name,
   VAR_8);
 if (VAR_9) {
  FUNC_4(&VAR_6->dev, "Alarm interrupt IRQ%d already claimed\n",
    VAR_10);
  return VAR_9;
 }

 VAR_7 = FUNC_13(VAR_6, VAR_2, 0);
 VAR_8->ioaddr = FUNC_8(&VAR_6->dev, VAR_7);
 if (FUNC_0(VAR_8->ioaddr))
  return FUNC_1(VAR_8->ioaddr);

 VAR_8->clk = FUNC_7(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_9 = FUNC_3(VAR_8->clk);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_15(&VAR_8->lock);
 FUNC_14(VAR_6, VAR_8);

 VAR_8->rtc = FUNC_11(&VAR_6->dev, VAR_6->name,
     &VAR_5, VAR_3);
 if (FUNC_0(VAR_8->rtc)) {
  FUNC_4(&VAR_6->dev, "can't register RTC device, err %ld\n",
    FUNC_1(VAR_8->rtc));
  VAR_9 = FUNC_1(VAR_8->rtc);
  goto err_disable_clock;
 }

 VAR_8->rtc->uie_unsupported = 1;

 if (!FUNC_5(&VAR_6->dev))
  FUNC_6(&VAR_6->dev, 1);

 return 0;

err_disable_clock:
 FUNC_2(VAR_8->clk);

 return VAR_9;
}
