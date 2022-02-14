
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd8111e_tx_dr {int dummy; } ;
struct amd8111e_rx_dr {int dummy; } ;
struct amd8111e_priv {int * tx_ring; int tx_ring_dma_addr; int pci_dev; int * rx_ring; int rx_ring_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct amd8111e_priv *VAR_2)
{

 if(VAR_2->rx_ring){
  FUNC_0(VAR_2->pci_dev,
   sizeof(struct amd8111e_rx_dr)*VAR_0,
   VAR_2->rx_ring, VAR_2->rx_ring_dma_addr);
  VAR_2->rx_ring = ((void*)0);
 }

 if(VAR_2->tx_ring){
  FUNC_0(VAR_2->pci_dev,
   sizeof(struct amd8111e_tx_dr)*VAR_1,
   VAR_2->tx_ring, VAR_2->tx_ring_dma_addr);

  VAR_2->tx_ring = ((void*)0);
 }

}
