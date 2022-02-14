
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink {int cur_interface; int link_an_mode; int config; TYPE_1__* ops; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* mac_link_down ) (int ,int ,int ) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phylink*,char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct phylink *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 if (VAR_1)
  FUNC_0(VAR_1);
 VAR_0->ops->mac_link_down(VAR_0->config, VAR_0->link_an_mode,
          VAR_0->cur_interface);
 FUNC_1(VAR_0, "Link is Down\n");
}
