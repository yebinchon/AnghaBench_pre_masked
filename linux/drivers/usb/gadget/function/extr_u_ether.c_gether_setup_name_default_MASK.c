
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; int name; } ;
struct eth_dev {int host_mac; int dev_mac; int qmult; struct net_device* net; int rx_frames; int rx_reqs; int tx_reqs; int work; int req_lock; int lock; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*,int *) ;
 struct net_device* FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct eth_dev* FUNC_6 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,char*,char const*) ;
 int FUNC_10 (int *) ;

struct net_device *FUNC_11(const char *VAR_8)
{
 struct net_device *VAR_9;
 struct eth_dev *VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_10));
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_6(VAR_9);
 FUNC_10(&VAR_10->lock);
 FUNC_10(&VAR_10->req_lock);
 FUNC_2(&VAR_10->work, VAR_5);
 FUNC_1(&VAR_10->tx_reqs);
 FUNC_1(&VAR_10->rx_reqs);

 FUNC_8(&VAR_10->rx_frames);


 VAR_10->net = VAR_9;
 VAR_10->qmult = VAR_3;
 FUNC_9(VAR_9->name, sizeof(VAR_9->name), "%s%%d", VAR_8);

 FUNC_5(VAR_10->dev_mac);
 FUNC_7("using random %s ethernet address\n", "self");
 FUNC_5(VAR_10->host_mac);
 FUNC_7("using random %s ethernet address\n", "host");

 VAR_9->netdev_ops = &VAR_4;

 VAR_9->ethtool_ops = &VAR_7;
 FUNC_3(VAR_9, &VAR_6);


 VAR_9->min_mtu = VAR_1;
 VAR_9->max_mtu = VAR_2;

 return VAR_9;
}
