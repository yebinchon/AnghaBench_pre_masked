
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_rx_queue {int * rx_skbuff_dma; int * rx_skbuff; } ;
struct sxgbe_rx_norm_desc {int dummy; } ;
struct sxgbe_priv_data {int device; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 struct sxgbe_priv_data* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
      struct sxgbe_rx_norm_desc *VAR_2, int VAR_3,
      unsigned int VAR_4,
      struct sxgbe_rx_queue *VAR_5)
{
 struct sxgbe_priv_data *VAR_6 = FUNC_2(VAR_1);

 FUNC_1(VAR_5->rx_skbuff[VAR_3]);
 FUNC_0(VAR_6->device, VAR_5->rx_skbuff_dma[VAR_3],
    VAR_4, VAR_0);
}
