
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct TYPE_2__ {int list; } ;
struct wilc {int txq_entries; int txq_event; int txq_add_to_head_cs; int txq_spinlock; TYPE_1__ txq_head; } ;
struct txq_entry_t {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct wilc_vif *VAR_0,
          struct txq_entry_t *VAR_1)
{
 unsigned long VAR_2;
 struct wilc *VAR_3 = VAR_0->wilc;

 FUNC_2(&VAR_3->txq_add_to_head_cs);

 FUNC_4(&VAR_3->txq_spinlock, VAR_2);

 FUNC_1(&VAR_1->list, &VAR_3->txq_head.list);
 VAR_3->txq_entries += 1;

 FUNC_5(&VAR_3->txq_spinlock, VAR_2);
 FUNC_3(&VAR_3->txq_add_to_head_cs);
 FUNC_0(&VAR_3->txq_event);
}
