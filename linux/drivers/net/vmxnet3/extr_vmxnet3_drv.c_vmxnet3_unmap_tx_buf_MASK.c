
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_tx_buf_info {scalar_t__ map_type; int len; int dma_addr; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct vmxnet3_tx_buf_info *VAR_4,
       struct pci_dev *VAR_5)
{
 if (VAR_4->map_type == VAR_3)
  FUNC_2(&VAR_5->dev, VAR_4->dma_addr, VAR_4->len,
     VAR_0);
 else if (VAR_4->map_type == VAR_2)
  FUNC_1(&VAR_5->dev, VAR_4->dma_addr, VAR_4->len,
          VAR_0);
 else
  FUNC_0(VAR_4->map_type != VAR_1);

 VAR_4->map_type = VAR_1;
}
