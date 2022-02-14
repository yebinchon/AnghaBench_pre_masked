
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna {int mod_flags; int * bnad; int ioceth; int enet; int ethport; int stats_mod; int tx_mod; int rx_mod; int ucam_mod; int mcam_mod; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct bna *VAR_1)
{
 if (VAR_1->mod_flags & VAR_0) {
  FUNC_3(&VAR_1->mcam_mod);
  FUNC_7(&VAR_1->ucam_mod);
  FUNC_4(&VAR_1->rx_mod);
  FUNC_6(&VAR_1->tx_mod);
  VAR_1->mod_flags &= ~VAR_0;
 }

 FUNC_5(&VAR_1->stats_mod);
 FUNC_1(&VAR_1->ethport);
 FUNC_0(&VAR_1->enet);

 FUNC_2(&VAR_1->ioceth);

 VAR_1->bnad = ((void*)0);
}
