
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int flags; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int ) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_8,
    const struct v4l2_mbus_config *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;

 if (VAR_9->flags & VAR_6)
  VAR_11 = FUNC_0(VAR_10, VAR_4, VAR_1, 0);
 else
  VAR_11 = FUNC_0(VAR_10, VAR_4, 0, VAR_1);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->flags & VAR_5)
  VAR_11 = FUNC_0(VAR_10, VAR_3, VAR_0, 0);
 else
  VAR_11 = FUNC_0(VAR_10, VAR_3, 0, VAR_0);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->flags & VAR_7)
  VAR_11 = FUNC_0(VAR_10, VAR_4, VAR_2, 0);
 else
  VAR_11 = FUNC_0(VAR_10, VAR_4, 0, VAR_2);

 return VAR_11;
}
