
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {int event_notifier; } ;
struct charger_data {int notifier; struct cros_ec_device* ec_device; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct charger_data *VAR_1 = VAR_0;
 struct cros_ec_device *VAR_2 = VAR_1->ec_device;

 FUNC_0(&VAR_2->event_notifier,
        &VAR_1->notifier);
}
