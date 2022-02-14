
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct i40e_pf {void* max_bw; void* min_bw; int hw; } ;
typedef int i40e_status ;


 int FUNC_0 (int *,void**,void**,int*,int*) ;

i40e_status FUNC_1(struct i40e_pf *VAR_0)
{
 i40e_status VAR_1;
 bool VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 VAR_1 = FUNC_0(&VAR_0->hw, &VAR_4, &VAR_5,
        &VAR_2, &VAR_3);

 if (!VAR_1) {
  if (VAR_2)
   VAR_0->min_bw = VAR_5;
  if (VAR_3)
   VAR_0->max_bw = VAR_4;
 }

 return VAR_1;
}
