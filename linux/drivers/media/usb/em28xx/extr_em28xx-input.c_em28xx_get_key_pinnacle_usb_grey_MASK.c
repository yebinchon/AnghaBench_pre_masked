
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct i2c_client {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
         enum rc_proto *VAR_3,
         u32 *VAR_4)
{
 unsigned char VAR_5[3];



 if (FUNC_0(VAR_2, VAR_5, 3) != 3)
  return -VAR_0;

 if (VAR_5[0] != 0x00)
  return 0;

 *VAR_3 = VAR_1;
 *VAR_4 = VAR_5[2] & 0x3f;
 return 1;
}
