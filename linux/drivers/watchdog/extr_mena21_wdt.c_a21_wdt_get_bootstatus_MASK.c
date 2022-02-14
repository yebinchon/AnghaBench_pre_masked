
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a21_wdt_drv {int * gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct a21_wdt_drv *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 |= FUNC_0(VAR_3->gpios[VAR_0]) ? (1 << 0) : 0;
 VAR_4 |= FUNC_0(VAR_3->gpios[VAR_1]) ? (1 << 1) : 0;
 VAR_4 |= FUNC_0(VAR_3->gpios[VAR_2]) ? (1 << 2) : 0;

 return VAR_4;
}
