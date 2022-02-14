
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwrm_nvm_get_variable_input {int member_0; } ;
struct TYPE_2__ {int vbool; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnxt* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct bnxt*,struct hwrm_nvm_get_variable_input*,int ,int,int) ;
 int FUNC_2 (struct bnxt*,int ,struct hwrm_nvm_get_variable_input*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_2, u32 VAR_3,
     struct devlink_param_gset_ctx *VAR_4)
{
 struct hwrm_nvm_get_variable_input VAR_5 = {0};
 struct bnxt *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 FUNC_1(VAR_6, &VAR_5, VAR_1, -1, -1);
 VAR_7 = FUNC_2(VAR_6, VAR_3, &VAR_5, sizeof(VAR_5), &VAR_4->val);
 if (!VAR_7)
  if (VAR_3 == VAR_0)
   VAR_4->val.vbool = !VAR_4->val.vbool;

 return VAR_7;
}
