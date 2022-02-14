
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct watchdog_core_data* wd_data; } ;
struct watchdog_core_data {int timer; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct watchdog_device*) ;
 scalar_t__ FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static inline void FUNC_4(struct watchdog_device *VAR_1)
{
 struct watchdog_core_data *VAR_2 = VAR_1->wd_data;

 if (FUNC_2(VAR_1)) {
  ktime_t VAR_3 = FUNC_3(VAR_1);

  if (VAR_3 > 0)
   FUNC_1(&VAR_2->timer, VAR_3, VAR_0);
 } else {
  FUNC_0(&VAR_2->timer);
 }
}
