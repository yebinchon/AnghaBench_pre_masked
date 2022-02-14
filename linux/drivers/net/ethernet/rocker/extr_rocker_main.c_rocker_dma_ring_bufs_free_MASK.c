
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; struct rocker_desc* desc; struct rocker_desc_info* desc_info; } ;
struct rocker_desc_info {int data; int data_size; } ;
struct rocker_desc {scalar_t__ buf_size; scalar_t__ buf_addr; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct rocker_desc_info const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(const struct rocker *VAR_1,
          const struct rocker_dma_ring_info *VAR_2,
          int VAR_3)
{
 struct pci_dev *VAR_4 = VAR_1->pdev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->size; VAR_5++) {
  const struct rocker_desc_info *VAR_6 = &VAR_2->desc_info[VAR_5];
  struct rocker_desc *VAR_7 = &VAR_2->desc[VAR_5];

  VAR_7->buf_addr = 0;
  VAR_7->buf_size = 0;
  FUNC_2(VAR_4, FUNC_0(VAR_6, VAR_0),
     VAR_6->data_size, VAR_3);
  FUNC_1(VAR_6->data);
 }
}
