
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {int vbool; } ;
struct qed_devlink {struct qed_dev* cdev; } ;
struct qed_dev {int iwarp_cmt; struct devlink* dl; TYPE_1__* pdev; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct devlink* FUNC_1 (int *,int) ;
 int FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int ,union devlink_param_value) ;
 int FUNC_4 (struct devlink*) ;
 int FUNC_5 (struct devlink*,int ,int ) ;
 struct qed_devlink* FUNC_6 (struct devlink*) ;
 int FUNC_7 (struct devlink*,int *) ;
 int FUNC_8 (struct devlink*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct qed_dev *VAR_4)
{
 union devlink_param_value VAR_5;
 struct qed_devlink *VAR_6;
 struct devlink *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(&VAR_3, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_7);

 VAR_4->dl = VAR_7;
 VAR_6->cdev = VAR_4;

 VAR_8 = FUNC_7(VAR_7, &VAR_4->pdev->dev);
 if (VAR_8)
  goto err_free;

 VAR_8 = FUNC_5(VAR_7, VAR_2,
         FUNC_0(VAR_2));
 if (VAR_8)
  goto err_unregister;

 VAR_5.vbool = 0;
 FUNC_3(VAR_7,
        VAR_1,
        VAR_5);

 FUNC_4(VAR_7);
 VAR_4->iwarp_cmt = 0;

 return 0;

err_unregister:
 FUNC_8(VAR_7);

err_free:
 VAR_4->dl = ((void*)0);
 FUNC_2(VAR_7);

 return VAR_8;
}
