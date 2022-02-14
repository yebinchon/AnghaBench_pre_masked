
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
       enum rc_proto *VAR_3, u32 *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;


 VAR_5 = FUNC_0(VAR_2, &VAR_6, 1);
 if (VAR_5 != 1) {
  if (VAR_5 < 0)
   return VAR_5;
  return -VAR_0;
 }






 if (VAR_6 == 0xff)
  return 0;

 if (VAR_6 == 0xfe)

  return 1;

 *VAR_3 = VAR_1;
 *VAR_4 = VAR_6;
 return 1;
}
