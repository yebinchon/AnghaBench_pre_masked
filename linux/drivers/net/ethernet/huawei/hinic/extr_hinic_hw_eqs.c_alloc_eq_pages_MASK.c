
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_eq {int num_pages; scalar_t__ type; int * dma_addr; int * virt_addr; int page_size; int wrapped; struct hinic_hwif* hwif; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_eq*,int) ;
 int FUNC_1 (struct hinic_eq*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct hinic_eq*,int ) ;
 int FUNC_4 (struct hinic_eq*,int ) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int *,size_t,int ) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (struct hinic_hwif*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct hinic_eq *VAR_5)
{
 struct hinic_hwif *VAR_6 = VAR_5->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 u32 VAR_8, VAR_9, VAR_10;
 size_t VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = VAR_5->num_pages * sizeof(*VAR_5->dma_addr);
 VAR_5->dma_addr = FUNC_6(&VAR_7->dev, VAR_11, VAR_1);
 if (!VAR_5->dma_addr)
  return -VAR_0;

 VAR_11 = VAR_5->num_pages * sizeof(*VAR_5->virt_addr);
 VAR_5->virt_addr = FUNC_6(&VAR_7->dev, VAR_11, VAR_1);
 if (!VAR_5->virt_addr) {
  VAR_12 = -VAR_0;
  goto err_virt_addr_alloc;
 }

 for (VAR_13 = 0; VAR_13 < VAR_5->num_pages; VAR_13++) {
  VAR_5->virt_addr[VAR_13] = FUNC_7(&VAR_7->dev,
             VAR_5->page_size,
             &VAR_5->dma_addr[VAR_13],
             VAR_1);
  if (!VAR_5->virt_addr[VAR_13]) {
   VAR_12 = -VAR_0;
   goto err_dma_alloc;
  }

  VAR_9 = FUNC_0(VAR_5, VAR_13);
  VAR_10 = FUNC_11(VAR_5->dma_addr[VAR_13]);

  FUNC_9(VAR_6, VAR_9, VAR_10);

  VAR_9 = FUNC_1(VAR_5, VAR_13);
  VAR_10 = FUNC_10(VAR_5->dma_addr[VAR_13]);

  FUNC_9(VAR_6, VAR_9, VAR_10);
 }

 VAR_8 = FUNC_2(VAR_5->wrapped, VAR_4);

 if (VAR_5->type == VAR_2)
  FUNC_3(VAR_5, VAR_8);
 else if (VAR_5->type == VAR_3)
  FUNC_4(VAR_5, VAR_8);

 return 0;

err_dma_alloc:
 while (--VAR_13 >= 0)
  FUNC_8(&VAR_7->dev, VAR_5->page_size,
      VAR_5->virt_addr[VAR_13],
      VAR_5->dma_addr[VAR_13]);

 FUNC_5(&VAR_7->dev, VAR_5->virt_addr);

err_virt_addr_alloc:
 FUNC_5(&VAR_7->dev, VAR_5->dma_addr);
 return VAR_12;
}
