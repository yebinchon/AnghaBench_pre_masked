
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_devlink {struct qed_dev* cdev; } ;
struct qed_dev {int iwarp_cmt; } ;
struct TYPE_2__ {int vbool; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;


 struct qed_devlink* FUNC_0 (struct devlink*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_0, u32 VAR_1,
       struct devlink_param_gset_ctx *VAR_2)
{
 struct qed_devlink *VAR_3;
 struct qed_dev *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_3->cdev;
 VAR_4->iwarp_cmt = VAR_2->val.vbool;

 return 0;
}
