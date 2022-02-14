
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {int dma_rx_channel; int rx_phys_base; int rx_base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct qcom_slim_ngd_ctrl*) ;

__attribute__((used)) static int FUNC_6(struct qcom_slim_ngd_ctrl *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7, VAR_8;

 VAR_5->dma_rx_channel = FUNC_4(VAR_6, "rx");
 if (!VAR_5->dma_rx_channel) {
  FUNC_0(VAR_6, "Failed to request dma channels");
  return -VAR_0;
 }

 VAR_8 = VAR_3 * VAR_4;
 VAR_5->rx_base = FUNC_1(VAR_6, VAR_8, &VAR_5->rx_phys_base,
        VAR_2);
 if (!VAR_5->rx_base) {
  FUNC_0(VAR_6, "dma_alloc_coherent failed\n");
  VAR_7 = -VAR_1;
  goto rel_rx;
 }

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_6, "post_rx_msgq() failed 0x%x\n", VAR_7);
  goto rx_post_err;
 }

 return 0;

rx_post_err:
 FUNC_2(VAR_6, VAR_8, VAR_5->rx_base, VAR_5->rx_phys_base);
rel_rx:
 FUNC_3(VAR_5->dma_rx_channel);
 return VAR_7;
}
