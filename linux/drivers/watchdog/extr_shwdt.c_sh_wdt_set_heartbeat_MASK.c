
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct sh_wdt {int lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct sh_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2, unsigned VAR_3)
{
 struct sh_wdt *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;

 if (FUNC_2(VAR_3 < 1 || VAR_3 > 3600))
  return -VAR_0;

 FUNC_0(&VAR_4->lock, VAR_5);
 VAR_1 = VAR_3;
 VAR_2->timeout = VAR_3;
 FUNC_1(&VAR_4->lock, VAR_5);

 return 0;
}
