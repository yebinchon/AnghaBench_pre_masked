
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2,
      enum rc_proto *VAR_3, u32 *VAR_4)
{
 unsigned char VAR_5[2];
 int VAR_6;


 VAR_6 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_5));

 if (VAR_6 != 2)
  return -VAR_0;


 if (VAR_5[1] == 0xff)
  return 0;
 *VAR_3 = VAR_1;
 *VAR_4 = (FUNC_0(VAR_5[1]) & 0x1f) << 8 | FUNC_0(VAR_5[0]) >> 2;
 return 1;
}
