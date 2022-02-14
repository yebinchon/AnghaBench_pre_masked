
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct net_device {int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; } ;
struct ethsw_port_priv {size_t idx; int flood; int stp_state; struct ethsw_core* ethsw_data; struct net_device* netdev; } ;
struct ethsw_core {struct ethsw_port_priv** ports; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (struct ethsw_port_priv*,size_t) ;
 int VAR_5 ;
 int FUNC_4 (struct net_device*) ;
 struct ethsw_port_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct ethsw_core *VAR_6, u16 VAR_7)
{
 struct ethsw_port_priv *VAR_8;
 struct device *VAR_9 = VAR_6->dev;
 struct net_device *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(struct ethsw_port_priv));
 if (!VAR_10) {
  FUNC_2(VAR_9, "alloc_etherdev error\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_10);
 VAR_8->netdev = VAR_10;
 VAR_8->ethsw_data = VAR_6;

 VAR_8->idx = VAR_7;
 VAR_8->stp_state = VAR_0;


 VAR_8->flood = 1;

 FUNC_0(VAR_10, VAR_9);
 VAR_10->netdev_ops = &VAR_5;
 VAR_10->ethtool_ops = &VAR_4;


 VAR_10->min_mtu = VAR_3;
 VAR_10->max_mtu = VAR_2;

 VAR_11 = FUNC_3(VAR_8, VAR_7);
 if (VAR_11)
  goto err_port_probe;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "register_netdev error %d\n", VAR_11);
  goto err_port_probe;
 }

 VAR_6->ports[VAR_7] = VAR_8;

 return 0;

err_port_probe:
 FUNC_4(VAR_10);

 return VAR_11;
}
