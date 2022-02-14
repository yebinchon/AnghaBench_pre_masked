
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct noon010_info {int streaming; int lock; scalar_t__ apply_new_cfg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 struct noon010_info* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct noon010_info *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);
 if (!VAR_2->streaming != !VAR_1) {
  VAR_3 = FUNC_2(VAR_0, 0, !VAR_1);
  if (!VAR_3)
   VAR_2->streaming = VAR_1;
 }
 if (!VAR_3 && VAR_1 && VAR_2->apply_new_cfg) {
  VAR_3 = FUNC_3(VAR_0);
  if (!VAR_3)
   VAR_2->apply_new_cfg = 0;
 }
 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
