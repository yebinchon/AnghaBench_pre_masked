
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_dma {int device_fc; int chan; int enable_bit; int dir; int slave_id; int dst_maxburst; scalar_t__ dst_addr; int direction; } ;
struct TYPE_2__ {struct device* dev; } ;
struct msm_port {scalar_t__ is_uartdm; struct msm_dma tx_dma; TYPE_1__ uart; } ;
struct dma_slave_config {int device_fc; int chan; int enable_bit; int dir; int slave_id; int dst_maxburst; scalar_t__ dst_addr; int direction; } ;
struct device {int of_node; } ;
typedef scalar_t__ resource_size_t ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,struct msm_dma*) ;
 int FUNC_4 (struct msm_dma*,int ,int) ;
 int FUNC_5 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_6(struct msm_port *VAR_7, resource_size_t VAR_8)
{
 struct device *VAR_9 = VAR_7->uart.dev;
 struct dma_slave_config VAR_10;
 struct msm_dma *VAR_11;
 u32 VAR_12 = 0;
 int VAR_13;

 VAR_11 = &VAR_7->tx_dma;


 VAR_11->chan = FUNC_2(VAR_9, "tx");
 if (FUNC_0(VAR_11->chan))
  goto no_tx;

 FUNC_5(VAR_9->of_node, "qcom,tx-crci", &VAR_12);

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.direction = VAR_0;
 VAR_10.device_fc = 1;
 VAR_10.dst_addr = VAR_8 + VAR_6;
 VAR_10.dst_maxburst = VAR_3;
 VAR_10.slave_id = VAR_12;

 VAR_13 = FUNC_3(VAR_11->chan, &VAR_10);
 if (VAR_13)
  goto rel_tx;

 VAR_11->dir = VAR_1;

 if (VAR_7->is_uartdm < VAR_2)
  VAR_11->enable_bit = VAR_5;
 else
  VAR_11->enable_bit = VAR_4;

 return;

rel_tx:
 FUNC_1(VAR_11->chan);
no_tx:
 FUNC_4(VAR_11, 0, sizeof(*VAR_11));
}
