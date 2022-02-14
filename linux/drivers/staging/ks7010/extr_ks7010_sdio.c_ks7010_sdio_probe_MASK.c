
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {int device; int dev; int vendor; int class; int cur_blksize; TYPE_2__* card; } ;
struct sdio_device_id {int dummy; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {int net_dev; int rw_dwork; int wq; int dev_state; } ;
struct ks_sdio_card {struct sdio_func* func; struct ks_wlan_private* priv; } ;
struct TYPE_3__ {int multi_block; } ;
struct TYPE_4__ {TYPE_1__ cccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_5 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int *,char*,int ,int ,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ks_sdio_card*) ;
 int FUNC_9 (struct ks_wlan_private*) ;
 int FUNC_10 (struct ks_wlan_private*,struct ks_sdio_card*,struct net_device*) ;
 int VAR_6 ;
 int FUNC_11 (struct sdio_func*,struct ks_wlan_private*) ;
 int FUNC_12 (struct sdio_func*) ;
 int FUNC_13 (struct ks_sdio_card*) ;
 struct ks_sdio_card* FUNC_14 (int,int ) ;
 int FUNC_15 (int ,char*,...) ;
 struct ks_wlan_private* FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sdio_func*) ;
 int FUNC_19 (struct sdio_func*) ;
 int FUNC_20 (struct sdio_func*) ;
 int FUNC_21 (struct sdio_func*) ;
 int FUNC_22 (struct sdio_func*) ;
 int FUNC_23 (struct sdio_func*,int ) ;
 int FUNC_24 (struct sdio_func*,struct ks_sdio_card*) ;

__attribute__((used)) static int FUNC_25(struct sdio_func *VAR_7,
        const struct sdio_device_id *VAR_8)
{
 struct ks_wlan_private *VAR_9 = ((void*)0);
 struct net_device *VAR_10 = ((void*)0);
 struct ks_sdio_card *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_14(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->func = VAR_7;

 FUNC_18(VAR_7);

 VAR_12 = FUNC_23(VAR_7, VAR_4);
 if (VAR_12)
  goto err_free_card;

 FUNC_5(&VAR_11->func->dev, "multi_block=%d sdio_set_block_size()=%d %d\n",
  VAR_7->card->cccr.multi_block, VAR_7->cur_blksize, VAR_12);

 VAR_12 = FUNC_20(VAR_7);
 if (VAR_12)
  goto err_free_card;

 VAR_12 = FUNC_12(VAR_7);
 if (VAR_12)
  goto err_disable_func;

 FUNC_21(VAR_7);

 FUNC_24(VAR_7, VAR_11);

 FUNC_5(&VAR_11->func->dev, "class = 0x%X, vendor = 0x%X, device = 0x%X\n",
  VAR_7->class, VAR_7->vendor, VAR_7->device);


 VAR_10 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_6(&VAR_11->func->dev, "Unable to alloc new net device\n");
  goto err_release_irq;
 }

 VAR_12 = FUNC_4(VAR_10, "wlan%d");
 if (VAR_12 < 0) {
  FUNC_6(&VAR_11->func->dev, "Couldn't get name!\n");
  goto err_free_netdev;
 }

 VAR_9 = FUNC_16(VAR_10);

 VAR_11->priv = VAR_9;
 FUNC_1(VAR_10, &VAR_11->func->dev);

 FUNC_10(VAR_9, VAR_11, VAR_10);

 VAR_12 = FUNC_13(VAR_11);
 if (VAR_12) {
  FUNC_15(VAR_9->net_dev,
      "firmware load failed !! ret = %d\n", VAR_12);
  goto err_free_netdev;
 }

 FUNC_11(VAR_7, VAR_9);

 VAR_9->dev_state = VAR_0;

 VAR_9->wq = FUNC_3("wq", VAR_5, 1);
 if (!VAR_9->wq) {
  FUNC_15(VAR_9->net_dev, "create_workqueue failed !!\n");
  goto err_free_netdev;
 }

 FUNC_0(&VAR_9->rw_dwork, VAR_6);
 FUNC_9(VAR_9);

 VAR_12 = FUNC_17(VAR_9->net_dev);
 if (VAR_12)
  goto err_free_netdev;

 return 0;

 err_free_netdev:
 FUNC_7(VAR_10);
 err_release_irq:
 FUNC_18(VAR_7);
 FUNC_22(VAR_7);
 err_disable_func:
 FUNC_19(VAR_7);
 err_free_card:
 FUNC_21(VAR_7);
 FUNC_24(VAR_7, ((void*)0));
 FUNC_8(VAR_11);

 return -VAR_1;
}
