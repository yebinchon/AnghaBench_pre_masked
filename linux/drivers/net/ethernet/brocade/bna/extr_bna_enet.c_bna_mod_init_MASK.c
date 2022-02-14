
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_res_info {int dummy; } ;
struct bna {int mod_flags; void* promisc_rid; void* default_mode_rid; int mcam_mod; int ucam_mod; int rx_mod; int tx_mod; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bna*,struct bna_res_info*) ;
 int FUNC_1 (int *,struct bna*,struct bna_res_info*) ;
 int FUNC_2 (int *,struct bna*,struct bna_res_info*) ;
 int FUNC_3 (int *,struct bna*,struct bna_res_info*) ;

void
FUNC_4(struct bna *VAR_2, struct bna_res_info *VAR_3)
{
 FUNC_2(&VAR_2->tx_mod, VAR_2, VAR_3);

 FUNC_1(&VAR_2->rx_mod, VAR_2, VAR_3);

 FUNC_3(&VAR_2->ucam_mod, VAR_2, VAR_3);

 FUNC_0(&VAR_2->mcam_mod, VAR_2, VAR_3);

 VAR_2->default_mode_rid = VAR_0;
 VAR_2->promisc_rid = VAR_0;

 VAR_2->mod_flags |= VAR_1;
}
