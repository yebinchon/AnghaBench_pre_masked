
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct kempld_wdt_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kempld_device_data*) ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int ,char) ;
 struct kempld_wdt_data* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct kempld_wdt_data *VAR_2 = FUNC_3(VAR_1);
 struct kempld_device_data *VAR_3 = VAR_2->pld;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_0, 'K');
 FUNC_1(VAR_3);

 return 0;
}
