
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct ak7375_device {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,char const*,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ak7375_device *VAR_2,
 u8 VAR_3, u16 VAR_4, u8 VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_1(&VAR_2->sd);
 u8 VAR_7[3];
 int VAR_8;

 if (VAR_5 != 1 && VAR_5 != 2)
  return -VAR_0;
 VAR_7[0] = VAR_3;
 VAR_7[VAR_5] = VAR_4 & 0xff;
 if (VAR_5 == 2)
  VAR_7[1] = (VAR_4 >> 8) & 0xff;
 VAR_8 = FUNC_0(VAR_6, (const char *)VAR_7, VAR_5 + 1);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 != VAR_5 + 1)
  return -VAR_1;

 return 0;
}
