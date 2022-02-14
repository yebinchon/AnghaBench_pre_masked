
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int handler; } ;
struct ov2680_dev {TYPE_1__ ctrls; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ov2680_dev*) ;
 int FUNC_3 (struct ov2680_dev*) ;
 int FUNC_4 (struct ov2680_dev*) ;
 struct ov2680_dev* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov2680_dev *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);

 if (VAR_1)
  VAR_3 = FUNC_4(VAR_2);
 else
  VAR_3 = FUNC_3(VAR_2);

 FUNC_1(&VAR_2->lock);

 if (VAR_1 && VAR_3 == 0) {
  VAR_3 = FUNC_6(&VAR_2->ctrls.handler);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_2);
 }

 return VAR_3;
}
