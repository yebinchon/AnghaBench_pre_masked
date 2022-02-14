
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_q_vector {int reg_idx; } ;
struct ice_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ice_hw*,int ,int) ;

void FUNC_2(struct ice_hw *VAR_4, struct ice_q_vector *VAR_5)
{
 FUNC_1(VAR_4, FUNC_0(VAR_5->reg_idx),
      (VAR_3 << VAR_1) |
      VAR_2 |
      VAR_0);
}
