
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int duplex; int an_complete; int link; int pause; int speed; } ;
struct mvpp2_port {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvpp2_port *VAR_8,
      struct phylink_link_state *VAR_9)
{
 u32 VAR_10;

 VAR_9->speed = VAR_7;
 VAR_9->duplex = 1;
 VAR_9->an_complete = 1;

 VAR_10 = FUNC_0(VAR_8->base + VAR_5);
 VAR_9->link = !!(VAR_10 & VAR_6);

 VAR_9->pause = 0;
 VAR_10 = FUNC_0(VAR_8->base + VAR_2);
 if (VAR_10 & VAR_4)
  VAR_9->pause |= VAR_1;
 if (VAR_10 & VAR_3)
  VAR_9->pause |= VAR_0;
}
