
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_dmaring {int tx; int nr_slots; int current_slot; struct b43_dma_ops* ops; } ;
struct b43_dma_ops {int (* get_current_rxslot ) (struct b43_dmaring*) ;int (* set_current_rxslot ) (struct b43_dmaring*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_dmaring*,int*) ;
 int FUNC_2 (struct b43_dmaring*,int) ;
 int FUNC_3 (struct b43_dmaring*) ;
 int FUNC_4 (struct b43_dmaring*,int) ;
 int FUNC_5 (struct b43_dmaring*,int) ;
 int FUNC_6 () ;

void FUNC_7(struct b43_dmaring *VAR_0)
{
 const struct b43_dma_ops *VAR_1 = VAR_0->ops;
 int VAR_2, VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_0->tx);
 VAR_3 = VAR_1->get_current_rxslot(VAR_0);
 FUNC_0(!(VAR_3 >= 0 && VAR_3 < VAR_0->nr_slots));

 VAR_2 = VAR_0->current_slot;
 for (; VAR_2 != VAR_3; VAR_2 = FUNC_2(VAR_0, VAR_2)) {
  FUNC_1(VAR_0, &VAR_2);
  FUNC_5(VAR_0, ++VAR_4);
 }
 FUNC_6();
 VAR_1->set_current_rxslot(VAR_0, VAR_2);
 VAR_0->current_slot = VAR_2;
}
