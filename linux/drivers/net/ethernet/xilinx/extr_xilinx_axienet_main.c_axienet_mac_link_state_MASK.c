
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int duplex; scalar_t__ an_complete; int pause; int speed; int interface; } ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct axienet_local {int phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct axienet_local*,int ) ;
 struct axienet_local* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phylink_config *VAR_11,
      struct phylink_link_state *VAR_12)
{
 struct net_device *VAR_13 = FUNC_2(VAR_11->dev);
 struct axienet_local *VAR_14 = FUNC_1(VAR_13);
 u32 VAR_15, VAR_16;

 VAR_12->interface = VAR_14->phy_mode;

 VAR_15 = FUNC_0(VAR_14, VAR_7);
 if (VAR_15 & VAR_6)
  VAR_12->speed = VAR_4;
 else if (VAR_15 & VAR_5)
  VAR_12->speed = VAR_3;
 else
  VAR_12->speed = VAR_2;

 VAR_12->pause = 0;
 VAR_16 = FUNC_0(VAR_14, VAR_10);
 if (VAR_16 & VAR_9)
  VAR_12->pause |= VAR_1;
 if (VAR_16 & VAR_8)
  VAR_12->pause |= VAR_0;

 VAR_12->an_complete = 0;
 VAR_12->duplex = 1;

 return 1;
}
