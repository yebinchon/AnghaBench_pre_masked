
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct ds2760_device_info* family_data; } ;
struct ds2760_device_info {int bat; int monitor_wqueue; int set_charged_work; int monitor_work; int pm_notifier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct w1_slave *VAR_0)
{
 struct ds2760_device_info *VAR_1 = VAR_0->family_data;

 FUNC_3(&VAR_1->pm_notifier);
 FUNC_0(&VAR_1->monitor_work);
 FUNC_0(&VAR_1->set_charged_work);
 FUNC_1(VAR_1->monitor_wqueue);
 FUNC_2(VAR_1->bat);
}
