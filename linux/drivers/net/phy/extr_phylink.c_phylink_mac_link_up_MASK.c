
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {int pause; int duplex; int speed; int interface; } ;
struct TYPE_4__ {int interface; } ;
struct phylink {int phydev; TYPE_2__ phy_state; int link_an_mode; int config; TYPE_1__* ops; int cur_interface; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* mac_link_up ) (int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phylink*,char*,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct phylink *VAR_0,
    struct phylink_link_state VAR_1)
{
 struct net_device *VAR_2 = VAR_0->netdev;

 VAR_0->cur_interface = VAR_1.interface;
 VAR_0->ops->mac_link_up(VAR_0->config, VAR_0->link_an_mode,
        VAR_0->phy_state.interface,
        VAR_0->phydev);

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_3(VAR_0,
       "Link is Up - %s/%s - flow control %s\n",
       FUNC_2(VAR_1.speed),
       FUNC_1(VAR_1.duplex),
       FUNC_4(VAR_1.pause));
}
