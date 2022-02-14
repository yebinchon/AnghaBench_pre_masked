
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct device {int dummy; } ;
struct csis_state {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct csis_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct csis_state *VAR_2 = FUNC_2(VAR_0);
 struct device *VAR_3 = &VAR_2->pdev->dev;

 if (VAR_1)
  return FUNC_0(VAR_3);

 return FUNC_1(VAR_3);
}
