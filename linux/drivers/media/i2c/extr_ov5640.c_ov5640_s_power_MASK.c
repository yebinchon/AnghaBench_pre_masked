
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int handler; } ;
struct ov5640_dev {int power_count; TYPE_1__ ctrls; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ov5640_dev*,int) ;
 struct ov5640_dev* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov5640_dev *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_1(&VAR_2->lock);





 if (VAR_2->power_count == !VAR_1) {
  VAR_3 = FUNC_3(VAR_2, !!VAR_1);
  if (VAR_3)
   goto out;
 }


 VAR_2->power_count += VAR_1 ? 1 : -1;
 FUNC_0(VAR_2->power_count < 0);
out:
 FUNC_2(&VAR_2->lock);

 if (VAR_1 && !VAR_3 && VAR_2->power_count == 1) {

  VAR_3 = FUNC_5(&VAR_2->ctrls.handler);
 }

 return VAR_3;
}
