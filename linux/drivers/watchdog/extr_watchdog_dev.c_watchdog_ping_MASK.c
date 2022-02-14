
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct watchdog_core_data* wd_data; } ;
struct watchdog_core_data {int last_keepalive; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_1)
{
 struct watchdog_core_data *VAR_2 = VAR_1->wd_data;

 if (!FUNC_3(VAR_1) && !FUNC_4(VAR_1))
  return 0;

 FUNC_2(VAR_0, &VAR_2->status);

 VAR_2->last_keepalive = FUNC_1();
 return FUNC_0(VAR_1);
}
