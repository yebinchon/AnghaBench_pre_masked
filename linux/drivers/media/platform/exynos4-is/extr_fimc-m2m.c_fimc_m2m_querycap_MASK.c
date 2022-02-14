
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int dummy; } ;
struct fimc_dev {TYPE_1__* pdev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,struct v4l2_capability*) ;
 struct fimc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
         struct v4l2_capability *VAR_2)
{
 struct fimc_dev *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->pdev->dev, VAR_2);
 return 0;
}
