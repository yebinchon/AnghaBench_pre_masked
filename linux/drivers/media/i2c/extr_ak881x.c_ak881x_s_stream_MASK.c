
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ak881x {TYPE_1__* pdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct ak881x* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_3);
 struct ak881x *VAR_6 = FUNC_3(VAR_5);

 if (VAR_4) {
  u8 VAR_7;


  if (VAR_6->pdata->flags & VAR_0)
   VAR_7 = 3;
  else
   VAR_7 = 4;

  FUNC_2(VAR_5, VAR_1, VAR_7);
  FUNC_0(&VAR_5->dev, "chip status 0x%x\n",
   FUNC_1(VAR_5, VAR_2));
 } else {

  FUNC_2(VAR_5, VAR_1, 0);
  FUNC_0(&VAR_5->dev, "chip status 0x%x\n",
   FUNC_1(VAR_5, VAR_2));
 }

 return 0;
}
