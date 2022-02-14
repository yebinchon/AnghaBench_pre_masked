
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct sp805_wdt {int load_val; int lock; scalar_t__ base; TYPE_1__* adev; int clk; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sp805_wdt* FUNC_5 (struct watchdog_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_9, bool VAR_10)
{
 struct sp805_wdt *VAR_11 = FUNC_5(VAR_9);
 int VAR_12;

 if (!VAR_10) {

  VAR_12 = FUNC_0(VAR_11->clk);
  if (VAR_12) {
   FUNC_1(&VAR_11->adev->dev, "clock enable fail");
   return VAR_12;
  }
 }

 FUNC_3(&VAR_11->lock);

 FUNC_6(VAR_4, VAR_11->base + VAR_8);
 FUNC_6(VAR_11->load_val, VAR_11->base + VAR_7);
 FUNC_6(VAR_1, VAR_11->base + VAR_6);

 if (!VAR_10)
  FUNC_6(VAR_0 | VAR_3, VAR_11->base +
    VAR_5);

 FUNC_6(VAR_2, VAR_11->base + VAR_8);


 FUNC_2(VAR_11->base + VAR_8);
 FUNC_4(&VAR_11->lock);

 return 0;
}
