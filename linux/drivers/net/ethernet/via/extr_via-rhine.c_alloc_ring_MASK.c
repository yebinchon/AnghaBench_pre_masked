
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct rhine_private {int quirks; void* tx_bufs_dma; void* tx_ring_dma; void* rx_ring_dma; void* tx_ring; void* rx_ring; int * tx_bufs; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct device*,int,void**,int ) ;
 int FUNC_1 (struct device*,int,void*,void*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct rhine_private* FUNC_3 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct net_device* VAR_6)
{
 struct rhine_private *VAR_7 = FUNC_3(VAR_6);
 struct device *VAR_8 = VAR_6->dev.parent;
 void *VAR_9;
 dma_addr_t VAR_10;

 VAR_9 = FUNC_0(VAR_8,
      VAR_3 * sizeof(struct rx_desc) +
      VAR_4 * sizeof(struct tx_desc),
      &VAR_10,
      VAR_1);
 if (!VAR_9) {
  FUNC_2(VAR_6, "Could not allocate DMA memory\n");
  return -VAR_0;
 }
 if (VAR_7->quirks & VAR_5) {
  VAR_7->tx_bufs = FUNC_0(VAR_8,
       VAR_2 * VAR_4,
       &VAR_7->tx_bufs_dma,
       VAR_1);
  if (VAR_7->tx_bufs == ((void*)0)) {
   FUNC_1(VAR_8,
       VAR_3 * sizeof(struct rx_desc) +
       VAR_4 * sizeof(struct tx_desc),
       VAR_9, VAR_10);
   return -VAR_0;
  }
 }

 VAR_7->rx_ring = VAR_9;
 VAR_7->tx_ring = VAR_9 + VAR_3 * sizeof(struct rx_desc);
 VAR_7->rx_ring_dma = VAR_10;
 VAR_7->tx_ring_dma = VAR_10 + VAR_3 * sizeof(struct rx_desc);

 return 0;
}
