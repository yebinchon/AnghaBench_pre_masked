
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 char VAR_8 ;
 int FUNC_1 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_2(VAR_9);
 unsigned char VAR_11[16];

 VAR_11[0] = VAR_4;
 VAR_11[1] = VAR_6 |
    VAR_3 |
    VAR_2;
 VAR_11[2] = 0x3b;
 if (VAR_8)
  VAR_11[2] |= VAR_5;
 VAR_11[3] = VAR_7 | (VAR_1 << 4);
 VAR_11[4] = VAR_0;
 VAR_11[5] = VAR_0;
 VAR_11[6] = VAR_0;
 VAR_11[7] = VAR_0;
 VAR_11[8] = VAR_8;
 if (9 != FUNC_0(VAR_10, VAR_11, 9)) {
  FUNC_1(VAR_9, "I/O error, trying tda7432_set\n");
  return -1;
 }

 return 0;
}
