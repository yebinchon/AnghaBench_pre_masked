
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned char u32 ;
struct IR_i2c {int c; } ;
typedef int keybuf ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_1, enum rc_proto *VAR_2,
      u32 *VAR_3, u8 *VAR_4)
{
 unsigned char VAR_5[4];

 VAR_5[0] = 0x00;
 FUNC_1(VAR_1->c, VAR_5, 1);

 if (FUNC_0(VAR_1->c, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {
  return 0;
 }


 if (VAR_5[2] == 0xff)
  return 0;


 VAR_5[2] &= 0x7f;
 VAR_5[3] |= 0x80;

 *VAR_2 = VAR_0;
 *VAR_3 = VAR_5[3] | VAR_5[2] << 8 | VAR_5[1] << 16 |VAR_5[0] << 24;
 *VAR_4 = 0;
 return 1;
}
