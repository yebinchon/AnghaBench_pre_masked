
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_watchdog {int wdt; scalar_t__ reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct orion_watchdog *VAR_5 = VAR_4;

 FUNC_0(VAR_5->reg + VAR_2,
    VAR_1, 0);
 FUNC_1(&VAR_5->wdt);
 return VAR_0;
}
