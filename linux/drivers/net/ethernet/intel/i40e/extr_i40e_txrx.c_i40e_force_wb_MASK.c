
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {TYPE_1__* back; } ;
struct i40e_q_vector {int reg_idx; } ;
struct TYPE_2__ {int flags; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct i40e_vsi *VAR_10, struct i40e_q_vector *VAR_11)
{
 if (VAR_10->back->flags & VAR_0) {
  u32 VAR_12 = VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_9;


  FUNC_1(&VAR_10->back->hw,
       FUNC_0(VAR_11->reg_idx), VAR_12);
 } else {
  u32 VAR_13 = VAR_2 |
     VAR_3 |
     VAR_4 |
     VAR_5;


  FUNC_1(&VAR_10->back->hw, VAR_1, VAR_13);
 }
}
