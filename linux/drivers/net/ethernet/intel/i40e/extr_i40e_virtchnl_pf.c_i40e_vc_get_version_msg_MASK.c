
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_version_info {int minor; int member_1; int member_0; } ;
struct i40e_vf {struct virtchnl_version_info vf_ver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct virtchnl_version_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_vf*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct i40e_vf *VAR_5, u8 *VAR_6)
{
 struct virtchnl_version_info VAR_7 = {
  VAR_2, VAR_3
 };

 VAR_5->vf_ver = *(struct virtchnl_version_info *)VAR_6;

 if (FUNC_0(&VAR_5->vf_ver))
  VAR_7.minor = VAR_4;
 return FUNC_1(VAR_5, VAR_1,
          VAR_0, (u8 *)&VAR_7,
          sizeof(struct virtchnl_version_info));
}
