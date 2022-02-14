
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int rx_ring_size; int tx_ring_size; scalar_t__ rx_ring_dma; scalar_t__ tx_ring_dma; scalar_t__ rx_ring; scalar_t__ tx_ring; int * tx_buffers; int * rx_buffers; int pdev; } ;
struct adm8211_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct adm8211_priv *VAR_3 = VAR_2->priv;
 unsigned int VAR_4;

 VAR_3->rx_buffers = FUNC_1(sizeof(*VAR_3->rx_buffers) * VAR_3->rx_ring_size +
       sizeof(*VAR_3->tx_buffers) * VAR_3->tx_ring_size, VAR_1);
 if (!VAR_3->rx_buffers)
  return -VAR_0;

 VAR_3->tx_buffers = (void *)VAR_3->rx_buffers +
      sizeof(*VAR_3->rx_buffers) * VAR_3->rx_ring_size;


 VAR_4 = sizeof(struct adm8211_desc) * VAR_3->rx_ring_size +
      sizeof(struct adm8211_desc) * VAR_3->tx_ring_size;
 VAR_3->rx_ring = FUNC_2(VAR_3->pdev, VAR_4,
          &VAR_3->rx_ring_dma);

 if (!VAR_3->rx_ring) {
  FUNC_0(VAR_3->rx_buffers);
  VAR_3->rx_buffers = ((void*)0);
  VAR_3->tx_buffers = ((void*)0);
  return -VAR_0;
 }

 VAR_3->tx_ring = VAR_3->rx_ring + VAR_3->rx_ring_size;
 VAR_3->tx_ring_dma = VAR_3->rx_ring_dma +
       sizeof(struct adm8211_desc) * VAR_3->rx_ring_size;

 return 0;
}
