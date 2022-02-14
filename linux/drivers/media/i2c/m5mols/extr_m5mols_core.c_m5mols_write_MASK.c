
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {scalar_t__ isp_ready; } ;
struct i2c_msg {int* buf; scalar_t__ len; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int FUNC_4 (int*,int) ;
 struct m5mols_info* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct v4l2_subdev*,char*,...) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

int FUNC_9(struct v4l2_subdev *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_8(VAR_5);
 struct m5mols_info *VAR_9 = FUNC_5(VAR_5);
 u8 VAR_10[VAR_4 + 4];
 u8 VAR_11 = FUNC_0(VAR_6);
 u8 VAR_12 = FUNC_1(VAR_6);
 u8 VAR_13 = FUNC_2(VAR_6);
 u32 *VAR_14 = (u32 *)&VAR_10[4];
 struct i2c_msg VAR_15[1];
 int VAR_16;

 if (!VAR_8->adapter)
  return -VAR_2;

 if (VAR_13 != 1 && VAR_13 != 2 && VAR_13 != 4) {
  FUNC_7(VAR_5, "Wrong data size\n");
  return -VAR_0;
 }

 VAR_15->addr = VAR_8->addr;
 VAR_15->flags = 0;
 VAR_15->len = (u16)VAR_13 + 4;
 VAR_15->buf = VAR_10;
 VAR_10[0] = VAR_13 + 4;
 VAR_10[1] = VAR_3;
 VAR_10[2] = VAR_11;
 VAR_10[3] = VAR_12;

 *VAR_14 = FUNC_4((u8 *)&VAR_7, VAR_13);


 FUNC_6(200, 300);

 VAR_16 = FUNC_3(VAR_8->adapter, VAR_15, 1);
 if (VAR_16 == 1)
  return 0;

 if (VAR_9->isp_ready)
  FUNC_7(VAR_5, "write failed: cat:%02x cmd:%02x ret:%d\n",
    VAR_11, VAR_12, VAR_16);

 return VAR_16 < 0 ? VAR_16 : -VAR_1;
}
