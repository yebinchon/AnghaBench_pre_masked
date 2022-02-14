
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct virtchnl_rss_hena {int hena; } ;
struct i40e_vf {int vf_id; int vf_states; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_vf*,int ,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct i40e_vf *VAR_3, u8 *VAR_4)
{
 struct virtchnl_rss_hena *VAR_5 =
  (struct virtchnl_rss_hena *)VAR_4;
 struct i40e_pf *VAR_6 = VAR_3->pf;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 i40e_status VAR_8 = 0;

 if (!FUNC_3(VAR_1, &VAR_3->vf_states)) {
  VAR_8 = VAR_0;
  goto err;
 }
 FUNC_2(VAR_7, FUNC_0(0, VAR_3->vf_id), (u32)VAR_5->hena);
 FUNC_2(VAR_7, FUNC_0(1, VAR_3->vf_id),
     (u32)(VAR_5->hena >> 32));


err:
 return FUNC_1(VAR_3, VAR_2, VAR_8);
}
