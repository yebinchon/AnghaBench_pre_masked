
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {scalar_t__ gop_id; scalar_t__ base; int phy_interface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_4)
{
 u32 VAR_5;


 if (VAR_4->gop_id == 0 && FUNC_0(VAR_4->phy_interface)) {
  VAR_5 = FUNC_1(VAR_4->base + VAR_1);
  VAR_5 &= ~VAR_0;
  FUNC_2(VAR_5, VAR_4->base + VAR_1);
 }

 VAR_5 = FUNC_1(VAR_4->base + VAR_2);
 VAR_5 &= ~(VAR_3);
 FUNC_2(VAR_5, VAR_4->base + VAR_2);
}
