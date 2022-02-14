
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_handler; } ;
struct si476x_radio {int debugfs; int v4l2dev; TYPE_1__ videodev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct si476x_radio* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct si476x_radio *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->videodev.ctrl_handler);
 FUNC_4(&VAR_1->videodev);
 FUNC_3(&VAR_1->v4l2dev);
 FUNC_0(VAR_1->debugfs);

 return 0;
}
