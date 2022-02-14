
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; scalar_t__* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct et8ek8_sensor {scalar_t__* priv_mem; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ,int,int*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 struct et8ek8_sensor* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int,int) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_7)
{
 struct et8ek8_sensor *VAR_8 = FUNC_6(VAR_7);
 struct i2c_client *VAR_9 = FUNC_8(VAR_7);
 unsigned int VAR_10 = VAR_2;
 unsigned int VAR_11 = 0;
 u8 *VAR_12 = VAR_8->priv_mem;
 int VAR_13 = 0;


 do {
  u8 VAR_14[VAR_6];
  struct i2c_msg VAR_15;
  int VAR_16, VAR_17;
  int VAR_18;


  VAR_13 = FUNC_1(VAR_9, VAR_3, 0x0001,
         0xe0 | (VAR_11 >> 3));
  if (VAR_13 < 0)
   return VAR_13;


  for (VAR_17 = 0; VAR_17 < 1000; ++VAR_17) {
   u32 VAR_19;

   VAR_13 = FUNC_0(VAR_9, VAR_3,
         0x0003, &VAR_19);
   if (VAR_13 < 0)
    return VAR_13;
   if (!(VAR_19 & 0x08))
    break;
   FUNC_7(1000, 2000);
  }

  if (VAR_17 == 1000)
   return -VAR_0;


  VAR_18 = VAR_11 & 0x07;
  VAR_16 = VAR_10 + VAR_18 > 8 ? 8-VAR_18 : VAR_10;
  VAR_15.addr = VAR_9->addr;
  VAR_15.flags = 0;
  VAR_15.len = 2;
  VAR_15.buf = VAR_14;
  VAR_18 += VAR_5;
  VAR_14[0] = (u8)(VAR_18 >> 8);
  VAR_14[1] = (u8)(VAR_18 & 0xFF);

  VAR_13 = FUNC_2(VAR_9->adapter, &VAR_15, 1);
  if (VAR_13 < 0)
   return VAR_13;

  FUNC_3(VAR_1);
  VAR_15.addr = VAR_9->addr;
  VAR_15.len = VAR_16;
  VAR_15.flags = VAR_4;
  VAR_15.buf = VAR_14;
  FUNC_5(VAR_14, 0, sizeof(VAR_14));

  VAR_13 = FUNC_2(VAR_9->adapter, &VAR_15, 1);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = 0;
  FUNC_4(VAR_12, VAR_14, VAR_16);

  VAR_10 -= VAR_16;
  VAR_11 += VAR_16;
  VAR_12 += VAR_16;
 } while (VAR_10 > 0);

 return VAR_13;
}
