
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bna_txq {int dummy; } ;
struct bna_tx {int dummy; } ;
struct bna_rxq {int dummy; } ;
struct bna_rxp {int dummy; } ;
struct bna_rx {int dummy; } ;
struct TYPE_5__ {int num; int len; void* mem_type; } ;
struct TYPE_6__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; void* res_type; } ;
struct bna_mcam_handle {int dummy; } ;
struct bna_mac {int dummy; } ;
struct bna_attr {int num_txq; int num_rxp; int num_ucmac; int num_mcmac; } ;
struct TYPE_4__ {struct bna_attr attr; } ;
struct bna {TYPE_1__ ioceth; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;

void
FUNC_0(struct bna *VAR_10, struct bna_res_info *VAR_11)
{
 struct bna_attr *VAR_12 = &VAR_10->ioceth.attr;


 VAR_11[VAR_7].res_type = VAR_9;
 VAR_11[VAR_7].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_7].res_u.mem_info.num = 1;
 VAR_11[VAR_7].res_u.mem_info.len =
  VAR_12->num_txq * sizeof(struct bna_tx);


 VAR_11[VAR_6].res_type = VAR_9;
 VAR_11[VAR_6].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_6].res_u.mem_info.num = 1;
 VAR_11[VAR_6].res_u.mem_info.len =
  VAR_12->num_txq * sizeof(struct bna_txq);


 VAR_11[VAR_5].res_type = VAR_9;
 VAR_11[VAR_5].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_5].res_u.mem_info.num = 1;
 VAR_11[VAR_5].res_u.mem_info.len =
  VAR_12->num_rxp * sizeof(struct bna_rx);


 VAR_11[VAR_3].res_type = VAR_9;
 VAR_11[VAR_3].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_3].res_u.mem_info.num = 1;
 VAR_11[VAR_3].res_u.mem_info.len =
  VAR_12->num_rxp * sizeof(struct bna_rxp);


 VAR_11[VAR_4].res_type = VAR_9;
 VAR_11[VAR_4].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_4].res_u.mem_info.num = 1;
 VAR_11[VAR_4].res_u.mem_info.len =
  (VAR_12->num_rxp * 2) * sizeof(struct bna_rxq);


 VAR_11[VAR_8].res_type = VAR_9;
 VAR_11[VAR_8].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_8].res_u.mem_info.num = 1;
 VAR_11[VAR_8].res_u.mem_info.len =
  (VAR_12->num_ucmac * 2) * sizeof(struct bna_mac);


 VAR_11[VAR_2].res_type = VAR_9;
 VAR_11[VAR_2].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_2].res_u.mem_info.num = 1;
 VAR_11[VAR_2].res_u.mem_info.len =
  (VAR_12->num_mcmac * 2) * sizeof(struct bna_mac);


 VAR_11[VAR_1].res_type = VAR_9;
 VAR_11[VAR_1].res_u.mem_info.mem_type =
  VAR_0;
 VAR_11[VAR_1].res_u.mem_info.num = 1;
 VAR_11[VAR_1].res_u.mem_info.len =
  VAR_12->num_mcmac * sizeof(struct bna_mcam_handle);
}
