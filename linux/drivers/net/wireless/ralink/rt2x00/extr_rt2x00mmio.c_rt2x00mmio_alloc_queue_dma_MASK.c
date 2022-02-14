
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int dev; } ;
struct queue_entry_priv_mmio {scalar_t__ desc_dma; void* desc; } ;
struct data_queue {int limit; int desc_size; TYPE_1__* entries; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct queue_entry_priv_mmio* priv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_1(struct rt2x00_dev *VAR_2,
          struct data_queue *VAR_3)
{
 struct queue_entry_priv_mmio *VAR_4;
 void *VAR_5;
 dma_addr_t VAR_6;
 unsigned int VAR_7;




 VAR_5 = FUNC_0(VAR_2->dev,
      VAR_3->limit * VAR_3->desc_size, &VAR_6,
      VAR_1);
 if (!VAR_5)
  return -VAR_0;




 for (VAR_7 = 0; VAR_7 < VAR_3->limit; VAR_7++) {
  VAR_4 = VAR_3->entries[VAR_7].priv_data;
  VAR_4->desc = VAR_5 + VAR_7 * VAR_3->desc_size;
  VAR_4->desc_dma = VAR_6 + VAR_7 * VAR_3->desc_size;
 }

 return 0;
}
