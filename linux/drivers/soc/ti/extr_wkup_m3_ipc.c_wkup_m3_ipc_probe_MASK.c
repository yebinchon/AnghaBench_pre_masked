
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_block; int knows_txdone; int * rx_callback; int * tx_prepare; int * tx_done; struct device* dev; } ;
struct wkup_m3_ipc {struct task_struct* mbox; int * ops; int state; struct device* dev; struct rproc* rproc; TYPE_1__ mbox_client; struct task_struct* ipc_mem_base; } ;
struct task_struct {int dummy; } ;
struct rproc {int dummy; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
typedef int phandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_6 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct task_struct* FUNC_3 (struct device*,struct resource*) ;
 struct wkup_m3_ipc* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,char*,struct wkup_m3_ipc*) ;
 int VAR_7 ;
 struct task_struct* FUNC_6 (void*,struct wkup_m3_ipc*,char*) ;
 struct wkup_m3_ipc* VAR_8 ;
 int FUNC_7 (struct task_struct*) ;
 struct task_struct* FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 struct rproc* FUNC_12 (int ) ;
 int FUNC_13 (struct rproc*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 int VAR_13, VAR_14;
 phandle VAR_15;
 struct rproc *VAR_16;
 struct resource *VAR_17;
 struct task_struct *VAR_18;
 struct wkup_m3_ipc *VAR_19;

 VAR_19 = FUNC_4(VAR_12, sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return -VAR_1;

 VAR_17 = FUNC_11(VAR_11, VAR_5, 0);
 VAR_19->ipc_mem_base = FUNC_3(VAR_12, VAR_17);
 if (FUNC_0(VAR_19->ipc_mem_base)) {
  FUNC_2(VAR_12, "could not ioremap ipc_mem\n");
  return FUNC_1(VAR_19->ipc_mem_base);
 }

 VAR_13 = FUNC_10(VAR_11, 0);
 if (!VAR_13) {
  FUNC_2(&VAR_11->dev, "no irq resource\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_5(VAR_12, VAR_13, VAR_10,
          0, "wkup_m3_txev", VAR_19);
 if (VAR_14) {
  FUNC_2(VAR_12, "request_irq failed\n");
  return VAR_14;
 }

 VAR_19->mbox_client.dev = VAR_12;
 VAR_19->mbox_client.tx_done = ((void*)0);
 VAR_19->mbox_client.tx_prepare = ((void*)0);
 VAR_19->mbox_client.rx_callback = ((void*)0);
 VAR_19->mbox_client.tx_block = 0;
 VAR_19->mbox_client.knows_txdone = 0;

 VAR_19->mbox = FUNC_8(&VAR_19->mbox_client, 0);

 if (FUNC_0(VAR_19->mbox)) {
  FUNC_2(VAR_12, "IPC Request for A8->M3 Channel failed! %ld\n",
   FUNC_1(VAR_19->mbox));
  return FUNC_1(VAR_19->mbox);
 }

 if (FUNC_9(VAR_12->of_node, "ti,rproc", &VAR_15)) {
  FUNC_2(&VAR_11->dev, "could not get rproc phandle\n");
  VAR_14 = -VAR_0;
  goto err_free_mbox;
 }

 VAR_16 = FUNC_12(VAR_15);
 if (!VAR_16) {
  FUNC_2(&VAR_11->dev, "could not get rproc handle\n");
  VAR_14 = -VAR_3;
  goto err_free_mbox;
 }

 VAR_19->rproc = VAR_16;
 VAR_19->dev = VAR_12;
 VAR_19->state = VAR_6;

 VAR_19->ops = &VAR_7;






 VAR_18 = FUNC_6((void *)VAR_9, VAR_19,
      "wkup_m3_rproc_loader");

 if (FUNC_0(VAR_18)) {
  FUNC_2(VAR_12, "can't create rproc_boot thread\n");
  VAR_14 = FUNC_1(VAR_18);
  goto err_put_rproc;
 }

 VAR_8 = VAR_19;

 return 0;

err_put_rproc:
 FUNC_13(VAR_16);
err_free_mbox:
 FUNC_7(VAR_19->mbox);
 return VAR_14;
}
