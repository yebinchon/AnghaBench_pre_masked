
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct plx_dma_desc {int dummy; } ;
struct pcidas64_private {int* ai_buffer_bus_addr; int* ao_buffer_bus_addr; int ai_dma_desc_bus_addr; int ao_dma_desc_bus_addr; int local1_iobase; int local0_iobase; TYPE_2__* ao_dma_desc; TYPE_1__* ai_dma_desc; void** ao_buffer; void** ai_buffer; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct pci_dev {int dev; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct TYPE_4__ {void* next; void* transfer_size; void* local_start_addr; void* pci_start_addr; } ;
struct TYPE_3__ {void* next; void* transfer_size; void* local_start_addr; void* pci_start_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pcidas64_board const*) ;
 scalar_t__ FUNC_1 (struct pcidas64_board const*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int *,int,int*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_10)
{
 const struct pcidas64_board *VAR_11 = VAR_10->board_ptr;
 struct pci_dev *VAR_12 = FUNC_2(VAR_10);
 struct pcidas64_private *VAR_13 = VAR_10->private;
 int VAR_14;


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11); VAR_14++) {
  VAR_13->ai_buffer[VAR_14] =
   FUNC_4(&VAR_12->dev, VAR_3,
        &VAR_13->ai_buffer_bus_addr[VAR_14],
        VAR_5);
  if (!VAR_13->ai_buffer[VAR_14])
   return -VAR_4;
 }
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  if (FUNC_1(VAR_11)) {
   VAR_13->ao_buffer[VAR_14] =
       FUNC_4(&VAR_12->dev,
            VAR_3,
            &VAR_13->ao_buffer_bus_addr[VAR_14],
            VAR_5);
   if (!VAR_13->ao_buffer[VAR_14])
    return -VAR_4;
  }
 }

 VAR_13->ai_dma_desc =
  FUNC_4(&VAR_12->dev, sizeof(struct plx_dma_desc) *
       FUNC_0(VAR_11),
       &VAR_13->ai_dma_desc_bus_addr, VAR_5);
 if (!VAR_13->ai_dma_desc)
  return -VAR_4;

 if (FUNC_1(VAR_11)) {
  VAR_13->ao_dma_desc =
   FUNC_4(&VAR_12->dev,
        sizeof(struct plx_dma_desc) *
        VAR_1,
        &VAR_13->ao_dma_desc_bus_addr,
        VAR_5);
  if (!VAR_13->ao_dma_desc)
   return -VAR_4;
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11); VAR_14++) {
  VAR_13->ai_dma_desc[VAR_14].pci_start_addr =
   FUNC_3(VAR_13->ai_buffer_bus_addr[VAR_14]);
  if (VAR_11->layout == VAR_6)
   VAR_13->ai_dma_desc[VAR_14].local_start_addr =
    FUNC_3(VAR_13->local1_iobase +
         VAR_0);
  else
   VAR_13->ai_dma_desc[VAR_14].local_start_addr =
    FUNC_3(VAR_13->local0_iobase +
         VAR_0);
  VAR_13->ai_dma_desc[VAR_14].transfer_size = FUNC_3(0);
  VAR_13->ai_dma_desc[VAR_14].next =
   FUNC_3((VAR_13->ai_dma_desc_bus_addr +
         ((VAR_14 + 1) % FUNC_0(VAR_11)) *
         sizeof(VAR_13->ai_dma_desc[0])) |
        VAR_7 | VAR_8 |
        VAR_9);
 }
 if (FUNC_1(VAR_11)) {
  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   VAR_13->ao_dma_desc[VAR_14].pci_start_addr =
    FUNC_3(VAR_13->ao_buffer_bus_addr[VAR_14]);
   VAR_13->ao_dma_desc[VAR_14].local_start_addr =
    FUNC_3(VAR_13->local0_iobase +
         VAR_2);
   VAR_13->ao_dma_desc[VAR_14].transfer_size = FUNC_3(0);
   VAR_13->ao_dma_desc[VAR_14].next =
    FUNC_3((VAR_13->ao_dma_desc_bus_addr +
          ((VAR_14 + 1) % (VAR_1)) *
          sizeof(VAR_13->ao_dma_desc[0])) |
         VAR_7 |
         VAR_8);
  }
 }
 return 0;
}
