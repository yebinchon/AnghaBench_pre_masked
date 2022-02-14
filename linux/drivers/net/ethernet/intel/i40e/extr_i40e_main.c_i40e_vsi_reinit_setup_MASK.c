
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct i40e_vsi {int base_queue; int alloc_queue_pairs; scalar_t__ type; int netdev_registered; int seid; int * netdev; int idx; struct i40e_pf* back; } ;
struct TYPE_8__ {int perm_addr; } ;
struct TYPE_10__ {TYPE_3__ mac; } ;
struct i40e_pf {size_t lan_vsi; TYPE_5__ hw; TYPE_4__** vsi; int main_vsi_seid; TYPE_1__* pdev; int qp_pile; } ;
struct TYPE_7__ {scalar_t__ enabled_tc; } ;
struct TYPE_9__ {int seid; TYPE_2__ tc_config; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (TYPE_5__*,int ,int *) ;
 scalar_t__ FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (struct i40e_pf*,int ,int,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct i40e_vsi*,int ) ;
 int FUNC_8 (struct i40e_vsi*) ;
 int FUNC_9 (struct i40e_vsi*,int) ;
 int FUNC_10 (struct i40e_vsi*) ;
 int FUNC_11 (struct i40e_vsi*) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (struct i40e_vsi*,int) ;
 int FUNC_14 (struct i40e_vsi*) ;
 int FUNC_15 (struct i40e_vsi*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct i40e_vsi *FUNC_17(struct i40e_vsi *VAR_1)
{
 u16 VAR_2;
 struct i40e_pf *VAR_3;
 u8 VAR_4;
 int VAR_5;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = VAR_1->back;

 FUNC_6(VAR_3->qp_pile, VAR_1->base_queue, VAR_1->idx);
 FUNC_11(VAR_1);

 FUNC_13(VAR_1, 0);
 FUNC_8(VAR_1);
 VAR_5 = FUNC_9(VAR_1, 0);
 if (VAR_5)
  goto err_vsi;

 VAR_2 = VAR_1->alloc_queue_pairs *
       (FUNC_4(VAR_1) ? 2 : 1);

 VAR_5 = FUNC_5(VAR_3, VAR_3->qp_pile, VAR_2, VAR_1->idx);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->pdev->dev,
    "failed to get tracking for %d queues for VSI %d err %d\n",
    VAR_2, VAR_1->seid, VAR_5);
  goto err_vsi;
 }
 VAR_1->base_queue = VAR_5;




 VAR_4 = VAR_3->vsi[VAR_3->lan_vsi]->tc_config.enabled_tc;
 VAR_3->vsi[VAR_3->lan_vsi]->tc_config.enabled_tc = 0;
 VAR_3->vsi[VAR_3->lan_vsi]->seid = VAR_3->main_vsi_seid;
 FUNC_12(VAR_3->vsi[VAR_3->lan_vsi], VAR_4);
 if (VAR_1->type == VAR_0)
  FUNC_7(VAR_1, VAR_3->hw.mac.perm_addr);


 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  goto err_rings;


 FUNC_15(VAR_1);
 return VAR_1;

err_rings:
 FUNC_14(VAR_1);
 if (VAR_1->netdev_registered) {
  VAR_1->netdev_registered = 0;
  FUNC_16(VAR_1->netdev);
  FUNC_1(VAR_1->netdev);
  VAR_1->netdev = ((void*)0);
 }
 FUNC_3(&VAR_3->hw, VAR_1->seid, ((void*)0));
err_vsi:
 FUNC_10(VAR_1);
 return ((void*)0);
}
