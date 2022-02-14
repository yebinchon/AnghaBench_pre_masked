
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct driver_data {TYPE_3__* controller; TYPE_2__* pdev; int clear_sr; } ;
struct TYPE_6__ {TYPE_1__* cur_msg; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*,int ) ;
 int FUNC_4 (struct driver_data*,int ,int) ;
 int FUNC_5 (struct driver_data*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_8(struct driver_data *VAR_4, const char* VAR_5)
{

 FUNC_7(VAR_4, VAR_4->clear_sr);
 FUNC_5(VAR_4);
 if (!FUNC_1(VAR_4))
  FUNC_4(VAR_4, VAR_3, 0);
 FUNC_2(VAR_4);
 FUNC_4(VAR_4, VAR_1,
    FUNC_3(VAR_4, VAR_1) & ~VAR_2);

 FUNC_0(&VAR_4->pdev->dev, "%s\n", VAR_5);

 VAR_4->controller->cur_msg->status = -VAR_0;
 FUNC_6(VAR_4->controller);
}
