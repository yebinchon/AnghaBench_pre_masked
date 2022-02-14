
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_pinctrl {int dummy; } ;


 int FUNC_0 (struct mtk_pinctrl*,int ,int ) ;
 int FUNC_1 (struct mtk_pinctrl*,int ,int ,int ) ;

void FUNC_2(struct mtk_pinctrl *VAR_0, u8 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
}
