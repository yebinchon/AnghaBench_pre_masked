
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macsec_tx_sa {int rcu; int refcnt; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct macsec_tx_sa *VAR_1)
{
 if (FUNC_1(&VAR_1->refcnt))
  FUNC_0(&VAR_1->rcu, VAR_0);
}
