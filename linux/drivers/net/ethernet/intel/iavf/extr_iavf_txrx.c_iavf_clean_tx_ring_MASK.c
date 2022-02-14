
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iavf_tx_buffer {int dummy; } ;
struct iavf_ring {size_t count; unsigned long size; int netdev; scalar_t__ next_to_clean; scalar_t__ next_to_use; int * desc; int * tx_bi; } ;


 int FUNC_0 (struct iavf_ring*,int *) ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iavf_ring*) ;

void FUNC_4(struct iavf_ring *VAR_0)
{
 unsigned long VAR_1;
 u16 VAR_2;


 if (!VAR_0->tx_bi)
  return;


 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
  FUNC_0(VAR_0, &VAR_0->tx_bi[VAR_2]);

 VAR_1 = sizeof(struct iavf_tx_buffer) * VAR_0->count;
 FUNC_1(VAR_0->tx_bi, 0, VAR_1);


 FUNC_1(VAR_0->desc, 0, VAR_0->size);

 VAR_0->next_to_use = 0;
 VAR_0->next_to_clean = 0;

 if (!VAR_0->netdev)
  return;


 FUNC_2(FUNC_3(VAR_0));
}
