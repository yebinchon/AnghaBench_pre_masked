
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qcom_slim_ngd_dma_desc {TYPE_1__* desc; int phys; scalar_t__ base; struct qcom_slim_ngd_ctrl* ctrl; } ;
struct qcom_slim_ngd_ctrl {int dma_rx_channel; int dev; } ;
struct TYPE_3__ {void (* callback ) (void*) ;int cookie; struct qcom_slim_ngd_dma_desc* callback_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct qcom_slim_ngd_ctrl*,int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 struct qcom_slim_ngd_dma_desc *VAR_4 = VAR_3;
 struct qcom_slim_ngd_ctrl *VAR_5 = VAR_4->ctrl;

 FUNC_4(VAR_5, (u8 *)VAR_4->base);

 VAR_4->desc = FUNC_2(VAR_5->dma_rx_channel,
     VAR_4->phys, VAR_2,
     VAR_0,
     VAR_1);
 if (!VAR_4->desc) {
  FUNC_0(VAR_5->dev, "Unable to prepare rx channel\n");
  return;
 }

 VAR_4->desc->callback = FUNC_5;
 VAR_4->desc->callback_param = VAR_4;
 VAR_4->desc->cookie = FUNC_3(VAR_4->desc);
 FUNC_1(VAR_5->dma_rx_channel);
}
