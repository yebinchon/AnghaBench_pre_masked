
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {scalar_t__ gop_id; int phy_interface; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mvpp2_port *VAR_4)
{
 u32 VAR_5;


 FUNC_6(VAR_4);


 FUNC_2(VAR_4);


 FUNC_0(VAR_4);


 FUNC_1(VAR_4);

 FUNC_3(VAR_4);


 if (VAR_4->gop_id == 0) {
  VAR_5 = FUNC_8(VAR_4->base + VAR_3);
  VAR_5 &= ~VAR_2;

  if (FUNC_5(VAR_4->phy_interface))
   VAR_5 |= VAR_0;
  else
   VAR_5 |= VAR_1;

  FUNC_9(VAR_5, VAR_4->base + VAR_3);
 }

 if (VAR_4->gop_id == 0 && FUNC_5(VAR_4->phy_interface))
  FUNC_7(VAR_4);
 else
  FUNC_4(VAR_4);
}
