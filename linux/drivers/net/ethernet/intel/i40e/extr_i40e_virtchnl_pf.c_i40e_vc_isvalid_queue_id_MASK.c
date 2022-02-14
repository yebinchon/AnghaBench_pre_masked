
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_vsi {scalar_t__ alloc_queue_pairs; } ;
struct i40e_vf {struct i40e_pf* pf; } ;
struct i40e_pf {int dummy; } ;


 struct i40e_vsi* FUNC_0 (struct i40e_pf*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct i40e_vf *VAR_0, u16 VAR_1,
         u16 VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_0->pf;
 struct i40e_vsi *VAR_4 = FUNC_0(VAR_3, VAR_1);

 return (VAR_4 && (VAR_2 < VAR_4->alloc_queue_pairs));
}
