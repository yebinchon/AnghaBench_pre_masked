
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_wdt*) ;
 struct bcm2835_wdt* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct bcm2835_wdt *VAR_4 = VAR_3;
 u32 VAR_5;






 VAR_5 = FUNC_1(VAR_4->base + VAR_1);
 VAR_5 |= VAR_0 | VAR_2;
 FUNC_2(VAR_5, VAR_4->base + VAR_1);


 FUNC_0(VAR_4);
}
