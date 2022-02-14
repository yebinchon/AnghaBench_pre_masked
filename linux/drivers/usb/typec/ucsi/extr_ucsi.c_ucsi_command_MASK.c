
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucsi_control {int dummy; } ;
struct ucsi {int flags; int dev; int complete; TYPE_1__* ppm; } ;
struct TYPE_2__ {int (* cmd ) (TYPE_1__*,struct ucsi_control*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,struct ucsi_control*) ;
 int FUNC_5 (struct ucsi_control*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct ucsi *VAR_3, struct ucsi_control *VAR_4)
{
 int VAR_5;

 FUNC_5(VAR_4);

 FUNC_3(VAR_0, &VAR_3->flags);

 VAR_5 = VAR_3->ppm->cmd(VAR_3->ppm, VAR_4);
 if (VAR_5)
  goto err_clear_flag;

 if (!FUNC_6(&VAR_3->complete,
      FUNC_2(VAR_2))) {
  FUNC_1(VAR_3->dev, "PPM NOT RESPONDING\n");
  VAR_5 = -VAR_1;
 }

err_clear_flag:
 FUNC_0(VAR_0, &VAR_3->flags);

 return VAR_5;
}
