
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_profile_info {scalar_t__ track_id; int name; int version; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct i40e_profile_info *VAR_1,
     struct i40e_profile_info *VAR_2)
{
 return VAR_1->track_id == VAR_2->track_id &&
  !FUNC_0(&VAR_1->version, &VAR_2->version, sizeof(VAR_1->version)) &&
  !FUNC_0(&VAR_1->name, &VAR_2->name, VAR_0);
}
