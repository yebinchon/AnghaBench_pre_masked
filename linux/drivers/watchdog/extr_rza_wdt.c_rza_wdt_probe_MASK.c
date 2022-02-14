
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {unsigned long max_timeout; int max_hw_heartbeat_ms; int min_timeout; int timeout; struct device* parent; int * ops; int * info; } ;
struct rza_wdt {scalar_t__ cks; TYPE_1__ wdev; int clk; int base; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,int *) ;
 struct rza_wdt* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ,struct device*) ;
 int FUNC_11 (TYPE_1__*,struct rza_wdt*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct rza_wdt *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_13 = FUNC_6(VAR_12, sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_6;

 VAR_13->base = FUNC_7(VAR_11, 0);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_13->clk = FUNC_5(VAR_12, ((void*)0));
 if (FUNC_0(VAR_13->clk))
  return FUNC_1(VAR_13->clk);

 VAR_14 = FUNC_2(VAR_13->clk);
 if (VAR_14 < 16384) {
  FUNC_4(VAR_12, "invalid clock rate (%ld)\n", VAR_14);
  return -VAR_5;
 }

 VAR_13->wdev.info = &VAR_9,
 VAR_13->wdev.ops = &VAR_10,
 VAR_13->wdev.parent = VAR_12;

 VAR_13->cks = (u8)(uintptr_t) FUNC_9(VAR_12);
 if (VAR_13->cks == VAR_1) {

  VAR_13->wdev.max_timeout = (VAR_4 * VAR_8) / VAR_14;

 } else if (VAR_13->cks == VAR_0) {

  VAR_14 /= VAR_3;






  VAR_13->wdev.max_hw_heartbeat_ms = (1000 * VAR_8) / VAR_14;
  FUNC_3(VAR_12, "max hw timeout of %dms\n",
   VAR_13->wdev.max_hw_heartbeat_ms);
 }

 VAR_13->wdev.min_timeout = 1;
 VAR_13->wdev.timeout = VAR_2;

 FUNC_10(&VAR_13->wdev, 0, VAR_12);
 FUNC_11(&VAR_13->wdev, VAR_13);

 VAR_15 = FUNC_8(VAR_12, &VAR_13->wdev);
 if (VAR_15)
  FUNC_4(VAR_12, "Cannot register watchdog device\n");

 return VAR_15;
}
