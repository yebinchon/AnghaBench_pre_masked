
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_ring {size_t count; int size; int netdev; scalar_t__ next_to_clean; scalar_t__ next_to_use; int * desc; int * tx_buf; } ;


 int FUNC_0 (struct ice_ring*,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ice_ring*) ;

void FUNC_4(struct ice_ring *VAR_0)
{
 u16 VAR_1;


 if (!VAR_0->tx_buf)
  return;


 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->tx_buf[VAR_1]);

 FUNC_1(VAR_0->tx_buf, 0, sizeof(*VAR_0->tx_buf) * VAR_0->count);


 FUNC_1(VAR_0->desc, 0, VAR_0->size);

 VAR_0->next_to_use = 0;
 VAR_0->next_to_clean = 0;

 if (!VAR_0->netdev)
  return;


 FUNC_2(FUNC_3(VAR_0));
}
