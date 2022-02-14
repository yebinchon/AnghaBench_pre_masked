
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ml86v7667_priv {int std; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int ) ;
 struct ml86v7667_priv* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, v4l2_std_id VAR_6)
{
 struct ml86v7667_priv *VAR_7 = FUNC_1(VAR_5);
 struct i2c_client *VAR_8 = FUNC_2(&VAR_7->sd);
 int VAR_9;
 u8 VAR_10;


 VAR_10 = VAR_6 & VAR_4 ? VAR_1 : VAR_2;
 VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_0, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->std = VAR_6;

 return 0;
}
