
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {unsigned int frequency; scalar_t__ tuner; } ;
struct tef6862_state {unsigned int freq; } ;
struct i2c_client {int dummy; } ;
typedef int i2cmsg ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 struct tef6862_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8, const struct v4l2_frequency *VAR_9)
{
 struct tef6862_state *VAR_10 = FUNC_2(VAR_8);
 struct i2c_client *VAR_11 = FUNC_3(VAR_8);
 unsigned VAR_12 = VAR_9->frequency;
 u16 VAR_13;
 u8 VAR_14[3];
 int VAR_15;

 if (VAR_9->tuner != 0)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_12, VAR_6, VAR_5);
 VAR_13 = 1964 + ((VAR_12 - VAR_6) * 20) / VAR_2;
 VAR_14[0] = (VAR_3 << VAR_4) | VAR_7;
 VAR_14[1] = (VAR_13 >> 8) & 0xff;
 VAR_14[2] = VAR_13 & 0xff;

 VAR_15 = FUNC_1(VAR_11, VAR_14, sizeof(VAR_14));
 if (VAR_15 != sizeof(VAR_14))
  return VAR_15 < 0 ? VAR_15 : -VAR_1;

 VAR_10->freq = VAR_12;
 return 0;
}
