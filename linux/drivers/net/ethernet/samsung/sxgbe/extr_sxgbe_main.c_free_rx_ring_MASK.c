
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_rx_queue {int rx_skbuff; int rx_skbuff_dma; int dma_rx_phy; int dma_rx; } ;
struct sxgbe_rx_norm_desc {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct sxgbe_rx_queue *VAR_1,
    int VAR_2)
{
 FUNC_0(VAR_0, VAR_2 * sizeof(struct sxgbe_rx_norm_desc),
     VAR_1->dma_rx, VAR_1->dma_rx_phy);
 FUNC_1(VAR_1->rx_skbuff_dma);
 FUNC_1(VAR_1->rx_skbuff);
}
