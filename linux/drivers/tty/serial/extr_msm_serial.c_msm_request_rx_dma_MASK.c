
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_dma {int device_fc; int chan; int virt; int enable_bit; int dir; int slave_id; int src_maxburst; scalar_t__ src_addr; int direction; } ;
struct TYPE_2__ {struct device* dev; } ;
struct msm_port {scalar_t__ is_uartdm; struct msm_dma rx_dma; TYPE_1__ uart; } ;
struct dma_slave_config {int device_fc; int chan; int virt; int enable_bit; int dir; int slave_id; int src_maxburst; scalar_t__ src_addr; int direction; } ;
struct device {int of_node; } ;
typedef scalar_t__ resource_size_t ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,struct msm_dma*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct msm_dma*,int ,int) ;
 int FUNC_7 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_8(struct msm_port *VAR_9, resource_size_t VAR_10)
{
 struct device *VAR_11 = VAR_9->uart.dev;
 struct dma_slave_config VAR_12;
 struct msm_dma *VAR_13;
 u32 VAR_14 = 0;
 int VAR_15;

 VAR_13 = &VAR_9->rx_dma;


 VAR_13->chan = FUNC_2(VAR_11, "rx");
 if (FUNC_0(VAR_13->chan))
  goto no_rx;

 FUNC_7(VAR_11->of_node, "qcom,rx-crci", &VAR_14);

 VAR_13->virt = FUNC_5(VAR_8, VAR_2);
 if (!VAR_13->virt)
  goto rel_rx;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.direction = VAR_0;
 VAR_12.device_fc = 1;
 VAR_12.src_addr = VAR_10 + VAR_7;
 VAR_12.src_maxburst = VAR_4;
 VAR_12.slave_id = VAR_14;

 VAR_15 = FUNC_3(VAR_13->chan, &VAR_12);
 if (VAR_15)
  goto err;

 VAR_13->dir = VAR_1;

 if (VAR_9->is_uartdm < VAR_3)
  VAR_13->enable_bit = VAR_6;
 else
  VAR_13->enable_bit = VAR_5;

 return;
err:
 FUNC_4(VAR_13->virt);
rel_rx:
 FUNC_1(VAR_13->chan);
no_rx:
 FUNC_6(VAR_13, 0, sizeof(*VAR_13));
}
