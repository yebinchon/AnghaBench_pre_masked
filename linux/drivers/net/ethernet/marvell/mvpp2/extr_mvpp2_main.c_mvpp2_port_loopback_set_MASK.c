
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int speed; } ;
struct mvpp2_port {scalar_t__ phy_interface; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_4,
        const struct phylink_link_state *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_4->base + VAR_0);

 if (VAR_5->speed == 1000)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 if (FUNC_0(VAR_4->phy_interface) ||
     VAR_4->phy_interface == VAR_3)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_2(VAR_6, VAR_4->base + VAR_0);
}
