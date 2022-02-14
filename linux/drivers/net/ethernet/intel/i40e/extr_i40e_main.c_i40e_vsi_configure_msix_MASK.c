
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_vsi {int base_queue; int base_vector; int num_q_vectors; int alloc_queue_pairs; int int_rate_limit; TYPE_3__** tx_rings; TYPE_1__** rx_rings; struct i40e_q_vector** q_vectors; struct i40e_pf* back; } ;
struct TYPE_8__ {int target_itr; int current_itr; void* next_update; } ;
struct TYPE_6__ {int target_itr; int current_itr; void* next_update; } ;
struct i40e_q_vector {int num_ringpairs; TYPE_4__ tx; TYPE_2__ rx; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct TYPE_7__ {int itr_setting; } ;
struct TYPE_5__ {int itr_setting; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_hw*) ;
 int FUNC_8 (int ) ;
 void* VAR_15 ;
 int FUNC_9 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct i40e_vsi *VAR_16)
{
 bool VAR_17 = FUNC_6(VAR_16);
 struct i40e_pf *VAR_18 = VAR_16->back;
 struct i40e_hw *VAR_19 = &VAR_18->hw;
 u16 VAR_20;
 int VAR_21, VAR_22;
 u32 VAR_23;





 VAR_23 = VAR_16->base_queue;
 VAR_20 = VAR_16->base_vector;
 for (VAR_21 = 0; VAR_21 < VAR_16->num_q_vectors; VAR_21++, VAR_20++) {
  struct i40e_q_vector *VAR_24 = VAR_16->q_vectors[VAR_21];

  VAR_24->rx.next_update = VAR_15 + 1;
  VAR_24->rx.target_itr =
   FUNC_5(VAR_16->rx_rings[VAR_21]->itr_setting);
  FUNC_9(VAR_19, FUNC_0(VAR_13, VAR_20 - 1),
       VAR_24->rx.target_itr);
  VAR_24->rx.current_itr = VAR_24->rx.target_itr;

  VAR_24->tx.next_update = VAR_15 + 1;
  VAR_24->tx.target_itr =
   FUNC_5(VAR_16->tx_rings[VAR_21]->itr_setting);
  FUNC_9(VAR_19, FUNC_0(VAR_14, VAR_20 - 1),
       VAR_24->tx.target_itr);
  VAR_24->tx.current_itr = VAR_24->tx.target_itr;

  FUNC_9(VAR_19, FUNC_2(VAR_20 - 1),
       FUNC_8(VAR_16->int_rate_limit));


  FUNC_9(VAR_19, FUNC_1(VAR_20 - 1), VAR_23);
  for (VAR_22 = 0; VAR_22 < VAR_24->num_ringpairs; VAR_22++) {
   u32 VAR_25 = VAR_17 ? VAR_23 + VAR_16->alloc_queue_pairs : VAR_23;
   u32 VAR_26;

   VAR_26 = VAR_0 |
         (VAR_13 << VAR_1) |
         (VAR_20 << VAR_2) |
         (VAR_25 << VAR_3) |
         (VAR_12 <<
          VAR_4);

   FUNC_9(VAR_19, FUNC_3(VAR_23), VAR_26);

   if (VAR_17) {
    VAR_26 = VAR_5 |
          (VAR_14 << VAR_6) |
          (VAR_20 << VAR_7) |
          (VAR_23 << VAR_8) |
          (VAR_12 <<
           VAR_9);

    FUNC_9(VAR_19, FUNC_4(VAR_25), VAR_26);
   }

   VAR_26 = VAR_5 |
         (VAR_14 << VAR_6) |
         (VAR_20 << VAR_7) |
         ((VAR_23 + 1) << VAR_8) |
         (VAR_11 <<
          VAR_9);


   if (VAR_22 == (VAR_24->num_ringpairs - 1))
    VAR_26 |= (VAR_10 <<
     VAR_8);

   FUNC_9(VAR_19, FUNC_4(VAR_23), VAR_26);
   VAR_23++;
  }
 }

 FUNC_7(VAR_19);
}
