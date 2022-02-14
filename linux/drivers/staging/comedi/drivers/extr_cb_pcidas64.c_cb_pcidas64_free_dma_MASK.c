
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plx_dma_desc {int dummy; } ;
struct pcidas64_private {int ao_dma_desc_bus_addr; scalar_t__ ao_dma_desc; int ai_dma_desc_bus_addr; scalar_t__ ai_dma_desc; int * ao_buffer_bus_addr; scalar_t__* ao_buffer; int * ai_buffer_bus_addr; scalar_t__* ai_buffer; } ;
struct pcidas64_board {int dummy; } ;
struct pci_dev {int dev; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcidas64_board const*) ;
 struct pci_dev* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_2->board_ptr;
 struct pci_dev *VAR_4 = FUNC_1(VAR_2);
 struct pcidas64_private *VAR_5 = VAR_2->private;
 int VAR_6;

 if (!VAR_5)
  return;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_5->ai_buffer[VAR_6])
   FUNC_2(&VAR_4->dev,
       VAR_1,
       VAR_5->ai_buffer[VAR_6],
       VAR_5->ai_buffer_bus_addr[VAR_6]);
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->ao_buffer[VAR_6])
   FUNC_2(&VAR_4->dev,
       VAR_1,
       VAR_5->ao_buffer[VAR_6],
       VAR_5->ao_buffer_bus_addr[VAR_6]);
 }

 if (VAR_5->ai_dma_desc)
  FUNC_2(&VAR_4->dev,
      sizeof(struct plx_dma_desc) *
      FUNC_0(VAR_3),
      VAR_5->ai_dma_desc,
      VAR_5->ai_dma_desc_bus_addr);
 if (VAR_5->ao_dma_desc)
  FUNC_2(&VAR_4->dev,
      sizeof(struct plx_dma_desc) *
      VAR_0,
      VAR_5->ao_dma_desc,
      VAR_5->ao_dma_desc_bus_addr);
}
