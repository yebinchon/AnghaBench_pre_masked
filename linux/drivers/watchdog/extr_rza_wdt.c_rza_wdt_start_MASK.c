
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct rza_wdt {int count; scalar_t__ base; int cks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rza_wdt*,int ) ;
 struct rza_wdt* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_10)
{
 struct rza_wdt *VAR_11 = FUNC_3(VAR_10);


 FUNC_4(VAR_7 | 0, VAR_11->base + VAR_6);


 FUNC_1(VAR_11->base + VAR_0);
 FUNC_4(VAR_1, VAR_11->base + VAR_0);

 FUNC_2(VAR_11, VAR_10->timeout);

 FUNC_4(VAR_2 | VAR_3, VAR_11->base + VAR_0);
 FUNC_4(VAR_5 | VAR_11->count, VAR_11->base + VAR_4);
 FUNC_4(VAR_7 | VAR_9 | VAR_8 |
        FUNC_0(VAR_11->cks), VAR_11->base + VAR_6);

 return 0;
}
