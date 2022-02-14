
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct TYPE_2__ {int list; } ;
struct wilc {int txq_entries; int txq_event; int txq_spinlock; TYPE_1__ txq_head; } ;
struct txq_entry_t {int list; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
          struct txq_entry_t *VAR_1)
{
 unsigned long VAR_2;
 struct wilc_vif *VAR_3 = FUNC_2(VAR_0);
 struct wilc *VAR_4 = VAR_3->wilc;

 FUNC_3(&VAR_4->txq_spinlock, VAR_2);

 FUNC_1(&VAR_1->list, &VAR_4->txq_head.list);
 VAR_4->txq_entries += 1;

 FUNC_4(&VAR_4->txq_spinlock, VAR_2);

 FUNC_0(&VAR_4->txq_event);
}
