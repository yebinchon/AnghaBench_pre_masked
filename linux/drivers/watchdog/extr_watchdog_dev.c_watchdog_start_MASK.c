
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int status; TYPE_1__* ops; struct watchdog_core_data* wd_data; } ;
struct watchdog_core_data {int last_keepalive; int status; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* ping ) (struct watchdog_device*) ;int (* start ) (struct watchdog_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (struct watchdog_device*) ;
 scalar_t__ FUNC_4 (struct watchdog_device*) ;
 scalar_t__ FUNC_5 (struct watchdog_device*) ;
 int FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_2)
{
 struct watchdog_core_data *VAR_3 = VAR_2->wd_data;
 ktime_t VAR_4;
 int VAR_5;

 if (FUNC_4(VAR_2))
  return 0;

 FUNC_1(VAR_1, &VAR_3->status);

 VAR_4 = FUNC_0();
 if (FUNC_5(VAR_2) && VAR_2->ops->ping)
  VAR_5 = VAR_2->ops->ping(VAR_2);
 else
  VAR_5 = VAR_2->ops->start(VAR_2);
 if (VAR_5 == 0) {
  FUNC_1(VAR_0, &VAR_2->status);
  VAR_3->last_keepalive = VAR_4;
  FUNC_6(VAR_2);
 }

 return VAR_5;
}
