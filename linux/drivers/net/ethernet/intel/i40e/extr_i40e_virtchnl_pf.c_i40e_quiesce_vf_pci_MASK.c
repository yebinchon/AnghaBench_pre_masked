
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {int vf_id; struct i40e_pf* pf; } ;
struct TYPE_2__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i40e_vf *VAR_6)
{
 struct i40e_pf *VAR_7 = VAR_6->pf;
 struct i40e_hw *VAR_8 = &VAR_7->hw;
 int VAR_9, VAR_10;
 u32 VAR_11;

 VAR_9 = VAR_6->vf_id + VAR_8->func_caps.vf_base_id;

 FUNC_2(VAR_8, VAR_1,
      VAR_4 | (VAR_9 << VAR_2));
 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  VAR_11 = FUNC_0(VAR_8, VAR_3);
  if ((VAR_11 & VAR_5) == 0)
   return 0;
  FUNC_1(1);
 }
 return -VAR_0;
}
