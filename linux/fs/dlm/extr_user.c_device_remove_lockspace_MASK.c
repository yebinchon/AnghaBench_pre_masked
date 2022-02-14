
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lspace_params {int flags; int minor; } ;
struct dlm_ls {int * ls_local_handle; } ;
typedef int dlm_lockspace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct dlm_ls* FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct dlm_lspace_params *VAR_4)
{
 dlm_lockspace_t *VAR_5;
 struct dlm_ls *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 VAR_6 = FUNC_1(VAR_4->minor);
 if (!VAR_6)
  return -VAR_2;

 if (VAR_4->flags & VAR_1)
  VAR_8 = 2;

 VAR_5 = VAR_6->ls_local_handle;
 FUNC_2(VAR_6);
 VAR_7 = FUNC_3(VAR_5, VAR_8);
 if (VAR_7 > 0)
  VAR_7 = 0;
 return VAR_7;
}
