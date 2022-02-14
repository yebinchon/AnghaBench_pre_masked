
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int num_txq_per_tx; int num_tx; int cfg_flags; int num_rxp_per_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct bnad *VAR_3, int VAR_4, int VAR_5)
{
 VAR_3->num_txq_per_tx = 1;
 if ((VAR_4 >= (VAR_3->num_tx * VAR_3->num_txq_per_tx) +
      VAR_2 + VAR_1) &&
     (VAR_3->cfg_flags & VAR_0)) {
  VAR_3->num_rxp_per_rx = VAR_4 -
   (VAR_3->num_tx * VAR_3->num_txq_per_tx) -
   VAR_1;
 } else
  VAR_3->num_rxp_per_rx = 1;
}
