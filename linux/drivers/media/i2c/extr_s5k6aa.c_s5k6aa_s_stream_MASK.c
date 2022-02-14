
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int streaming; int lock; scalar_t__ apply_crop; int preset; scalar_t__ apply_cfg; } ;


 int FUNC_0 (struct s5k6aa*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct s5k6aa*) ;
 int FUNC_4 (struct s5k6aa*,int ) ;
 struct s5k6aa* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct s5k6aa *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 FUNC_1(&VAR_2->lock);

 if (VAR_2->streaming == !VAR_1) {
  if (!VAR_3 && VAR_2->apply_cfg)
   VAR_3 = FUNC_4(VAR_2, VAR_2->preset);
  if (VAR_2->apply_crop)
   VAR_3 = FUNC_3(VAR_2);
  if (!VAR_3)
   VAR_3 = FUNC_0(VAR_2, !!VAR_1);
 }
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
