
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {scalar_t__ phy_interface; scalar_t__ gop_id; scalar_t__ base; scalar_t__ phylink; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mvpp2_port*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mvpp2_port *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->phylink ||
     FUNC_2(VAR_5->phy_interface) ||
     FUNC_1(VAR_5->phy_interface) ||
     VAR_5->phy_interface == VAR_4) {
  VAR_6 = FUNC_3(VAR_5->base + VAR_0);
  VAR_6 |= VAR_1;
  FUNC_4(VAR_6, VAR_5->base + VAR_0);
 }

 if (VAR_5->gop_id == 0) {
  VAR_6 = FUNC_3(VAR_5->base + VAR_2);
  VAR_6 |= VAR_3;
  FUNC_4(VAR_6, VAR_5->base + VAR_2);
 }

 FUNC_0(VAR_5);
}
