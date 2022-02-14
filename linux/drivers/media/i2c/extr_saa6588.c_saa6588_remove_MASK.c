
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa6588 {int work; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 struct saa6588* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct saa6588 *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_0(&VAR_2->work);

 return 0;
}
