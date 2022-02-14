
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct wilc {int rxq_cs; TYPE_1__ rxq_head; scalar_t__ quit; } ;
struct rxq_entry_t {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wilc *VAR_0, struct rxq_entry_t *VAR_1)
{
 if (VAR_0->quit)
  return;

 FUNC_1(&VAR_0->rxq_cs);
 FUNC_0(&VAR_1->list, &VAR_0->rxq_head.list);
 FUNC_2(&VAR_0->rxq_cs);
}
