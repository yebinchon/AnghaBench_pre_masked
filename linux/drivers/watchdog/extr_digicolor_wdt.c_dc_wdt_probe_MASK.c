
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dc_wdt {int lock; int clk; int base; } ;
struct TYPE_7__ {int max_timeout; int timeout; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct device*,int *) ;
 struct dc_wdt* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*,int ,struct device*) ;
 int FUNC_9 (TYPE_1__*,struct dc_wdt*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct dc_wdt *VAR_7;

 VAR_7 = FUNC_4(VAR_6, sizeof(struct dc_wdt), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->base = FUNC_5(VAR_5, 0);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_3(VAR_6, ((void*)0));
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);
 VAR_3.max_timeout = VAR_2 / FUNC_2(VAR_7->clk);
 VAR_3.timeout = VAR_3.max_timeout;
 VAR_3.parent = VAR_6;

 FUNC_7(&VAR_7->lock);

 FUNC_9(&VAR_3, VAR_7);
 FUNC_10(&VAR_3, 128);
 FUNC_8(&VAR_3, VAR_4, VAR_6);
 FUNC_11(&VAR_3);
 return FUNC_6(VAR_6, &VAR_3);
}
