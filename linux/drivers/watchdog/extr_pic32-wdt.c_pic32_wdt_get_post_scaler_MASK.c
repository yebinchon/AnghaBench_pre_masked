
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_wdt {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct pic32_wdt *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->regs + VAR_0);

 return (VAR_4 >> VAR_2) & VAR_1;
}
