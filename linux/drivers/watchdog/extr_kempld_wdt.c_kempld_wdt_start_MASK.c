
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
struct kempld_wdt_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kempld_device_data*) ;
 int FUNC_1 (struct kempld_device_data*,int ) ;
 int FUNC_2 (struct kempld_device_data*) ;
 int FUNC_3 (struct watchdog_device*,int ) ;
 int FUNC_4 (struct kempld_device_data*,int ,int) ;
 struct kempld_wdt_data* FUNC_5 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_3)
{
 struct kempld_wdt_data *VAR_4 = FUNC_5(VAR_3);
 struct kempld_device_data *VAR_5 = VAR_4->pld;
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_3->timeout);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_5);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_6 |= VAR_2;
 FUNC_4(VAR_5, VAR_1, VAR_6);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_5);


 if (!(VAR_6 & VAR_2))
  return -VAR_0;

 return 0;
}
