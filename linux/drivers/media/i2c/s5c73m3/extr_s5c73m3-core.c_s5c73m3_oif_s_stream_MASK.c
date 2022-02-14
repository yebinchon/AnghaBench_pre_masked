
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {int lock; } ;


 int FUNC_0 (struct s5c73m3*,struct v4l2_subdev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct s5c73m3 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
