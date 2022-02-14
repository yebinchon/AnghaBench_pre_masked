
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ si_generation; } ;
struct nfs4_stid {int sc_lock; TYPE_1__ sc_stateid; } ;
typedef TYPE_1__ stateid_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(stateid_t *VAR_0, struct nfs4_stid *VAR_1)
{
 stateid_t *VAR_2 = &VAR_1->sc_stateid;

 FUNC_1(&VAR_1->sc_lock);
 if (FUNC_3(++VAR_2->si_generation == 0))
  VAR_2->si_generation = 1;
 FUNC_0(VAR_0, VAR_2, sizeof(*VAR_0));
 FUNC_2(&VAR_1->sc_lock);
}
