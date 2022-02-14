
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_vf {int vf_id; int vf_states; struct i40e_pf* pf; } ;
struct TYPE_3__ {int vf_base_id; } ;
struct TYPE_4__ {TYPE_1__ func_caps; } ;
struct i40e_pf {size_t lan_vsi; int * vsi; TYPE_2__ hw; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct i40e_vf*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct i40e_vf *VAR_4, u8 *VAR_5, u16 VAR_6)
{
 struct i40e_pf *VAR_7 = VAR_4->pf;
 int VAR_8 = VAR_4->vf_id + VAR_7->hw.func_caps.vf_base_id;
 i40e_status VAR_9 = 0;

 if (!FUNC_2(VAR_1, &VAR_4->vf_states) ||
     !FUNC_2(VAR_2, &VAR_4->vf_states)) {
  VAR_9 = VAR_0;
  goto error_param;
 }

 FUNC_0(VAR_7->vsi[VAR_7->lan_vsi], VAR_8,
         VAR_5, VAR_6);

error_param:

 return FUNC_1(VAR_4, VAR_3,
           VAR_9);
}
