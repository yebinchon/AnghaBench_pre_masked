
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct mt9m001_reg {int member_1; int member_0; } ;
struct TYPE_2__ {scalar_t__ height; int width; int top; int left; } ;
struct mt9m001 {scalar_t__ y_skip_top; TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct mt9m001_reg const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct i2c_client*,struct mt9m001_reg const*,int ) ;
 struct mt9m001* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_3(VAR_8);
 struct mt9m001 *VAR_10 = FUNC_2(VAR_9);
 const struct mt9m001_reg VAR_11[] = {

  { VAR_3, VAR_1 },
  { VAR_5, VAR_2 },




  { VAR_0, VAR_10->rect.left },
  { VAR_4, VAR_10->rect.top },
  { VAR_7, VAR_10->rect.width - 1 },
  { VAR_6,
   VAR_10->rect.height + VAR_10->y_skip_top - 1 },
 };

 return FUNC_1(VAR_9, VAR_11, FUNC_0(VAR_11));
}
