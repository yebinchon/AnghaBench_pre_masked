
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_mac_ops {int dummy; } ;
struct phylink_config {scalar_t__ type; int dev; } ;
struct TYPE_4__ {int an_enabled; int advertising; int duplex; int speed; int pause; scalar_t__ interface; } ;
struct TYPE_3__ {scalar_t__ interface; } ;
struct phylink {scalar_t__ link_an_mode; TYPE_2__ link_config; int supported; int link_poll; int phylink_disable_state; struct phylink_mac_ops const* ops; int link_port; scalar_t__ link_interface; TYPE_1__ phy_state; int dev; int netdev; struct phylink_config* config; int resolve; int state_mutex; } ;
struct fwnode_handle {int dummy; } ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phylink* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct phylink*) ;
 struct phylink* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_14 ;
 int FUNC_8 (struct phylink*,struct fwnode_handle*) ;
 int FUNC_9 (struct phylink*,struct fwnode_handle*) ;
 int FUNC_10 (struct phylink*,struct fwnode_handle*) ;
 int VAR_15 ;
 int FUNC_11 (struct phylink*,int ,TYPE_2__*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int ) ;

struct phylink *FUNC_14(struct phylink_config *VAR_16,
          struct fwnode_handle *VAR_17,
          phy_interface_t VAR_18,
          const struct phylink_mac_ops *VAR_19)
{
 struct phylink *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_5(sizeof(*VAR_20), VAR_3);
 if (!VAR_20)
  return FUNC_0(-VAR_2);

 FUNC_7(&VAR_20->state_mutex);
 FUNC_1(&VAR_20->resolve, VAR_15);

 VAR_20->config = VAR_16;
 if (VAR_16->type == VAR_8) {
  VAR_20->netdev = FUNC_13(VAR_16->dev);
 } else if (VAR_16->type == VAR_6) {
  VAR_20->dev = VAR_16->dev;
 } else {
  FUNC_4(VAR_20);
  return FUNC_0(-VAR_1);
 }

 VAR_20->phy_state.interface = VAR_18;
 VAR_20->link_interface = VAR_18;
 if (VAR_18 == VAR_9)
  VAR_20->link_port = VAR_10;
 else
  VAR_20->link_port = VAR_11;
 VAR_20->link_config.interface = VAR_18;
 VAR_20->link_config.pause = VAR_5;
 VAR_20->link_config.speed = VAR_12;
 VAR_20->link_config.duplex = VAR_0;
 VAR_20->link_config.an_enabled = 1;
 VAR_20->ops = VAR_19;
 FUNC_2(VAR_7, &VAR_20->phylink_disable_state);
 FUNC_12(&VAR_20->link_poll, VAR_14, 0);

 FUNC_3(VAR_20->supported, VAR_13);
 FUNC_6(VAR_20->link_config.advertising, VAR_20->supported);
 FUNC_11(VAR_20, VAR_20->supported, &VAR_20->link_config);

 VAR_21 = FUNC_9(VAR_20, VAR_17);
 if (VAR_21 < 0) {
  FUNC_4(VAR_20);
  return FUNC_0(VAR_21);
 }

 if (VAR_20->link_an_mode == VAR_4) {
  VAR_21 = FUNC_8(VAR_20, VAR_17);
  if (VAR_21 < 0) {
   FUNC_4(VAR_20);
   return FUNC_0(VAR_21);
  }
 }

 VAR_21 = FUNC_10(VAR_20, VAR_17);
 if (VAR_21 < 0) {
  FUNC_4(VAR_20);
  return FUNC_0(VAR_21);
 }

 return VAR_20;
}
