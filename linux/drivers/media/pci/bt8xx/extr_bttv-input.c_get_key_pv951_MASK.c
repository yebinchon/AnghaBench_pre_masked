
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned char u32 ;
struct IR_i2c {int c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_2, enum rc_proto *VAR_3,
    u32 *VAR_4, u8 *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7;


 VAR_6 = FUNC_1(VAR_2->c, &VAR_7, 1);
 if (VAR_6 != 1) {
  FUNC_0("read error\n");
  if (VAR_6 < 0)
   return VAR_6;
  return -VAR_0;
 }


 if (VAR_7==0xaa)
  return 0;
 FUNC_0("key %02x\n", VAR_7);
 *VAR_3 = VAR_1;
 *VAR_4 = VAR_7;
 *VAR_5 = 0;
 return 1;
}
