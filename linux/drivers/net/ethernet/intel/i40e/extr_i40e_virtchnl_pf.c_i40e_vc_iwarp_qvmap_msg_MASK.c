
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_iwarp_qvlist_info {int dummy; } ;
struct i40e_vf {int vf_states; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i40e_vf*,struct virtchnl_iwarp_qvlist_info*) ;
 int FUNC_1 (struct i40e_vf*) ;
 int FUNC_2 (struct i40e_vf*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct i40e_vf *VAR_5, u8 *VAR_6, bool VAR_7)
{
 struct virtchnl_iwarp_qvlist_info *VAR_8 =
    (struct virtchnl_iwarp_qvlist_info *)VAR_6;
 i40e_status VAR_9 = 0;

 if (!FUNC_3(VAR_1, &VAR_5->vf_states) ||
     !FUNC_3(VAR_2, &VAR_5->vf_states)) {
  VAR_9 = VAR_0;
  goto error_param;
 }

 if (VAR_7) {
  if (FUNC_0(VAR_5, VAR_8))
   VAR_9 = VAR_0;
 } else {
  FUNC_1(VAR_5);
 }

error_param:

 return FUNC_2(VAR_5,
          VAR_7 ? VAR_3 :
          VAR_4,
          VAR_9);
}
