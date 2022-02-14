
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int num_entries; } ;
struct bfi_enet_rx_vlan_req {int block_idx; int* bit_mask; TYPE_4__ mh; } ;
struct TYPE_6__ {struct bfi_enet_rx_vlan_req vlan_req; } ;
struct bna_rxf {scalar_t__ vlan_filter_status; int msgq_cmd; TYPE_3__* rx; int * vlan_filter_table; TYPE_1__ bfi_enet_cmd; } ;
struct TYPE_8__ {TYPE_2__* bna; int rid; } ;
struct TYPE_7__ {int msgq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bna_rxf *VAR_4, u8 VAR_5)
{
 struct bfi_enet_rx_vlan_req *VAR_6 = &VAR_4->bfi_enet_cmd.vlan_req;
 int VAR_7;
 int VAR_8;

 FUNC_2(VAR_6->mh, VAR_2,
  VAR_0, 0, VAR_4->rx->rid);
 VAR_6->mh.num_entries = FUNC_5(
  FUNC_3(sizeof(struct bfi_enet_rx_vlan_req)));
 VAR_6->block_idx = VAR_5;
 for (VAR_7 = 0; VAR_7 < (VAR_1 / 32); VAR_7++) {
  VAR_8 = (VAR_5 * (VAR_1 / 32)) + VAR_7;
  if (VAR_4->vlan_filter_status == VAR_3)
   VAR_6->bit_mask[VAR_7] =
    FUNC_4(VAR_4->vlan_filter_table[VAR_8]);
  else
   VAR_6->bit_mask[VAR_7] = 0xFFFFFFFF;
 }
 FUNC_1(&VAR_4->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_rx_vlan_req), &VAR_6->mh);
 FUNC_0(&VAR_4->rx->bna->msgq, &VAR_4->msgq_cmd);
}
