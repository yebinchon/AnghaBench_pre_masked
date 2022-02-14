
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_typec_phy {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct rockchip_typec_phy *VAR_4)
{
 u32 VAR_5, VAR_6;





 FUNC_4(0x830, VAR_4->base + VAR_3);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {




  FUNC_4(0x90, VAR_4->base + FUNC_2(VAR_5));
  FUNC_4(0x960, VAR_4->base + FUNC_0(VAR_5));
  FUNC_4(0x30, VAR_4->base + FUNC_1(VAR_5));
 }

 VAR_6 = FUNC_3(VAR_4->base + VAR_2);
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_0;
 FUNC_4(VAR_6, VAR_4->base + VAR_2);
}
