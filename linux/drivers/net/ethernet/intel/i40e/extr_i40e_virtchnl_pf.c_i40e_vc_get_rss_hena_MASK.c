
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_rss_hena {int hena; } ;
struct i40e_vf {int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {int dummy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (struct i40e_vf*,int ,int,int *,int) ;
 int FUNC_2 (struct virtchnl_rss_hena*) ;
 struct virtchnl_rss_hena* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_5, u8 *VAR_6)
{
 struct virtchnl_rss_hena *VAR_7 = ((void*)0);
 struct i40e_pf *VAR_8 = VAR_5->pf;
 i40e_status VAR_9 = 0;
 int VAR_10 = 0;

 if (!FUNC_4(VAR_3, &VAR_5->vf_states)) {
  VAR_9 = VAR_2;
  goto err;
 }
 VAR_10 = sizeof(struct virtchnl_rss_hena);

 VAR_7 = FUNC_3(VAR_10, VAR_0);
 if (!VAR_7) {
  VAR_9 = VAR_1;
  VAR_10 = 0;
  goto err;
 }
 VAR_7->hena = FUNC_0(VAR_8);
err:

 VAR_9 = FUNC_1(VAR_5, VAR_4,
     VAR_9, (u8 *)VAR_7, VAR_10);
 FUNC_2(VAR_7);
 return VAR_9;
}
