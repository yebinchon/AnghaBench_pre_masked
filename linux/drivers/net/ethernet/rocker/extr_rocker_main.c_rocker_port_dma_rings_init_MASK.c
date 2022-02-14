
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int tx_ring; int rx_ring; int dev; int port_number; struct rocker* rocker; } ;
struct rocker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rocker*,int *,int ,int ) ;
 int FUNC_4 (struct rocker*,int *,int ) ;
 int FUNC_5 (struct rocker*,int ,int ,int *) ;
 int FUNC_6 (struct rocker*,int *) ;
 int FUNC_7 (struct rocker*,int *) ;
 int FUNC_8 (struct rocker_port*) ;

__attribute__((used)) static int FUNC_9(struct rocker_port *VAR_6)
{
 struct rocker *VAR_7 = VAR_6->rocker;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_7,
         FUNC_1(VAR_6->port_number),
         VAR_4,
         &VAR_6->tx_ring);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to create tx dma ring\n");
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_7, &VAR_6->tx_ring,
      VAR_1,
      VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to alloc tx dma ring buffers\n");
  goto err_dma_tx_ring_bufs_alloc;
 }

 VAR_8 = FUNC_5(VAR_7,
         FUNC_0(VAR_6->port_number),
         VAR_2,
         &VAR_6->rx_ring);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to create rx dma ring\n");
  goto err_dma_rx_ring_create;
 }

 VAR_8 = FUNC_3(VAR_7, &VAR_6->rx_ring,
      VAR_0,
      VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to alloc rx dma ring buffers\n");
  goto err_dma_rx_ring_bufs_alloc;
 }

 VAR_8 = FUNC_8(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to alloc rx dma ring skbs\n");
  goto err_dma_rx_ring_skbs_alloc;
 }
 FUNC_7(VAR_7, &VAR_6->rx_ring);

 return 0;

err_dma_rx_ring_skbs_alloc:
 FUNC_4(VAR_7, &VAR_6->rx_ring,
      VAR_0);
err_dma_rx_ring_bufs_alloc:
 FUNC_6(VAR_7, &VAR_6->rx_ring);
err_dma_rx_ring_create:
 FUNC_4(VAR_7, &VAR_6->tx_ring,
      VAR_1);
err_dma_tx_ring_bufs_alloc:
 FUNC_6(VAR_7, &VAR_6->tx_ring);
 return VAR_8;
}
