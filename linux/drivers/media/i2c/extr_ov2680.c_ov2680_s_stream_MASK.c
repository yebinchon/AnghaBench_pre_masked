
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov2680_dev {int is_streaming; int lock; scalar_t__ mode_pending_changes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ov2680_dev*) ;
 int FUNC_3 (struct ov2680_dev*) ;
 int FUNC_4 (struct ov2680_dev*) ;
 struct ov2680_dev* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov2680_dev *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);

 if (VAR_2->is_streaming == !!VAR_1)
  goto unlock;

 if (VAR_1 && VAR_2->mode_pending_changes) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 < 0)
   goto unlock;
 }

 if (VAR_1)
  VAR_3 = FUNC_4(VAR_2);
 else
  VAR_3 = FUNC_3(VAR_2);

 VAR_2->is_streaming = !!VAR_1;

unlock:
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
