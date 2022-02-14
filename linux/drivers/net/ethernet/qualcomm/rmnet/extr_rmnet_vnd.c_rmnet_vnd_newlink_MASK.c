
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rmnet_priv {void* mux_id; struct net_device* real_dev; } ;
struct rmnet_port {int nr_rmnet_devs; } ;
struct rmnet_endpoint {void* mux_id; struct net_device* egress_dev; } ;
struct net_device {int hw_features; int * rtnl_link_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct rmnet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct rmnet_port*,void*) ;
 int VAR_6 ;

int FUNC_4(u8 VAR_7, struct net_device *VAR_8,
        struct rmnet_port *VAR_9,
        struct net_device *VAR_10,
        struct rmnet_endpoint *VAR_11)
{
 struct rmnet_priv *VAR_12 = FUNC_1(VAR_8);
 int VAR_13;

 if (VAR_11->egress_dev)
  return -VAR_1;

 if (FUNC_3(VAR_9, VAR_7))
  return -VAR_0;

 VAR_8->hw_features = VAR_4;
 VAR_8->hw_features |= VAR_3 | VAR_2;
 VAR_8->hw_features |= VAR_5;

 VAR_12->real_dev = VAR_10;

 VAR_13 = FUNC_2(VAR_8);
 if (!VAR_13) {
  VAR_11->egress_dev = VAR_8;
  VAR_11->mux_id = VAR_7;
  VAR_9->nr_rmnet_devs++;

  VAR_8->rtnl_link_ops = &VAR_6;

  VAR_12->mux_id = VAR_7;

  FUNC_0(VAR_8, "rmnet dev created\n");
 }

 return VAR_13;
}
