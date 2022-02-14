
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgb_desc_ring {unsigned int count; unsigned long size; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct ixgb_buffer* desc; struct ixgb_buffer* buffer_info; } ;
struct ixgb_buffer {int dummy; } ;
struct ixgb_adapter {int hw; struct ixgb_desc_ring tx_ring; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgb_adapter*,struct ixgb_buffer*) ;
 int FUNC_2 (struct ixgb_buffer*,int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct ixgb_adapter *VAR_2)
{
 struct ixgb_desc_ring *VAR_3 = &VAR_2->tx_ring;
 struct ixgb_buffer *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_4 = &VAR_3->buffer_info[VAR_6];
  FUNC_1(VAR_2, VAR_4);
 }

 VAR_5 = sizeof(struct ixgb_buffer) * VAR_3->count;
 FUNC_2(VAR_3->buffer_info, 0, VAR_5);



 FUNC_2(VAR_3->desc, 0, VAR_3->size);

 VAR_3->next_to_use = 0;
 VAR_3->next_to_clean = 0;

 FUNC_0(&VAR_2->hw, VAR_0, 0);
 FUNC_0(&VAR_2->hw, VAR_1, 0);
}
