
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rockchip_typec_phy {scalar_t__ base; int flip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rockchip_typec_phy *VAR_2)
{
 u16 VAR_3;
 VAR_3 = FUNC_0(VAR_2->base + VAR_1);
 if (!VAR_2->flip)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2->base + VAR_1);
}
