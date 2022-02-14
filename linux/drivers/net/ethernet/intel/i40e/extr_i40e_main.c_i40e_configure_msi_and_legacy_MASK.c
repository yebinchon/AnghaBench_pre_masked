
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int alloc_queue_pairs; TYPE_3__** tx_rings; TYPE_1__** rx_rings; struct i40e_pf* back; struct i40e_q_vector** q_vectors; } ;
struct TYPE_8__ {int target_itr; int current_itr; void* next_update; } ;
struct TYPE_6__ {int target_itr; int current_itr; void* next_update; } ;
struct i40e_q_vector {TYPE_4__ tx; TYPE_2__ rx; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct TYPE_7__ {int itr_setting; } ;
struct TYPE_5__ {int itr_setting; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct i40e_pf*) ;
 scalar_t__ FUNC_5 (struct i40e_vsi*) ;
 int FUNC_6 (struct i40e_hw*) ;
 void* VAR_12 ;
 int FUNC_7 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct i40e_vsi *VAR_13)
{
 u32 VAR_14 = FUNC_5(VAR_13) ? VAR_13->alloc_queue_pairs : 0;
 struct i40e_q_vector *VAR_15 = VAR_13->q_vectors[0];
 struct i40e_pf *VAR_16 = VAR_13->back;
 struct i40e_hw *VAR_17 = &VAR_16->hw;
 u32 VAR_18;


 VAR_15->rx.next_update = VAR_12 + 1;
 VAR_15->rx.target_itr = FUNC_3(VAR_13->rx_rings[0]->itr_setting);
 FUNC_7(VAR_17, FUNC_0(VAR_10), VAR_15->rx.target_itr);
 VAR_15->rx.current_itr = VAR_15->rx.target_itr;
 VAR_15->tx.next_update = VAR_12 + 1;
 VAR_15->tx.target_itr = FUNC_3(VAR_13->tx_rings[0]->itr_setting);
 FUNC_7(VAR_17, FUNC_0(VAR_11), VAR_15->tx.target_itr);
 VAR_15->tx.current_itr = VAR_15->tx.target_itr;

 FUNC_4(VAR_16);


 FUNC_7(VAR_17, VAR_0, 0);


 VAR_18 = VAR_1 |
       (VAR_10 << VAR_2) |
       (VAR_14 << VAR_3)|
       (VAR_9 << VAR_7);

 FUNC_7(VAR_17, FUNC_1(0), VAR_18);

 if (FUNC_5(VAR_13)) {
  VAR_18 = VAR_4 |
        (VAR_11 << VAR_5)|
        (VAR_9
         << VAR_7);

  FUNC_7(VAR_17, FUNC_2(VAR_14), VAR_18);
 }

 VAR_18 = VAR_4 |
       (VAR_11 << VAR_5) |
       (VAR_8 << VAR_6);

 FUNC_7(VAR_17, FUNC_2(0), VAR_18);
 FUNC_6(VAR_17);
}
