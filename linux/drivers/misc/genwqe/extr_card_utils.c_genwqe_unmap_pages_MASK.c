
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct genwqe_dev {struct pci_dev* pci_dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct genwqe_dev *VAR_2, dma_addr_t *VAR_3,
         int VAR_4)
{
 int VAR_5;
 struct pci_dev *VAR_6 = VAR_2->pci_dev;

 for (VAR_5 = 0; (VAR_5 < VAR_4) && (VAR_3[VAR_5] != 0x0); VAR_5++) {
  FUNC_0(VAR_6, VAR_3[VAR_5],
          VAR_0, VAR_1);
  VAR_3[VAR_5] = 0x0;
 }
}
