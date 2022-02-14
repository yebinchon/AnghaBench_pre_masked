
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct rproc {int bootaddr; TYPE_1__ dev; struct omap_rproc* priv; } ;
struct TYPE_4__ {struct omap_rproc_pdata* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct omap_rproc_pdata {int (* device_enable ) (struct platform_device*) ;int mbox_name; int (* set_bootaddr ) (int ) ;} ;
struct mbox_client {int tx_block; int knows_txdone; int rx_callback; int * tx_done; struct device* dev; } ;
struct omap_rproc {int mbox; struct mbox_client client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (struct mbox_client*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct platform_device*) ;
 struct platform_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct rproc *VAR_3)
{
 struct omap_rproc *VAR_4 = VAR_3->priv;
 struct device *VAR_5 = VAR_3->dev.parent;
 struct platform_device *VAR_6 = FUNC_8(VAR_5);
 struct omap_rproc_pdata *VAR_7 = VAR_6->dev.platform_data;
 int VAR_8;
 struct mbox_client *VAR_9 = &VAR_4->client;

 if (VAR_7->set_bootaddr)
  VAR_7->set_bootaddr(VAR_3->bootaddr);

 VAR_9->dev = VAR_5;
 VAR_9->tx_done = ((void*)0);
 VAR_9->rx_callback = VAR_2;
 VAR_9->tx_block = 0;
 VAR_9->knows_txdone = 0;

 VAR_4->mbox = FUNC_5(VAR_9, VAR_7->mbox_name);
 if (FUNC_0(VAR_4->mbox)) {
  VAR_8 = -VAR_0;
  FUNC_2(VAR_5, "mbox_request_channel failed: %ld\n",
   FUNC_1(VAR_4->mbox));
  return VAR_8;
 }
 VAR_8 = FUNC_4(VAR_4->mbox, (void *)VAR_1);
 if (VAR_8 < 0) {
  FUNC_2(VAR_5, "mbox_send_message failed: %d\n", VAR_8);
  goto put_mbox;
 }

 VAR_8 = VAR_7->device_enable(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_5, "omap_device_enable failed: %d\n", VAR_8);
  goto put_mbox;
 }

 return 0;

put_mbox:
 FUNC_3(VAR_4->mbox);
 return VAR_8;
}
