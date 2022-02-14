
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dma {int virt; scalar_t__ chan; } ;
struct msm_port {int uart; struct msm_dma rx_dma; struct msm_dma tx_dma; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct msm_dma*,int ,int) ;
 int FUNC_3 (int *,struct msm_dma*) ;

__attribute__((used)) static void FUNC_4(struct msm_port *VAR_0)
{
 struct msm_dma *VAR_1;

 VAR_1 = &VAR_0->tx_dma;
 if (VAR_1->chan) {
  FUNC_3(&VAR_0->uart, VAR_1);
  FUNC_0(VAR_1->chan);
 }

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 VAR_1 = &VAR_0->rx_dma;
 if (VAR_1->chan) {
  FUNC_3(&VAR_0->uart, VAR_1);
  FUNC_0(VAR_1->chan);
  FUNC_1(VAR_1->virt);
 }

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
