
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uli526x_board_info {int buf_pool_dma_ptr; int buf_pool_ptr; int pdev; int desc_pool_dma_ptr; int desc_pool_ptr; int ioaddr; } ;
struct tx_desc {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct uli526x_board_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);
 struct uli526x_board_info *VAR_5 = FUNC_1(VAR_4);

 FUNC_7(VAR_4);
 FUNC_5(VAR_3, VAR_5->ioaddr);
 FUNC_3(VAR_5->pdev, sizeof(struct tx_desc) *
    VAR_0 + 0x20, VAR_5->desc_pool_ptr,
     VAR_5->desc_pool_dma_ptr);
 FUNC_3(VAR_5->pdev, VAR_1 * VAR_2 + 4,
    VAR_5->buf_pool_ptr, VAR_5->buf_pool_dma_ptr);
 FUNC_6(VAR_3);
 FUNC_2(VAR_3);
 FUNC_0(VAR_4);
}
