
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int knows_txdone; int * dev; } ;
struct qmp {int mbox_chan; TYPE_1__ mbox_client; int msgram; int tx_lock; int event; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct qmp* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,char*,struct qmp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct qmp*) ;
 int FUNC_13 (struct qmp*) ;
 int FUNC_14 (struct qmp*) ;
 int VAR_4 ;
 int FUNC_15 (struct qmp*) ;
 int FUNC_16 (struct qmp*) ;
 int FUNC_17 (struct qmp*) ;
 int FUNC_18 (struct qmp*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct qmp *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = &VAR_5->dev;
 FUNC_6(&VAR_7->event);
 FUNC_9(&VAR_7->tx_lock);

 VAR_6 = FUNC_11(VAR_5, VAR_2, 0);
 VAR_7->msgram = FUNC_3(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->msgram))
  return FUNC_1(VAR_7->msgram);

 VAR_7->mbox_client.dev = &VAR_5->dev;
 VAR_7->mbox_client.knows_txdone = 1;
 VAR_7->mbox_chan = FUNC_8(&VAR_7->mbox_client, 0);
 if (FUNC_0(VAR_7->mbox_chan)) {
  FUNC_2(&VAR_5->dev, "failed to acquire ipc mailbox\n");
  return FUNC_1(VAR_7->mbox_chan);
 }

 VAR_8 = FUNC_10(VAR_5, 0);
 VAR_9 = FUNC_5(&VAR_5->dev, VAR_8, VAR_4, VAR_3,
          "aoss-qmp", VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_5->dev, "failed to request interrupt\n");
  goto err_free_mbox;
 }

 VAR_9 = FUNC_15(VAR_7);
 if (VAR_9 < 0)
  goto err_free_mbox;

 VAR_9 = FUNC_17(VAR_7);
 if (VAR_9)
  goto err_close_qmp;

 VAR_9 = FUNC_16(VAR_7);
 if (VAR_9)
  goto err_remove_qdss_clk;

 VAR_9 = FUNC_14(VAR_7);
 if (VAR_9)
  FUNC_2(&VAR_5->dev, "failed to register aoss cooling devices\n");

 FUNC_12(VAR_5, VAR_7);

 return 0;

err_remove_qdss_clk:
 FUNC_18(VAR_7);
err_close_qmp:
 FUNC_13(VAR_7);
err_free_mbox:
 FUNC_7(VAR_7->mbox_chan);

 return VAR_9;
}
