
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; } ;
struct serdev_device {TYPE_1__ dev; } ;
struct qcauart {int tx_work; struct net_device* net_dev; int lock; int frm_handle; struct serdev_device* serdev; } ;
struct net_device {int dev_addr; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct net_device*,TYPE_1__*) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,char const*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int) ;
 struct qcauart* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int*) ;
 int FUNC_15 (char*) ;
 int VAR_1 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct serdev_device*) ;
 int FUNC_20 (struct serdev_device*) ;
 int FUNC_21 (struct serdev_device*,int) ;
 int FUNC_22 (struct serdev_device*,int *) ;
 int FUNC_23 (struct serdev_device*,struct qcauart*) ;
 int FUNC_24 (struct serdev_device*,int) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct serdev_device *VAR_3)
{
 struct net_device *VAR_4 = FUNC_3(sizeof(struct qcauart));
 struct qcauart *VAR_5;
 const char *VAR_6;
 u32 VAR_7 = 115200;
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;

 FUNC_17(VAR_4);
 FUNC_2(VAR_4, &VAR_3->dev);

 VAR_5 = FUNC_11(VAR_4);
 if (!VAR_5) {
  FUNC_15("qca_uart: Fail to retrieve private structure\n");
  VAR_8 = -VAR_0;
  goto free;
 }
 VAR_5->net_dev = VAR_4;
 VAR_5->serdev = VAR_3;
 FUNC_16(&VAR_5->frm_handle);

 FUNC_25(&VAR_5->lock);
 FUNC_0(&VAR_5->tx_work, VAR_2);

 FUNC_14(VAR_3->dev.of_node, "current-speed", &VAR_7);

 VAR_6 = FUNC_13(VAR_3->dev.of_node);

 if (!FUNC_1(VAR_6))
  FUNC_8(VAR_5->net_dev->dev_addr, VAR_6);

 if (!FUNC_10(VAR_5->net_dev->dev_addr)) {
  FUNC_7(VAR_5->net_dev);
  FUNC_6(&VAR_3->dev, "Using random MAC address: %pM\n",
    VAR_5->net_dev->dev_addr);
 }

 FUNC_12(VAR_5->net_dev);
 FUNC_23(VAR_3, VAR_5);
 FUNC_22(VAR_3, &VAR_1);

 VAR_8 = FUNC_20(VAR_3);
 if (VAR_8) {
  FUNC_5(&VAR_3->dev, "Unable to open device %s\n",
   VAR_4->name);
  goto free;
 }

 VAR_7 = FUNC_21(VAR_3, VAR_7);
 FUNC_6(&VAR_3->dev, "Using baudrate: %u\n", VAR_7);

 FUNC_24(VAR_3, 0);

 VAR_8 = FUNC_18(VAR_4);
 if (VAR_8) {
  FUNC_5(&VAR_3->dev, "Unable to register net device %s\n",
   VAR_4->name);
  FUNC_19(VAR_3);
  FUNC_4(&VAR_5->tx_work);
  goto free;
 }

 return 0;

free:
 FUNC_9(VAR_4);
 return VAR_8;
}
