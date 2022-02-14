
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_ring {unsigned int count; unsigned long size; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct e1000_buffer* desc; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_buffer {int dummy; } ;
struct e1000_adapter {int netdev; } ;


 int FUNC_0 (struct e1000_ring*,struct e1000_buffer*,int) ;
 int FUNC_1 (struct e1000_buffer*,int ,unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct e1000_ring *VAR_0)
{
 struct e1000_adapter *VAR_1 = VAR_0->adapter;
 struct e1000_buffer *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++) {
  VAR_2 = &VAR_0->buffer_info[VAR_4];
  FUNC_0(VAR_0, VAR_2, 0);
 }

 FUNC_2(VAR_1->netdev);
 VAR_3 = sizeof(struct e1000_buffer) * VAR_0->count;
 FUNC_1(VAR_0->buffer_info, 0, VAR_3);

 FUNC_1(VAR_0->desc, 0, VAR_0->size);

 VAR_0->next_to_use = 0;
 VAR_0->next_to_clean = 0;
}
