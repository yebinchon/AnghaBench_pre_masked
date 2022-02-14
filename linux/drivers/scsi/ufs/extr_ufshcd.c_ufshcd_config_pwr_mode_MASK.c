
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_pa_layer_attr {int member_0; } ;
struct ufs_hba {int dummy; } ;
typedef int final_params ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_pa_layer_attr*,struct ufs_pa_layer_attr*,int) ;
 int FUNC_1 (struct ufs_hba*,struct ufs_pa_layer_attr*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int ,struct ufs_pa_layer_attr*,struct ufs_pa_layer_attr*) ;

int FUNC_4(struct ufs_hba *VAR_1,
  struct ufs_pa_layer_attr *VAR_2)
{
 struct ufs_pa_layer_attr VAR_3 = { 0 };
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0,
     VAR_2, &VAR_3);

 if (VAR_4)
  FUNC_0(&VAR_3, VAR_2, sizeof(VAR_3));

 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (!VAR_4)
  FUNC_2(VAR_1);

 return VAR_4;
}
