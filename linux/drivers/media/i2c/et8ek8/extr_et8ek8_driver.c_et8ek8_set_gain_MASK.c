
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct et8ek8_sensor {int subdev; } ;
struct et8ek8_gain {int analog; int digital; } ;
typedef size_t s32 ;


 int VAR_0 ;
 struct et8ek8_gain* VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct et8ek8_sensor *VAR_2, s32 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(&VAR_2->subdev);
 struct et8ek8_gain VAR_5;
 int VAR_6;

 VAR_5 = VAR_1[VAR_3];


 VAR_6 = FUNC_0(VAR_4, VAR_0,
    0x124a, VAR_5.analog >> 8);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_4, VAR_0,
    0x1249, VAR_5.analog & 0xff);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0,
    0x124d, VAR_5.digital >> 8);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_4, VAR_0,
    0x124c, VAR_5.digital & 0xff);

 return VAR_6;
}
