
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rx_pause; int tx_pause; } ;
struct TYPE_7__ {int num_entries; } ;
struct bfi_enet_set_pause_req {TYPE_3__ mh; int rx_pause; int tx_pause; } ;
struct bna_enet {int msgq_cmd; TYPE_2__* bna; TYPE_1__ pause_config; struct bfi_enet_set_pause_req pause_req; } ;
struct TYPE_6__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bna_enet *VAR_2)
{
 struct bfi_enet_set_pause_req *VAR_3 = &VAR_2->pause_req;

 FUNC_2(VAR_3->mh, VAR_1,
  VAR_0, 0, 0);
 VAR_3->mh.num_entries = FUNC_4(
 FUNC_3(sizeof(struct bfi_enet_set_pause_req)));
 VAR_3->tx_pause = VAR_2->pause_config.tx_pause;
 VAR_3->rx_pause = VAR_2->pause_config.rx_pause;

 FUNC_1(&VAR_2->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_set_pause_req), &VAR_3->mh);
 FUNC_0(&VAR_2->bna->msgq, &VAR_2->msgq_cmd);
}
