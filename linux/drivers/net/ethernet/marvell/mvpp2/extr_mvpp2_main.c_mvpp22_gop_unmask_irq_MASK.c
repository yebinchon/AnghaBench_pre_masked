
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {scalar_t__ phy_interface; scalar_t__ gop_id; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mvpp2_port *VAR_6)
{
 u32 VAR_7;

 if (FUNC_2(VAR_6->phy_interface) ||
     FUNC_1(VAR_6->phy_interface) ||
     VAR_6->phy_interface == VAR_5) {

  VAR_7 = FUNC_3(VAR_6->base + VAR_0);
  VAR_7 |= VAR_1;
  FUNC_4(VAR_7, VAR_6->base + VAR_0);
 }

 if (VAR_6->gop_id == 0) {

  VAR_7 = FUNC_3(VAR_6->base + VAR_2);
  if (FUNC_0(VAR_6->phy_interface))
   VAR_7 |= VAR_4;
  else
   VAR_7 |= VAR_3;
  FUNC_4(VAR_7, VAR_6->base + VAR_2);
 }
}
