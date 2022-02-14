
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int min_timeout; int timeout; int max_hw_heartbeat_ms; int * ops; int * info; struct device* parent; } ;
struct meson_gxbb_wdt {TYPE_1__ wdt_dev; scalar_t__ reg_base; scalar_t__ clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct device*,int *) ;
 struct meson_gxbb_wdt* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct platform_device*,struct meson_gxbb_wdt*) ;
 int FUNC_11 (TYPE_1__*,struct meson_gxbb_wdt*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct meson_gxbb_wdt *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_6(VAR_13, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->reg_base = FUNC_7(VAR_12, 0);
 if (FUNC_0(VAR_14->reg_base))
  return FUNC_1(VAR_14->reg_base);

 VAR_14->clk = FUNC_5(VAR_13, ((void*)0));
 if (FUNC_0(VAR_14->clk))
  return FUNC_1(VAR_14->clk);

 VAR_15 = FUNC_3(VAR_14->clk);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_4(VAR_13, VAR_9,
           VAR_14->clk);
 if (VAR_15)
  return VAR_15;

 FUNC_10(VAR_12, VAR_14);

 VAR_14->wdt_dev.parent = VAR_13;
 VAR_14->wdt_dev.info = &VAR_10;
 VAR_14->wdt_dev.ops = &VAR_11;
 VAR_14->wdt_dev.max_hw_heartbeat_ms = VAR_8;
 VAR_14->wdt_dev.min_timeout = 1;
 VAR_14->wdt_dev.timeout = VAR_0;
 FUNC_11(&VAR_14->wdt_dev, VAR_14);


 FUNC_13(((FUNC_2(VAR_14->clk) / 1000) & VAR_5) |
  VAR_6 |
  VAR_4 |
  VAR_3,
  VAR_14->reg_base + VAR_7);

 FUNC_9(&VAR_14->wdt_dev, VAR_14->wdt_dev.timeout);

 FUNC_12(&VAR_14->wdt_dev);
 return FUNC_8(VAR_13, &VAR_14->wdt_dev);
}
