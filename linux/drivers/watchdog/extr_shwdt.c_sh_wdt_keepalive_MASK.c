
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct sh_wdt {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct sh_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4)
{
 struct sh_wdt *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;

 FUNC_0(&VAR_5->lock, VAR_6);
 VAR_3 = VAR_2 + (VAR_1 * VAR_0);
 FUNC_1(&VAR_5->lock, VAR_6);

 return 0;
}
