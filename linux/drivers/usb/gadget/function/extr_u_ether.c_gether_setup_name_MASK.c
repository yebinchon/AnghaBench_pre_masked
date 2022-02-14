
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_gadget {int dev; } ;
struct net_device {int dev_addr; int max_mtu; int min_mtu; int * ethtool_ops; int * netdev_ops; int name; } ;
struct eth_dev {unsigned int qmult; int host_mac; struct usb_gadget* gadget; struct net_device* net; int rx_frames; int rx_reqs; int tx_reqs; int work; int req_lock; int lock; } ;


 int VAR_0 ;
 struct eth_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct eth_dev*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (struct net_device*,int *) ;
 struct net_device* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct net_device*) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (char const*,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 struct eth_dev* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int,char*,char const*) ;
 int FUNC_17 (int *) ;

struct eth_dev *FUNC_18(struct usb_gadget *VAR_8,
  const char *VAR_9, const char *VAR_10,
  u8 VAR_11[VAR_1], unsigned VAR_12, const char *VAR_13)
{
 struct eth_dev *VAR_14;
 struct net_device *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_6(sizeof *VAR_14);
 if (!VAR_15)
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_12(VAR_15);
 FUNC_17(&VAR_14->lock);
 FUNC_17(&VAR_14->req_lock);
 FUNC_3(&VAR_14->work, VAR_5);
 FUNC_2(&VAR_14->tx_reqs);
 FUNC_2(&VAR_14->rx_reqs);

 FUNC_15(&VAR_14->rx_frames);


 VAR_14->net = VAR_15;
 VAR_14->qmult = VAR_12;
 FUNC_16(VAR_15->name, sizeof(VAR_15->name), "%s%%d", VAR_13);

 if (FUNC_10(VAR_9, VAR_15->dev_addr))
  FUNC_8(&VAR_8->dev,
   "using random %s ethernet address\n", "self");
 if (FUNC_10(VAR_10, VAR_14->host_mac))
  FUNC_8(&VAR_8->dev,
   "using random %s ethernet address\n", "host");

 if (VAR_11)
  FUNC_11(VAR_11, VAR_14->host_mac, VAR_1);

 VAR_15->netdev_ops = &VAR_4;

 VAR_15->ethtool_ops = &VAR_7;


 VAR_15->min_mtu = VAR_2;
 VAR_15->max_mtu = VAR_3;

 VAR_14->gadget = VAR_8;
 FUNC_4(VAR_15, &VAR_8->dev);
 FUNC_5(VAR_15, &VAR_6);

 VAR_16 = FUNC_14(VAR_15);
 if (VAR_16 < 0) {
  FUNC_7(&VAR_8->dev, "register_netdev failed, %d\n", VAR_16);
  FUNC_9(VAR_15);
  VAR_14 = FUNC_0(VAR_16);
 } else {
  FUNC_1(VAR_14, "MAC %pM\n", VAR_15->dev_addr);
  FUNC_1(VAR_14, "HOST MAC %pM\n", VAR_14->host_mac);






  FUNC_13(VAR_15);
 }

 return VAR_14;
}
