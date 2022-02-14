
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; int interface; int pause; int duplex; int speed; } ;
struct phylink {int state_mutex; TYPE_1__ phy_state; } ;
struct phy_device {int duplex; int speed; int interface; scalar_t__ asym_pause; scalar_t__ pause; struct phylink* phylink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct phylink*,char*,char*,int ,int ,int ) ;
 int FUNC_6 (struct phylink*) ;

__attribute__((used)) static void FUNC_7(struct phy_device *VAR_3, bool VAR_4,
          bool VAR_5)
{
 struct phylink *VAR_6 = VAR_3->phylink;

 FUNC_0(&VAR_6->state_mutex);
 VAR_6->phy_state.speed = VAR_3->speed;
 VAR_6->phy_state.duplex = VAR_3->duplex;
 VAR_6->phy_state.pause = VAR_1;
 if (VAR_3->pause)
  VAR_6->phy_state.pause |= VAR_2;
 if (VAR_3->asym_pause)
  VAR_6->phy_state.pause |= VAR_0;
 VAR_6->phy_state.interface = VAR_3->interface;
 VAR_6->phy_state.link = VAR_4;
 FUNC_1(&VAR_6->state_mutex);

 FUNC_6(VAR_6);

 FUNC_5(VAR_6, "phy link %s %s/%s/%s\n", VAR_4 ? "up" : "down",
      FUNC_3(VAR_3->interface),
      FUNC_4(VAR_3->speed),
      FUNC_2(VAR_3->duplex));
}
