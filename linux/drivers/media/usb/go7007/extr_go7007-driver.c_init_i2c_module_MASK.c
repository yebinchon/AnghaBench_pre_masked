
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct i2c_board_info {int flags; int addr; int type; } ;
struct i2c_adapter {int dummy; } ;
struct go_i2c {int type; scalar_t__ is_audio; scalar_t__ is_video; int flags; int addr; } ;
struct go7007 {struct v4l2_subdev* sd_audio; struct v4l2_subdev* sd_video; struct v4l2_device v4l2_dev; } ;
typedef int info ;


 int VAR_0 ;
 struct go7007* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct v4l2_subdev* FUNC_4 (struct v4l2_device*,struct i2c_adapter*,struct i2c_board_info*,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1, const struct go_i2c *const VAR_2)
{
 struct go7007 *VAR_3 = FUNC_0(VAR_1);
 struct v4l2_device *VAR_4 = &VAR_3->v4l2_dev;
 struct v4l2_subdev *VAR_5;
 struct i2c_board_info VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.type, VAR_2->type, sizeof(VAR_6.type));
 VAR_6.addr = VAR_2->addr;
 VAR_6.flags = VAR_2->flags;

 VAR_5 = FUNC_4(VAR_4, VAR_1, &VAR_6, ((void*)0));
 if (VAR_5) {
  if (VAR_2->is_video)
   VAR_3->sd_video = VAR_5;
  if (VAR_2->is_audio)
   VAR_3->sd_audio = VAR_5;
  return 0;
 }

 FUNC_2("go7007: probing for module i2c:%s failed\n", VAR_2->type);
 return -VAR_0;
}
