
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct et8ek8_sensor {int subdev; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct et8ek8_sensor *VAR_1, s32 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(&VAR_1->subdev);
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = 0;
 VAR_7 = 0x00;
 VAR_8 = 0xF0;

 if (VAR_2) {

  if (VAR_2 < 5) {
   VAR_4 = 1;
   VAR_5 = 1;
   VAR_6 = VAR_2 + 3;
  } else {
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = VAR_2 - 4 + 3;
  }

  VAR_7 = 0x01;
  VAR_8 = 0xE0;
 }

 VAR_9 = FUNC_0(VAR_3, VAR_0, 0x111B,
        VAR_6 << 4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_0, 0x1121,
        VAR_4 << 7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_0, 0x1124,
        VAR_5 << 7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_0, 0x112C, VAR_7);
 if (VAR_9)
  return VAR_9;

 return FUNC_0(VAR_3, VAR_0, 0x1420, VAR_8);
}
