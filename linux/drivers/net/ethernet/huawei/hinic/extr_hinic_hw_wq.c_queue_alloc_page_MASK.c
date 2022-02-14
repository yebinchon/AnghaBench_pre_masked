
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__* FUNC_1 (int *,size_t,scalar_t__*,int ) ;
 int FUNC_2 (int *,size_t,scalar_t__*,scalar_t__) ;
 void** FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct hinic_hwif *VAR_2, u64 **VAR_3, u64 *VAR_4,
       void ***VAR_5, size_t VAR_6)
{
 struct pci_dev *VAR_7 = VAR_2->pdev;
 dma_addr_t VAR_8;

 *VAR_3 = FUNC_1(&VAR_7->dev, VAR_6, &VAR_8,
        VAR_1);
 if (!*VAR_3) {
  FUNC_0(&VAR_7->dev, "Failed to allocate dma for wqs page\n");
  return -VAR_0;
 }

 *VAR_4 = (u64)VAR_8;


 *VAR_5 = FUNC_3(VAR_6);
 if (!*VAR_5)
  goto err_shadow_vaddr;

 return 0;

err_shadow_vaddr:
 FUNC_2(&VAR_7->dev, VAR_6, *VAR_3, VAR_8);
 return -VAR_0;
}
