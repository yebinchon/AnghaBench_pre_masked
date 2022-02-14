
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int lock; } ;


 int FUNC_0 (struct s5k6aa*) ;
 int FUNC_1 (struct s5k6aa*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct s5k6aa*) ;
 struct s5k6aa* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0)
{
 struct s5k6aa *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 FUNC_3(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_2(100);
  VAR_2 = FUNC_5(VAR_1);
  FUNC_0(VAR_1);
 }
 FUNC_4(&VAR_1->lock);

 return VAR_2;
}
