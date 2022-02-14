
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_tx_queue {int dma_tx_phy; int dma_tx; } ;
struct sxgbe_tx_norm_desc {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct sxgbe_tx_queue *VAR_1,
    int VAR_2)
{
 FUNC_0(VAR_0, VAR_2 * sizeof(struct sxgbe_tx_norm_desc),
     VAR_1->dma_tx, VAR_1->dma_tx_phy);
}
