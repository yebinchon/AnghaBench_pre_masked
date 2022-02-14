
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40e_vf {struct i40e_pf* pf; } ;
struct TYPE_3__ {scalar_t__ num_msix_vectors_vf; } ;
struct TYPE_4__ {TYPE_1__ func_caps; } ;
struct i40e_pf {TYPE_2__ hw; } ;



__attribute__((used)) static inline bool FUNC_0(struct i40e_vf *VAR_0, u32 VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_0->pf;

 return VAR_1 < VAR_2->hw.func_caps.num_msix_vectors_vf;
}
