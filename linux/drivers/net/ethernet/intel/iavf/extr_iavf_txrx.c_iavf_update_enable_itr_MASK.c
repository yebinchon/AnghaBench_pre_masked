
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iavf_vsi {int state; TYPE_1__* back; } ;
struct TYPE_4__ {scalar_t__ target_itr; scalar_t__ current_itr; } ;
struct iavf_q_vector {int reg_idx; void* itr_countdown; TYPE_2__ rx; TYPE_2__ tx; } ;
struct iavf_hw {int dummy; } ;
struct TYPE_3__ {struct iavf_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct iavf_q_vector*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct iavf_vsi *VAR_5,
       struct iavf_q_vector *VAR_6)
{
 struct iavf_hw *VAR_7 = &VAR_5->back->hw;
 u32 VAR_8;


 FUNC_2(VAR_6, &VAR_6->tx);
 FUNC_2(VAR_6, &VAR_6->rx);
 if (VAR_6->rx.target_itr < VAR_6->rx.current_itr) {

  VAR_8 = FUNC_1(VAR_1,
        VAR_6->rx.target_itr);
  VAR_6->rx.current_itr = VAR_6->rx.target_itr;
  VAR_6->itr_countdown = VAR_3;
 } else if ((VAR_6->tx.target_itr < VAR_6->tx.current_itr) ||
     ((VAR_6->rx.target_itr - VAR_6->rx.current_itr) <
      (VAR_6->tx.target_itr - VAR_6->tx.current_itr))) {



  VAR_8 = FUNC_1(VAR_2,
        VAR_6->tx.target_itr);
  VAR_6->tx.current_itr = VAR_6->tx.target_itr;
  VAR_6->itr_countdown = VAR_3;
 } else if (VAR_6->rx.current_itr != VAR_6->rx.target_itr) {

  VAR_8 = FUNC_1(VAR_1,
        VAR_6->rx.target_itr);
  VAR_6->rx.current_itr = VAR_6->rx.target_itr;
  VAR_6->itr_countdown = VAR_3;
 } else {

  VAR_8 = FUNC_1(VAR_0, 0);
  if (VAR_6->itr_countdown)
   VAR_6->itr_countdown--;
 }

 if (!FUNC_3(VAR_4, VAR_5->state))
  FUNC_4(VAR_7, FUNC_0(VAR_6->reg_idx), VAR_8);
}
