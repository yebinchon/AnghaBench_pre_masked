
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ethtool_ops; int * netdev_ops; } ;
struct device {int dummy; } ;
struct bgmac {struct net_device* net_dev; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct device*,int) ;
 struct bgmac* FUNC_1 (struct net_device*) ;

struct bgmac *FUNC_2(struct device *VAR_2)
{
 struct net_device *VAR_3;
 struct bgmac *VAR_4;


 VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_4));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->netdev_ops = &VAR_1;
 VAR_3->ethtool_ops = &VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_2;
 VAR_4->net_dev = VAR_3;

 return VAR_4;
}
