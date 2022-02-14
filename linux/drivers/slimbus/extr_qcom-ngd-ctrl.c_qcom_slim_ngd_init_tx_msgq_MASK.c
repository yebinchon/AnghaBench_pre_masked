
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {int dma_tx_channel; int tx_buf_lock; scalar_t__ tx_head; scalar_t__ tx_tail; int tx_base; int tx_phys_base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct qcom_slim_ngd_ctrl *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_4->dma_tx_channel = FUNC_3(VAR_5, "tx");
 if (!VAR_4->dma_tx_channel) {
  FUNC_0(VAR_5, "Failed to request dma channels");
  return -VAR_0;
 }

 VAR_8 = ((VAR_2 + 1) * VAR_3);
 VAR_4->tx_base = FUNC_1(VAR_5, VAR_8, &VAR_4->tx_phys_base,
        VAR_1);
 if (!VAR_4->tx_base) {
  FUNC_0(VAR_5, "dma_alloc_coherent failed\n");
  VAR_7 = -VAR_0;
  goto rel_tx;
 }

 FUNC_4(&VAR_4->tx_buf_lock, VAR_6);
 VAR_4->tx_tail = 0;
 VAR_4->tx_head = 0;
 FUNC_5(&VAR_4->tx_buf_lock, VAR_6);

 return 0;
rel_tx:
 FUNC_2(VAR_4->dma_tx_channel);
 return VAR_7;
}
