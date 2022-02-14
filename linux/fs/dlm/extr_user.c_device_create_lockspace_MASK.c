
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_lspace_params {int name; int flags; } ;
struct TYPE_3__ {int minor; } ;
struct dlm_ls {TYPE_1__ ls_device; } ;
typedef int dlm_lockspace_t ;
struct TYPE_4__ {int ci_cluster_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 struct dlm_ls* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int *,int *,int **) ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct dlm_lspace_params *VAR_5)
{
 dlm_lockspace_t *VAR_6;
 struct dlm_ls *VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_3(VAR_5->name, VAR_4.ci_cluster_name, VAR_5->flags,
      VAR_1, ((void*)0), ((void*)0), ((void*)0),
      &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_7, VAR_5->name);
 FUNC_4(VAR_7);

 if (VAR_8)
  FUNC_5(VAR_6, 0);
 else
  VAR_8 = VAR_7->ls_device.minor;

 return VAR_8;
}
