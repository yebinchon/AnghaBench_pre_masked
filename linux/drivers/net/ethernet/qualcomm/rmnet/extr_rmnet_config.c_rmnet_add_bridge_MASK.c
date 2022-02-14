
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_priv {struct net_device* real_dev; } ;
struct rmnet_port {int nr_rmnet_devs; struct net_device* bridge_ep; void* rmnet_mode; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct rmnet_priv* FUNC_1 (struct net_device*) ;
 struct rmnet_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_3,
       struct net_device *VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct rmnet_priv *VAR_6 = FUNC_1(VAR_3);
 struct net_device *VAR_7 = VAR_6->real_dev;
 struct rmnet_port *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7);




 if (VAR_8->nr_rmnet_devs > 1)
  return -VAR_1;

 if (FUNC_3(VAR_4))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_4);
 VAR_9->rmnet_mode = VAR_2;
 VAR_9->bridge_ep = VAR_7;

 VAR_8->rmnet_mode = VAR_2;
 VAR_8->bridge_ep = VAR_4;

 FUNC_0(VAR_4, "registered with rmnet as slave\n");
 return 0;
}
