
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max63xx_wdt {int lock; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct max63xx_wdt *VAR_1)
{
 u8 VAR_2;

 FUNC_2(&VAR_1->lock);

 VAR_2 = FUNC_0(VAR_1->base);

 FUNC_1(VAR_2 | VAR_0, VAR_1->base);
 FUNC_1(VAR_2 & ~VAR_0, VAR_1->base);

 FUNC_3(&VAR_1->lock);
}
