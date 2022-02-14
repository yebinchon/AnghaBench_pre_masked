
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9m032 {int streaming; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mt9m032* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct mt9m032*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct mt9m032 *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_2->streaming = VAR_1;
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
