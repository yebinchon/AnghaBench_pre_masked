
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_vsi {TYPE_1__* back; } ;
struct TYPE_6__ {TYPE_2__* ring; } ;
struct i40e_q_vector {int arm_wb_state; int reg_idx; TYPE_3__ tx; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i40e_vsi *VAR_7,
      struct i40e_q_vector *VAR_8)
{
 u16 VAR_9 = VAR_8->tx.ring[0].flags;
 u32 VAR_10;

 if (!(VAR_9 & VAR_6))
  return;

 if (VAR_8->arm_wb_state)
  return;

 if (VAR_7->back->flags & VAR_0) {
  VAR_10 = VAR_5 |
        VAR_4;

  FUNC_1(&VAR_7->back->hw,
       FUNC_0(VAR_8->reg_idx),
       VAR_10);
 } else {
  VAR_10 = VAR_3 |
        VAR_2;

  FUNC_1(&VAR_7->back->hw, VAR_1, VAR_10);
 }
 VAR_8->arm_wb_state = 1;
}
