
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_slim_ngd_dma_desc {TYPE_1__* desc; scalar_t__ phys; scalar_t__ base; struct qcom_slim_ngd_ctrl* ctrl; } ;
struct qcom_slim_ngd_ctrl {int dma_rx_channel; int dev; scalar_t__ rx_base; scalar_t__ rx_phys_base; struct qcom_slim_ngd_dma_desc* rx_desc; } ;
struct TYPE_3__ {int cookie; struct qcom_slim_ngd_dma_desc* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct qcom_slim_ngd_ctrl *VAR_6)
{
 struct qcom_slim_ngd_dma_desc *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_6->rx_desc[VAR_8];
  VAR_7->phys = VAR_6->rx_phys_base + VAR_8 * VAR_4;
  VAR_7->ctrl = VAR_6;
  VAR_7->base = VAR_6->rx_base + VAR_8 * VAR_4;
  VAR_7->desc = FUNC_2(VAR_6->dma_rx_channel,
      VAR_7->phys, VAR_4,
      VAR_0,
      VAR_1);
  if (!VAR_7->desc) {
   FUNC_0(VAR_6->dev, "Unable to prepare rx channel\n");
   return -VAR_2;
  }

  VAR_7->desc->callback = VAR_5;
  VAR_7->desc->callback_param = VAR_7;
  VAR_7->desc->cookie = FUNC_3(VAR_7->desc);
 }
 FUNC_1(VAR_6->dma_rx_channel);

 return 0;
}
