
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int an_complete; int link; int duplex; int pause; void* speed; } ;
struct mvpp2_port {int phy_interface; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvpp2_port *VAR_14,
      struct phylink_link_state *VAR_15)
{
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_14->base + VAR_2);

 VAR_15->an_complete = !!(VAR_16 & VAR_3);
 VAR_15->link = !!(VAR_16 & VAR_6);
 VAR_15->duplex = !!(VAR_16 & VAR_4);

 switch (VAR_14->phy_interface) {
 case 129:
  VAR_15->speed = VAR_12;
  break;
 case 128:
  VAR_15->speed = VAR_13;
  break;
 default:
  if (VAR_16 & VAR_5)
   VAR_15->speed = VAR_12;
  else if (VAR_16 & VAR_7)
   VAR_15->speed = VAR_11;
  else
   VAR_15->speed = VAR_10;
 }

 VAR_15->pause = 0;
 if (VAR_16 & VAR_8)
  VAR_15->pause |= VAR_0;
 if (VAR_16 & VAR_9)
  VAR_15->pause |= VAR_1;
}
