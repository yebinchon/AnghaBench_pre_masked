
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int timeout; } ;
struct bcm47xx_wdt {int soft_timer; int (* timer_set_ms ) (struct bcm47xx_wdt*,int ) ;int soft_ticks; int max_timer_ms; TYPE_1__ wdd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct bcm47xx_wdt* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (struct bcm47xx_wdt*,int ) ;
 struct bcm47xx_wdt* VAR_3 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct bcm47xx_wdt *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 u32 VAR_6 = FUNC_2(VAR_5->wdd.timeout * 1000, VAR_5->max_timer_ms);

 if (!FUNC_0(&VAR_5->soft_ticks)) {
  VAR_5->timer_set_ms(VAR_5, VAR_6);
  FUNC_3(&VAR_5->soft_timer, VAR_1 + VAR_0);
 } else {
  FUNC_4("Watchdog will fire soon!!!\n");
 }
}
