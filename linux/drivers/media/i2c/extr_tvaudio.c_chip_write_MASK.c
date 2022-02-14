
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,int) ;
 int FUNC_5 (struct v4l2_subdev*,char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct CHIPSTATE *VAR_3, int VAR_4, int VAR_5)
{
 struct v4l2_subdev *VAR_6 = &VAR_3->sd;
 struct i2c_client *VAR_7 = FUNC_3(VAR_6);
 unsigned char VAR_8[2];
 int VAR_9;

 if (VAR_4 < 0) {
  FUNC_2(1, VAR_2, VAR_6, "chip_write: 0x%x\n", VAR_5);
  VAR_3->shadow.bytes[1] = VAR_5;
  VAR_8[0] = VAR_5;
  VAR_9 = FUNC_1(VAR_7, VAR_8, 1);
  if (VAR_9 != 1) {
   FUNC_5(VAR_6, "I/O error (write 0x%x)\n", VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
   return -VAR_1;
  }
 } else {
  if (VAR_4 + 1 >= FUNC_0(VAR_3->shadow.bytes)) {
   FUNC_4(VAR_6,
    "Tried to access a non-existent register: %d\n",
    VAR_4);
   return -VAR_0;
  }

  FUNC_2(1, VAR_2, VAR_6, "chip_write: reg%d=0x%x\n",
   VAR_4, VAR_5);
  VAR_3->shadow.bytes[VAR_4+1] = VAR_5;
  VAR_8[0] = VAR_4;
  VAR_8[1] = VAR_5;
  VAR_9 = FUNC_1(VAR_7, VAR_8, 2);
  if (VAR_9 != 2) {
   FUNC_5(VAR_6, "I/O error (write reg%d=0x%x)\n",
    VAR_4, VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
   return -VAR_1;
  }
 }
 return 0;
}
