
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_vsi {scalar_t__ vf_id; } ;
struct i40e_vf {scalar_t__ vf_id; struct i40e_pf* pf; } ;
struct i40e_pf {int dummy; } ;


 struct i40e_vsi* FUNC_0 (struct i40e_pf*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct i40e_vf *VAR_0, u16 VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_0->pf;
 struct i40e_vsi *VAR_3 = FUNC_0(VAR_2, VAR_1);

 return (VAR_3 && (VAR_3->vf_id == VAR_0->vf_id));
}
