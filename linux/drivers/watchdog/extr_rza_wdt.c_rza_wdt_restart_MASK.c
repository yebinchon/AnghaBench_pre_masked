
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct rza_wdt {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 struct rza_wdt* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_10, unsigned long VAR_11,
       void *VAR_12)
{
 struct rza_wdt *VAR_13 = FUNC_2(VAR_10);


 FUNC_4(VAR_7 | 0, VAR_13->base + VAR_6);


 FUNC_0(VAR_13->base + VAR_0);
 FUNC_4(VAR_1, VAR_13->base + VAR_0);





 FUNC_4(VAR_2 | VAR_3, VAR_13->base + VAR_0);
 FUNC_4(VAR_5 | 255, VAR_13->base + VAR_4);
 FUNC_4(VAR_7 | VAR_9 | VAR_8, VAR_13->base + VAR_6);




 FUNC_3();


 FUNC_1(20);

 return 0;
}
