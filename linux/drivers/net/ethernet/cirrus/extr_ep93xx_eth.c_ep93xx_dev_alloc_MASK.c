
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int * netdev_ops; int * ethtool_ops; int dev_addr; } ;
struct ep93xx_priv {int dummy; } ;
struct ep93xx_eth_data {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct net_device *FUNC_2(struct ep93xx_eth_data *VAR_5)
{
 struct net_device *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct ep93xx_priv));
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_6->dev_addr, VAR_5->dev_addr, VAR_0);

 VAR_6->ethtool_ops = &VAR_3;
 VAR_6->netdev_ops = &VAR_4;

 VAR_6->features |= VAR_2 | VAR_1;

 return VAR_6;
}
