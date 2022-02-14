
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {scalar_t__ interface; int an_complete; int link; int duplex; int pause; int speed; } ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct mvneta_port {int dummy; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct mvneta_port*,int ) ;
 struct mvneta_port* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phylink_config *VAR_15,
     struct phylink_link_state *VAR_16)
{
 struct net_device *VAR_17 = FUNC_2(VAR_15->dev);
 struct mvneta_port *VAR_18 = FUNC_1(VAR_17);
 u32 VAR_19;

 VAR_19 = FUNC_0(VAR_18, VAR_8);

 if (VAR_19 & VAR_7)
  VAR_16->speed =
   VAR_16->interface == VAR_10 ?
   VAR_14 : VAR_13;
 else if (VAR_19 & VAR_6)
  VAR_16->speed = VAR_12;
 else
  VAR_16->speed = VAR_11;

 VAR_16->an_complete = !!(VAR_19 & VAR_2);
 VAR_16->link = !!(VAR_19 & VAR_4);
 VAR_16->duplex = !!(VAR_19 & VAR_3);

 VAR_16->pause = 0;
 if (VAR_19 & VAR_5)
  VAR_16->pause |= VAR_0;
 if (VAR_19 & VAR_9)
  VAR_16->pause |= VAR_1;

 return 1;
}
