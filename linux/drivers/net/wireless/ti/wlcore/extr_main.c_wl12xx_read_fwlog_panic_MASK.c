
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ output; } ;
struct TYPE_4__ {TYPE_1__ fwlog; } ;
struct wl1271 {int quirks; TYPE_2__ conf; int watchdog_recovery; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*) ;
 scalar_t__ FUNC_5 (struct wl1271*) ;

__attribute__((used)) static void FUNC_6(struct wl1271 *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 if (VAR_2->quirks & VAR_1)
  return;

 FUNC_3("Reading FW panic log");






 VAR_4 = FUNC_1(VAR_2->dev);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->dev);
  return;
 }
 if (!VAR_2->watchdog_recovery &&
     VAR_2->conf.fwlog.output != VAR_0)
  FUNC_4(VAR_2);


 do {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3 == 0) {
   FUNC_0(100);
   VAR_3 = FUNC_5(VAR_2);
  }
 } while (VAR_3 != 0);
}
