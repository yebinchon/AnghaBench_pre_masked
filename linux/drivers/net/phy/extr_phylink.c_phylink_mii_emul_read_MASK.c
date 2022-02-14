
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {int pause; int an_complete; int duplex; int speed; int link; } ;
struct fixed_phy_status {int pause; int asym_pause; int duplex; int speed; int link; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,struct fixed_phy_status*) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4,
     struct phylink_link_state *VAR_5)
{
 struct fixed_phy_status VAR_6;
 int VAR_7;

 VAR_6.link = VAR_5->link;
 VAR_6.speed = VAR_5->speed;
 VAR_6.duplex = VAR_5->duplex;
 VAR_6.pause = VAR_5->pause & VAR_3;
 VAR_6.asym_pause = VAR_5->pause & VAR_2;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_4 == VAR_1) {
  if (!VAR_5->an_complete)
   VAR_7 &= ~VAR_0;
 }
 return VAR_7;
}
