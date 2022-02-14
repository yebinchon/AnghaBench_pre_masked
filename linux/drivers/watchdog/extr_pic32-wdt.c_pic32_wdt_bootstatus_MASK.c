
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_wdt {int rst_base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pic32_wdt *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->rst_base);

 FUNC_2(VAR_0, FUNC_0(VAR_1->rst_base));

 return VAR_2 & VAR_0;
}
