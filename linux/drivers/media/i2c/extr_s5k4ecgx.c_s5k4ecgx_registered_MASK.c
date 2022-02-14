
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k4ecgx {int lock; } ;


 int FUNC_0 (struct s5k4ecgx*) ;
 int FUNC_1 (struct s5k4ecgx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 struct s5k4ecgx* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0)
{
 int VAR_1;
 struct s5k4ecgx *VAR_2 = FUNC_5(VAR_0);

 FUNC_2(&VAR_2->lock);
 VAR_1 = FUNC_1(VAR_2);
 if (!VAR_1) {
  VAR_1 = FUNC_4(VAR_0);
  FUNC_0(VAR_2);
 }
 FUNC_3(&VAR_2->lock);

 return VAR_1;
}
