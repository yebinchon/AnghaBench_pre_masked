
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct da9052_wdt_data {unsigned long jpast; struct da9052* da9052; } ;
struct da9052 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct da9052*,int ,int ,int) ;
 unsigned long VAR_4 ;
 int FUNC_1 (unsigned long) ;
 struct da9052_wdt_data* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_5)
{
 struct da9052_wdt_data *VAR_6 = FUNC_2(VAR_5);
 struct da9052 *VAR_7 = VAR_6->da9052;
 unsigned long VAR_8, VAR_9 = VAR_4;
 int VAR_10;





 VAR_8 = (VAR_9 - VAR_6->jpast) * 1000/VAR_3;
 if (VAR_8 < VAR_2)
  FUNC_1(VAR_8);


 VAR_10 = FUNC_0(VAR_7, VAR_1,
    VAR_0, 1 << 7);
 if (VAR_10 < 0)
  return VAR_10;





 return FUNC_0(VAR_7, VAR_1,
     VAR_0, 0 << 7);
}
