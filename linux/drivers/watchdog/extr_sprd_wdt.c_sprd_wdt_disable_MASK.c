
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_wdt {int enable; int rtc_enable; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct sprd_wdt *VAR_2 = VAR_1;

 FUNC_2(VAR_2->base);
 FUNC_3(0x0, VAR_2->base + VAR_0);
 FUNC_1(VAR_2->base);

 FUNC_0(VAR_2->rtc_enable);
 FUNC_0(VAR_2->enable);
}
