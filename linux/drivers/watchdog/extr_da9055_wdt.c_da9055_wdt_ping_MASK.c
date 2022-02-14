
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct da9055_wdt_data {struct da9055* da9055; } ;
struct da9055 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct da9055*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 struct da9055_wdt_data* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3)
{
 struct da9055_wdt_data *VAR_4 = FUNC_2(VAR_3);
 struct da9055 *VAR_5 = VAR_4->da9055;





 FUNC_1(VAR_1);


 return FUNC_0(VAR_5, VAR_0,
     VAR_2, 1);
}
