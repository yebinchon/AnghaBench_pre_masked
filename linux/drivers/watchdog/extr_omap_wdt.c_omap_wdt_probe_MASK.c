
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int timeout; int bootstatus; int * parent; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct omap_wdt_dev {int omap_wdt_users; int wdt_trgr_pattern; int * dev; TYPE_1__ wdog; scalar_t__ base; int lock; } ;
struct omap_wd_timer_platform_data {int (* read_reset_sources ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct omap_wd_timer_platform_data* FUNC_2 (int *) ;
 struct omap_wdt_dev* FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (struct omap_wdt_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct platform_device*,struct omap_wdt_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 () ;
 int VAR_12 ;
 int FUNC_16 (TYPE_1__*,int ,int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 struct omap_wd_timer_platform_data *VAR_14 = FUNC_2(&VAR_13->dev);
 struct omap_wdt_dev *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(&VAR_13->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->omap_wdt_users = 0;
 VAR_15->dev = &VAR_13->dev;
 VAR_15->wdt_trgr_pattern = 0x1234;
 FUNC_5(&VAR_15->lock);


 VAR_15->base = FUNC_4(VAR_13, 0);
 if (FUNC_0(VAR_15->base))
  return FUNC_1(VAR_15->base);

 VAR_15->wdog.info = &VAR_10;
 VAR_15->wdog.ops = &VAR_11;
 VAR_15->wdog.min_timeout = VAR_6;
 VAR_15->wdog.max_timeout = VAR_5;
 VAR_15->wdog.timeout = VAR_4;
 VAR_15->wdog.parent = &VAR_13->dev;

 FUNC_16(&VAR_15->wdog, VAR_12, &VAR_13->dev);

 FUNC_18(&VAR_15->wdog, VAR_9);

 FUNC_8(VAR_13, VAR_15);

 FUNC_10(VAR_15->dev);
 FUNC_11(VAR_15->dev);

 if (VAR_14 && VAR_14->read_reset_sources) {
  u32 VAR_17 = VAR_14->read_reset_sources();
  if (VAR_17 & (1 << VAR_2))
   VAR_15->wdog.bootstatus = VAR_7;
 }

 if (!VAR_8)
  FUNC_6(VAR_15);

 VAR_16 = FUNC_17(&VAR_15->wdog);
 if (VAR_16) {
  FUNC_9(VAR_15->dev);
  return VAR_16;
 }

 FUNC_13("OMAP Watchdog Timer Rev 0x%02x: initial timeout %d sec\n",
  FUNC_14(VAR_15->base + VAR_3) & 0xFF,
  VAR_15->wdog.timeout);

 if (VAR_8)
  FUNC_7(&VAR_15->wdog);

 FUNC_12(VAR_15->dev);

 return 0;
}
