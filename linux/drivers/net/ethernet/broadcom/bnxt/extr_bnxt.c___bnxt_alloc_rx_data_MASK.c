
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;
struct bnxt {int rx_dma_offset; int rx_dir; int rx_buf_use_size; int rx_buf_size; struct pci_dev* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static inline u8 *FUNC_4(struct bnxt *VAR_1, dma_addr_t *VAR_2,
           gfp_t VAR_3)
{
 u8 *VAR_4;
 struct pci_dev *VAR_5 = VAR_1->pdev;

 VAR_4 = FUNC_3(VAR_1->rx_buf_size, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 *VAR_2 = FUNC_0(&VAR_5->dev, VAR_4 + VAR_1->rx_dma_offset,
     VAR_1->rx_buf_use_size, VAR_1->rx_dir,
     VAR_0);

 if (FUNC_1(&VAR_5->dev, *VAR_2)) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
 }
 return VAR_4;
}
