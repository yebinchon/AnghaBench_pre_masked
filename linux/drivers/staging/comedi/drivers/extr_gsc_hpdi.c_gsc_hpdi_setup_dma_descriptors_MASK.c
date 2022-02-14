
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct hpdi_private {unsigned int dma_desc_phys_addr; unsigned int* dio_buffer_phys_addr; unsigned int num_dma_descriptors; unsigned int block_size; TYPE_1__* dma_desc; scalar_t__* dio_buffer; scalar_t__* desc_dio_buffer; } ;
struct comedi_device {struct hpdi_private* private; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {void* next; void* transfer_size; void* local_start_addr; void* pci_start_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_8,
       unsigned int VAR_9)
{
 struct hpdi_private *VAR_10 = VAR_8->private;
 dma_addr_t VAR_11 = VAR_10->dma_desc_phys_addr;
 u32 VAR_12 = VAR_5 | VAR_6 |
   VAR_7;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;

 if (VAR_9 > VAR_0)
  VAR_9 = VAR_0;
 VAR_9 -= VAR_9 % sizeof(u32);
 if (VAR_9 == 0)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_4 && VAR_14 < VAR_3; VAR_15++) {
  VAR_10->dma_desc[VAR_15].pci_start_addr =
      FUNC_0(VAR_10->dio_buffer_phys_addr[VAR_14] + VAR_13);
  VAR_10->dma_desc[VAR_15].local_start_addr = FUNC_0(VAR_2);
  VAR_10->dma_desc[VAR_15].transfer_size = FUNC_0(VAR_9);
  VAR_10->dma_desc[VAR_15].next = FUNC_0((VAR_11 +
   (VAR_15 + 1) * sizeof(VAR_10->dma_desc[0])) | VAR_12);

  VAR_10->desc_dio_buffer[VAR_15] = VAR_10->dio_buffer[VAR_14] +
           (VAR_13 / sizeof(u32));

  VAR_13 += VAR_9;
  if (VAR_9 + VAR_13 > VAR_0) {
   VAR_13 = 0;
   VAR_14++;
  }
 }
 VAR_10->num_dma_descriptors = VAR_15;

 VAR_10->dma_desc[VAR_15 - 1].next = FUNC_0(VAR_11 | VAR_12);

 VAR_10->block_size = VAR_9;

 return VAR_9;
}
