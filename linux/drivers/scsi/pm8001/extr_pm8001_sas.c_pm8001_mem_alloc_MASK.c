
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
typedef int dma_addr_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct pci_dev *VAR_1, void **VAR_2,
 dma_addr_t *VAR_3, u32 *VAR_4,
 u32 *VAR_5, u32 VAR_6, u32 VAR_7)
{
 caddr_t VAR_8;
 dma_addr_t VAR_9;
 u64 VAR_10;
 u64 VAR_11 = 0;
 if (VAR_7)
  VAR_11 = (dma_addr_t)VAR_7 - 1;
 VAR_8 = FUNC_0(&VAR_1->dev, VAR_6 + VAR_7,
         &VAR_9, VAR_0);
 if (!VAR_8) {
  FUNC_2("memory allocation error\n");
  return -1;
 }
 *VAR_3 = VAR_9;
 VAR_10 = (*VAR_3 + VAR_11) & ~VAR_11;
 *VAR_2 = (void *)VAR_8 + VAR_10 - *VAR_3;
 *VAR_4 = FUNC_3(VAR_10);
 *VAR_5 = FUNC_1(VAR_10);
 return 0;
}
