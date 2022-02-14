
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igbvf_ring {unsigned int count; unsigned long size; scalar_t__ tail; scalar_t__ head; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct igbvf_buffer* desc; struct igbvf_buffer* buffer_info; struct igbvf_adapter* adapter; } ;
struct igbvf_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct igbvf_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (struct igbvf_adapter*,struct igbvf_buffer*) ;
 int FUNC_1 (struct igbvf_buffer*,int ,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct igbvf_ring *VAR_0)
{
 struct igbvf_adapter *VAR_1 = VAR_0->adapter;
 struct igbvf_buffer *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 if (!VAR_0->buffer_info)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++) {
  VAR_2 = &VAR_0->buffer_info[VAR_4];
  FUNC_0(VAR_1, VAR_2);
 }

 VAR_3 = sizeof(struct igbvf_buffer) * VAR_0->count;
 FUNC_1(VAR_0->buffer_info, 0, VAR_3);


 FUNC_1(VAR_0->desc, 0, VAR_0->size);

 VAR_0->next_to_use = 0;
 VAR_0->next_to_clean = 0;

 FUNC_2(0, VAR_1->hw.hw_addr + VAR_0->head);
 FUNC_2(0, VAR_1->hw.hw_addr + VAR_0->tail);
}
