
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct fm10k_tx_buffer {int dummy; } ;
struct fm10k_ring {size_t count; unsigned long size; struct fm10k_tx_buffer* desc; struct fm10k_tx_buffer* tx_buffer; } ;


 int FUNC_0 (struct fm10k_ring*,struct fm10k_tx_buffer*) ;
 int FUNC_1 (struct fm10k_tx_buffer*,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fm10k_ring*) ;

__attribute__((used)) static void FUNC_4(struct fm10k_ring *VAR_0)
{
 unsigned long VAR_1;
 u16 VAR_2;


 if (!VAR_0->tx_buffer)
  return;


 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  struct fm10k_tx_buffer *VAR_3 = &VAR_0->tx_buffer[VAR_2];

  FUNC_0(VAR_0, VAR_3);
 }


 FUNC_2(FUNC_3(VAR_0));

 VAR_1 = sizeof(struct fm10k_tx_buffer) * VAR_0->count;
 FUNC_1(VAR_0->tx_buffer, 0, VAR_1);


 FUNC_1(VAR_0->desc, 0, VAR_0->size);
}
