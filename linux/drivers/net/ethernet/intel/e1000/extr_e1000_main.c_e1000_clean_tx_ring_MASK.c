
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_tx_ring {unsigned int count; unsigned long size; int last_tx_tso; scalar_t__ tdt; scalar_t__ tdh; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct e1000_tx_buffer* desc; struct e1000_tx_buffer* buffer_info; } ;
struct e1000_tx_buffer {int dummy; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_adapter {int netdev; struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_adapter*,struct e1000_tx_buffer*) ;
 int FUNC_1 (struct e1000_tx_buffer*,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_0,
    struct e1000_tx_ring *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_0->hw;
 struct e1000_tx_buffer *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;



 for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++) {
  VAR_3 = &VAR_1->buffer_info[VAR_5];
  FUNC_0(VAR_0, VAR_3);
 }

 FUNC_2(VAR_0->netdev);
 VAR_4 = sizeof(struct e1000_tx_buffer) * VAR_1->count;
 FUNC_1(VAR_1->buffer_info, 0, VAR_4);



 FUNC_1(VAR_1->desc, 0, VAR_1->size);

 VAR_1->next_to_use = 0;
 VAR_1->next_to_clean = 0;
 VAR_1->last_tx_tso = 0;

 FUNC_3(0, VAR_2->hw_addr + VAR_1->tdh);
 FUNC_3(0, VAR_2->hw_addr + VAR_1->tdt);
}
