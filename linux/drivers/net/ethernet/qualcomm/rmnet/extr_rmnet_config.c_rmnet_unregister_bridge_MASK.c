
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_port {scalar_t__ rmnet_mode; struct net_device* bridge_ep; int nr_rmnet_devs; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rmnet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct rmnet_port*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
        struct rmnet_port *VAR_3)
{
 struct rmnet_port *VAR_4;
 struct net_device *VAR_5;

 if (VAR_3->rmnet_mode != VAR_0)
  return;


 if (!VAR_3->nr_rmnet_devs) {
  VAR_5 = VAR_3->bridge_ep;

  VAR_4 = FUNC_0(VAR_5);
  VAR_4->bridge_ep = ((void*)0);
  VAR_4->rmnet_mode = VAR_1;
 } else {
  VAR_5 = VAR_3->bridge_ep;

  VAR_4 = FUNC_0(VAR_5);
  FUNC_1(VAR_5, VAR_4);
 }
}
