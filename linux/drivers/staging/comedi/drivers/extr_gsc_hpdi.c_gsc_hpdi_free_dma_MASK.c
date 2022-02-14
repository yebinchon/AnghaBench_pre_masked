
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plx_dma_desc {int dummy; } ;
struct pci_dev {int dev; } ;
struct hpdi_private {int dma_desc_phys_addr; scalar_t__ dma_desc; int * dio_buffer_phys_addr; scalar_t__* dio_buffer; } ;
struct comedi_device {struct hpdi_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_0(VAR_3);
 struct hpdi_private *VAR_5 = VAR_3->private;
 int VAR_6;

 if (!VAR_5)
  return;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->dio_buffer[VAR_6])
   FUNC_1(&VAR_4->dev,
       VAR_0,
       VAR_5->dio_buffer[VAR_6],
       VAR_5->dio_buffer_phys_addr[VAR_6]);
 }

 if (VAR_5->dma_desc)
  FUNC_1(&VAR_4->dev,
      sizeof(struct plx_dma_desc) *
      VAR_2,
      VAR_5->dma_desc,
      VAR_5->dma_desc_phys_addr);
}
