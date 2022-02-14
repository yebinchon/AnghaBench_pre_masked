
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_slim_ngd_dma_desc {void* base; TYPE_1__* desc; scalar_t__ phys; struct qcom_slim_ngd_ctrl* ctrl; } ;
struct qcom_slim_ngd_ctrl {void* tx_base; int tx_buf_lock; int dma_tx_channel; int dev; scalar_t__ tx_phys_base; struct qcom_slim_ngd_dma_desc* txdesc; } ;
struct TYPE_3__ {int cookie; struct qcom_slim_ngd_dma_desc* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct qcom_slim_ngd_ctrl *VAR_5,
         void *VAR_6, int VAR_7)
{
 struct qcom_slim_ngd_dma_desc *VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(&VAR_5->tx_buf_lock, VAR_9);
 VAR_11 = VAR_6 - VAR_5->tx_base;
 VAR_10 = VAR_11/VAR_3;

 VAR_8 = &VAR_5->txdesc[VAR_10];
 VAR_8->phys = VAR_5->tx_phys_base + VAR_11;
 VAR_8->base = VAR_5->tx_base + VAR_11;
 VAR_8->ctrl = VAR_5;
 VAR_7 = (VAR_7 + 3) & 0xfc;

 VAR_8->desc = FUNC_2(VAR_5->dma_tx_channel,
      VAR_8->phys, VAR_7,
      VAR_0,
      VAR_1);
 if (!VAR_8->desc) {
  FUNC_0(VAR_5->dev, "unable to prepare channel\n");
  FUNC_5(&VAR_5->tx_buf_lock, VAR_9);
  return -VAR_2;
 }

 VAR_8->desc->callback = VAR_4;
 VAR_8->desc->callback_param = VAR_8;
 VAR_8->desc->cookie = FUNC_3(VAR_8->desc);
 FUNC_1(VAR_5->dma_tx_channel);
 FUNC_5(&VAR_5->tx_buf_lock, VAR_9);

 return 0;
}
