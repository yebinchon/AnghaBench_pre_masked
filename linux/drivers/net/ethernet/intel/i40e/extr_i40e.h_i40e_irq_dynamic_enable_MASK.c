
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_vsi {scalar_t__ base_vector; struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct i40e_vsi *VAR_4, int VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_4->back;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;

 VAR_8 = VAR_2 |
       VAR_1 |
       (VAR_0 << VAR_3);
 FUNC_1(VAR_7, FUNC_0(VAR_5 + VAR_4->base_vector - 1), VAR_8);

}
