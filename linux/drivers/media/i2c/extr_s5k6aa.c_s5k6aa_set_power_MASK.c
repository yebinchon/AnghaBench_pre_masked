
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct s5k6aa {int power; int lock; } ;


 int FUNC_0 (struct s5k6aa*) ;
 int FUNC_1 (struct s5k6aa*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 struct s5k6aa* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct s5k6aa *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->power == !VAR_1) {
  if (VAR_1) {
   VAR_3 = FUNC_1(VAR_2);
   if (!VAR_3)
    VAR_3 = FUNC_4(VAR_0);
  } else {
   VAR_3 = FUNC_0(VAR_2);
  }

  if (!VAR_3)
   VAR_2->power += VAR_1 ? 1 : -1;
 }

 FUNC_3(&VAR_2->lock);

 if (!VAR_1 || VAR_3 || VAR_2->power != 1)
  return VAR_3;

 return FUNC_6(VAR_0->ctrl_handler);
}
