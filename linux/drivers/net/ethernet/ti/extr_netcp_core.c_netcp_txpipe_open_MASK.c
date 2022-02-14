
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct netcp_tx_pipe {int * dma_channel; int * dma_queue; int dma_queue_id; int dma_chan_name; TYPE_1__* netcp_device; } ;
struct TYPE_5__ {int filt_einfo; int filt_pswords; int priority; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;
struct knav_dma_cfg {TYPE_3__ u; int direction; } ;
struct device {int dummy; } ;
typedef int name ;
typedef int config ;
struct TYPE_4__ {struct device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int *) ;
 int FUNC_4 (struct device*,char*,int *,...) ;
 char* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (struct device*,int ,struct knav_dma_cfg*) ;
 int * FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct knav_dma_cfg*,int ,int) ;
 int FUNC_10 (int *,int,char*,char*) ;

int FUNC_11(struct netcp_tx_pipe *VAR_3)
{
 struct device *VAR_4 = VAR_3->netcp_device->device;
 struct knav_dma_cfg VAR_5;
 int VAR_6 = 0;
 u8 VAR_7[16];

 FUNC_9(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.direction = VAR_0;
 VAR_5.u.tx.filt_einfo = 0;
 VAR_5.u.tx.filt_pswords = 0;
 VAR_5.u.tx.priority = VAR_1;

 VAR_3->dma_channel = FUNC_7(VAR_4,
    VAR_3->dma_chan_name, &VAR_5);
 if (FUNC_0(VAR_3->dma_channel)) {
  FUNC_4(VAR_4, "failed opening tx chan(%s)\n",
   &VAR_3->dma_chan_name);
  VAR_6 = FUNC_2(VAR_3->dma_channel);
  goto err;
 }

 FUNC_10(VAR_7, sizeof(VAR_7), "tx-pipe-%s", FUNC_5(VAR_4));
 VAR_3->dma_queue = FUNC_8(VAR_7, VAR_3->dma_queue_id,
          VAR_2);
 if (FUNC_0(VAR_3->dma_queue)) {
  FUNC_4(VAR_4, "Could not open DMA queue for channel \"%s\": %d\n",
   VAR_7, VAR_6);
  VAR_6 = FUNC_2(VAR_3->dma_queue);
  goto err;
 }

 FUNC_3(VAR_4, "opened tx pipe %s\n", VAR_7);
 return 0;

err:
 if (!FUNC_1(VAR_3->dma_channel))
  FUNC_6(VAR_3->dma_channel);
 VAR_3->dma_channel = ((void*)0);
 return VAR_6;
}
