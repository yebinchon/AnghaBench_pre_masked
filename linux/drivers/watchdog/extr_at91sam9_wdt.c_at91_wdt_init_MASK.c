
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_4__ {int timeout; } ;
struct at91wdt {int mr_mask; int mr; unsigned long heartbeat; int timer; TYPE_1__ wdd; scalar_t__ next_heartbeat; int nowayout; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int,int ,struct at91wdt*) ;
 unsigned long FUNC_5 (int) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,struct device*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_14 ;
 int FUNC_11 (struct at91wdt*,int ) ;
 int FUNC_12 (struct at91wdt*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_15, struct at91wdt *VAR_16)
{
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;
 u32 VAR_21 = VAR_16->mr_mask;
 unsigned long VAR_22 = 1;
 unsigned long VAR_23;
 struct device *VAR_24 = &VAR_15->dev;

 VAR_17 = FUNC_11(VAR_16, VAR_0);
 if ((VAR_17 & VAR_21) != (VAR_16->mr & VAR_21)) {
  if (VAR_17 == VAR_10) {
   FUNC_12(VAR_16, VAR_0, VAR_16->mr);
   VAR_17 = FUNC_11(VAR_16, VAR_0);
  }
 }

 if (VAR_17 & VAR_2) {
  if (VAR_16->mr & VAR_2)
   return 0;
  FUNC_1(VAR_24, "watchdog is disabled\n");
  return -VAR_5;
 }

 VAR_19 = VAR_17 & VAR_4;
 VAR_18 = (VAR_17 & VAR_1) >> 16;

 if (VAR_18 < VAR_19)
  VAR_22 = FUNC_6(VAR_19 - VAR_18);

 VAR_23 = FUNC_5(VAR_19);
 if (!VAR_23) {
  FUNC_1(VAR_24,
   "heartbeat is too small for the system to handle it correctly\n");
  return -VAR_5;
 }







 if ((VAR_23 / 4) >= VAR_22)
  VAR_16->heartbeat = VAR_23 / 4;
 else if ((VAR_23 / 2) >= VAR_22)
  VAR_16->heartbeat = VAR_23 / 2;
 else
  VAR_16->heartbeat = VAR_22;

 if (VAR_23 < VAR_22 + 4)
  FUNC_2(VAR_24,
    "min heartbeat and max heartbeat might be too close for the system to handle it correctly\n");

 if ((VAR_17 & VAR_3) && VAR_16->irq) {
  VAR_20 = FUNC_4(VAR_16->irq, VAR_14,
      VAR_9 | VAR_7 |
      VAR_8,
      VAR_15->name, VAR_16);
  if (VAR_20)
   return VAR_20;
 }

 if ((VAR_17 & VAR_16->mr_mask) != (VAR_16->mr & VAR_16->mr_mask))
  FUNC_2(VAR_24,
    "watchdog already configured differently (mr = %x expecting %x)\n",
    VAR_17 & VAR_16->mr_mask, VAR_16->mr & VAR_16->mr_mask);

 FUNC_7(&VAR_16->timer, VAR_11, 0);
 FUNC_3(&VAR_16->timer, VAR_13 + VAR_22);


 if (FUNC_8(&VAR_16->wdd, 0, VAR_24))
  FUNC_8(&VAR_16->wdd, VAR_12, VAR_24);
 FUNC_10(&VAR_16->wdd, VAR_16->nowayout);
 VAR_20 = FUNC_9(&VAR_16->wdd);
 if (VAR_20)
  goto out_stop_timer;

 VAR_16->next_heartbeat = VAR_13 + VAR_16->wdd.timeout * VAR_6;

 return 0;

out_stop_timer:
 FUNC_0(&VAR_16->timer);
 return VAR_20;
}
