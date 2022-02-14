
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pinctrl {int base; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct owl_pinctrl *VAR_0, u32 VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0->base + VAR_1);
 VAR_5 = (1 << VAR_3) - 1;

 return (VAR_4 >> VAR_2) & VAR_5;
}
