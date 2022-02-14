
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker {int cmd_ring; int event_ring; int cmd_ring_lock; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rocker*) ;
 int FUNC_2 (struct rocker*) ;
 int FUNC_3 (struct rocker*,int *,int ,int ) ;
 int FUNC_4 (struct rocker*,int *,int ) ;
 int FUNC_5 (struct rocker*,int ,int ,int *) ;
 int FUNC_6 (struct rocker*,int *) ;
 int FUNC_7 (struct rocker*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rocker *VAR_7)
{
 const struct pci_dev *VAR_8 = VAR_7->pdev;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_7, VAR_3,
         VAR_4,
         &VAR_7->cmd_ring);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "failed to create command dma ring\n");
  return VAR_9;
 }

 FUNC_8(&VAR_7->cmd_ring_lock);

 VAR_9 = FUNC_3(VAR_7, &VAR_7->cmd_ring,
      VAR_1, VAR_0);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "failed to alloc command dma ring buffers\n");
  goto err_dma_cmd_ring_bufs_alloc;
 }

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "failed to alloc command dma ring waits\n");
  goto err_dma_cmd_ring_waits_alloc;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_5,
         VAR_6,
         &VAR_7->event_ring);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "failed to create event dma ring\n");
  goto err_dma_event_ring_create;
 }

 VAR_9 = FUNC_3(VAR_7, &VAR_7->event_ring,
      VAR_2, VAR_0);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "failed to alloc event dma ring buffers\n");
  goto err_dma_event_ring_bufs_alloc;
 }
 FUNC_7(VAR_7, &VAR_7->event_ring);
 return 0;

err_dma_event_ring_bufs_alloc:
 FUNC_6(VAR_7, &VAR_7->event_ring);
err_dma_event_ring_create:
 FUNC_4(VAR_7, &VAR_7->cmd_ring,
      VAR_1);
err_dma_cmd_ring_waits_alloc:
 FUNC_2(VAR_7);
err_dma_cmd_ring_bufs_alloc:
 FUNC_6(VAR_7, &VAR_7->cmd_ring);
 return VAR_9;
}
