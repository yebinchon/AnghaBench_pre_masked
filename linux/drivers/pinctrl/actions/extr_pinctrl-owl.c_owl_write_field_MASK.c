
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pinctrl {int base; } ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(struct owl_pinctrl *VAR_0, u32 VAR_1, u32 VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (1 << VAR_4) - 1;
 VAR_5 = VAR_5 << VAR_3;

 FUNC_0(VAR_0->base + VAR_1, VAR_5, (VAR_2 << VAR_3));
}
