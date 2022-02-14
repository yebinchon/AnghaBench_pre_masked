
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int state; TYPE_2__* back; } ;
struct TYPE_3__ {scalar_t__ target_itr; scalar_t__ current_itr; } ;
struct i40e_q_vector {int reg_idx; void* itr_countdown; TYPE_1__ rx; TYPE_1__ tx; } ;
struct i40e_hw {int dummy; } ;
struct TYPE_4__ {int flags; struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct i40e_q_vector*,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct i40e_vsi *VAR_6,
       struct i40e_q_vector *VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_6->back->hw;
 u32 VAR_9;


 if (!(VAR_6->back->flags & VAR_0)) {
  FUNC_2(VAR_6->back);
  return;
 }


 FUNC_3(VAR_7, &VAR_7->tx);
 FUNC_3(VAR_7, &VAR_7->rx);
 if (VAR_7->rx.target_itr < VAR_7->rx.current_itr) {

  VAR_9 = FUNC_1(VAR_2,
        VAR_7->rx.target_itr);
  VAR_7->rx.current_itr = VAR_7->rx.target_itr;
  VAR_7->itr_countdown = VAR_4;
 } else if ((VAR_7->tx.target_itr < VAR_7->tx.current_itr) ||
     ((VAR_7->rx.target_itr - VAR_7->rx.current_itr) <
      (VAR_7->tx.target_itr - VAR_7->tx.current_itr))) {



  VAR_9 = FUNC_1(VAR_3,
        VAR_7->tx.target_itr);
  VAR_7->tx.current_itr = VAR_7->tx.target_itr;
  VAR_7->itr_countdown = VAR_4;
 } else if (VAR_7->rx.current_itr != VAR_7->rx.target_itr) {

  VAR_9 = FUNC_1(VAR_2,
        VAR_7->rx.target_itr);
  VAR_7->rx.current_itr = VAR_7->rx.target_itr;
  VAR_7->itr_countdown = VAR_4;
 } else {

  VAR_9 = FUNC_1(VAR_1, 0);
  if (VAR_7->itr_countdown)
   VAR_7->itr_countdown--;
 }

 if (!FUNC_4(VAR_5, VAR_6->state))
  FUNC_5(VAR_8, FUNC_0(VAR_7->reg_idx), VAR_9);
}
