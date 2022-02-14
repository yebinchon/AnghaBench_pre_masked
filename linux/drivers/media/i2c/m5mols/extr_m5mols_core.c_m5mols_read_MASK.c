
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {scalar_t__ isp_ready; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int*,int) ;
 struct m5mols_info* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct v4l2_subdev*,char*,int,int,int,int) ;
 struct i2c_client* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_5, u32 VAR_6, u32 VAR_7, u32 *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_7(VAR_5);
 struct m5mols_info *VAR_10 = FUNC_4(VAR_5);
 u8 VAR_11[VAR_4 + 1];
 u8 VAR_12 = FUNC_0(VAR_7);
 u8 VAR_13 = FUNC_1(VAR_7);
 struct i2c_msg VAR_14[2];
 u8 VAR_15[5];
 int VAR_16;

 if (!VAR_9->adapter)
  return -VAR_1;

 VAR_14[0].addr = VAR_9->addr;
 VAR_14[0].flags = 0;
 VAR_14[0].len = 5;
 VAR_14[0].buf = VAR_15;
 VAR_15[0] = 5;
 VAR_15[1] = VAR_3;
 VAR_15[2] = VAR_12;
 VAR_15[3] = VAR_13;
 VAR_15[4] = VAR_6;

 VAR_14[1].addr = VAR_9->addr;
 VAR_14[1].flags = VAR_2;
 VAR_14[1].len = VAR_6 + 1;
 VAR_14[1].buf = VAR_11;


 FUNC_5(200, 300);

 VAR_16 = FUNC_2(VAR_9->adapter, VAR_14, 2);

 if (VAR_16 == 2) {
  *VAR_8 = FUNC_3(&VAR_11[1], VAR_6);
  return 0;
 }

 if (VAR_10->isp_ready)
  FUNC_6(VAR_5, "read failed: size:%d cat:%02x cmd:%02x. %d\n",
    VAR_6, VAR_12, VAR_13, VAR_16);

 return VAR_16 < 0 ? VAR_16 : -VAR_0;
}
