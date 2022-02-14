
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {scalar_t__ interface; } ;
struct phylink_config {int dev; } ;
struct net_device {int name; } ;
struct mvpp2_port {scalar_t__ phy_interface; scalar_t__ gop_id; int flags; TYPE_1__* priv; int comphy; } ;
struct TYPE_2__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*,unsigned int,struct phylink_link_state const*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mvpp2_port*) ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*,struct phylink_link_state const*) ;
 int FUNC_8 (struct mvpp2_port*,unsigned int,struct phylink_link_state const*) ;
 int FUNC_9 (struct net_device*,char*,int ) ;
 struct mvpp2_port* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 struct net_device* FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct phylink_config *VAR_4, unsigned int VAR_5,
        const struct phylink_link_state *VAR_6)
{
 struct net_device *VAR_7 = FUNC_14(VAR_4->dev);
 struct mvpp2_port *VAR_8 = FUNC_10(VAR_7);
 bool VAR_9 = VAR_8->phy_interface != VAR_6->interface;


 if (FUNC_4(VAR_6->interface) && VAR_8->gop_id != 0) {
  FUNC_9(VAR_7, "Invalid mode on %s\n", VAR_7->name);
  return;
 }


 FUNC_5(VAR_8);

 if (VAR_8->priv->hw_version == VAR_1 && VAR_9) {
  FUNC_0(VAR_8);

  VAR_8->phy_interface = VAR_6->interface;


  FUNC_13(VAR_8->comphy);
  FUNC_2(VAR_8);
 }


 if (FUNC_4(VAR_6->interface))
  FUNC_8(VAR_8, VAR_5, VAR_6);
 else if (FUNC_12(VAR_6->interface) ||
   FUNC_11(VAR_6->interface) ||
   VAR_6->interface == VAR_3)
  FUNC_3(VAR_8, VAR_5, VAR_6);

 if (VAR_8->priv->hw_version == VAR_0 && VAR_8->flags & VAR_2)
  FUNC_7(VAR_8, VAR_6);

 if (VAR_8->priv->hw_version == VAR_1 && VAR_9)
  FUNC_1(VAR_8);

 FUNC_6(VAR_8);
}
