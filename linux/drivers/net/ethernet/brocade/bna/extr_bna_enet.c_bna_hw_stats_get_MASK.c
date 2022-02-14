
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stats_get_busy; int ioc_ready; } ;
struct bna {int stats; int bnad; TYPE_1__ stats_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna*) ;
 int FUNC_1 (int ,int ,int *) ;

void
FUNC_2(struct bna *VAR_2)
{
 if (!VAR_2->stats_mod.ioc_ready) {
  FUNC_1(VAR_2->bnad, VAR_1, &VAR_2->stats);
  return;
 }
 if (VAR_2->stats_mod.stats_get_busy) {
  FUNC_1(VAR_2->bnad, VAR_0, &VAR_2->stats);
  return;
 }

 FUNC_0(VAR_2);
}
