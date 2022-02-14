
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_entries; } ;
struct bfi_enet_mcast_add_req {TYPE_4__ mh; int mac_addr; } ;
struct TYPE_8__ {struct bfi_enet_mcast_add_req mcast_add_req; } ;
struct bna_rxf {int msgq_cmd; TYPE_2__* rx; TYPE_3__ bfi_enet_cmd; } ;
struct bna_mac {int addr; } ;
struct TYPE_7__ {TYPE_1__* bna; int rid; } ;
struct TYPE_6__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bna_rxf *VAR_2, struct bna_mac *VAR_3)
{
 struct bfi_enet_mcast_add_req *VAR_4 =
  &VAR_2->bfi_enet_cmd.mcast_add_req;

 FUNC_2(VAR_4->mh, VAR_1, VAR_0,
  0, VAR_2->rx->rid);
 VAR_4->mh.num_entries = FUNC_5(
 FUNC_3(sizeof(struct bfi_enet_mcast_add_req)));
 FUNC_4(VAR_4->mac_addr, VAR_3->addr);
 FUNC_1(&VAR_2->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_mcast_add_req), &VAR_4->mh);
 FUNC_0(&VAR_2->rx->bna->msgq, &VAR_2->msgq_cmd);
}
