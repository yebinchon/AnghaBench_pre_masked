
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * toeplitz_hash_key; int hash_mask; int hash_type; } ;
struct TYPE_13__ {int num_entries; } ;
struct TYPE_9__ {int * key; int mask; int type; } ;
struct bfi_enet_rss_cfg_req {TYPE_6__ mh; TYPE_2__ cfg; } ;
struct TYPE_8__ {struct bfi_enet_rss_cfg_req rss_req; } ;
struct bna_rxf {int msgq_cmd; TYPE_5__* rx; TYPE_3__ rss_cfg; TYPE_1__ bfi_enet_cmd; } ;
struct TYPE_12__ {TYPE_4__* bna; int rid; } ;
struct TYPE_11__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bna_rxf *VAR_3)
{
 struct bfi_enet_rss_cfg_req *VAR_4 = &VAR_3->bfi_enet_cmd.rss_req;
 int VAR_5;

 FUNC_2(VAR_4->mh, VAR_2,
  VAR_0, 0, VAR_3->rx->rid);
 VAR_4->mh.num_entries = FUNC_5(
  FUNC_3(sizeof(struct bfi_enet_rss_cfg_req)));
 VAR_4->cfg.type = VAR_3->rss_cfg.hash_type;
 VAR_4->cfg.mask = VAR_3->rss_cfg.hash_mask;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4->cfg.key[VAR_5] =
   FUNC_4(VAR_3->rss_cfg.toeplitz_hash_key[VAR_5]);
 FUNC_1(&VAR_3->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_rss_cfg_req), &VAR_4->mh);
 FUNC_0(&VAR_3->rx->bna->msgq, &VAR_3->msgq_cmd);
}
