
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct IR_i2c {int c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_1, enum rc_proto *VAR_2,
      u32 *VAR_3, u8 *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = FUNC_1(VAR_1->c, 0x10);
 if (VAR_5 < 0) {
  FUNC_0("read error\n");
  return 0;
 }

 if (0 == (VAR_5 & 0x80))
  return 0;


 VAR_6 = FUNC_1(VAR_1->c, 0x00);
 if (VAR_6 < 0) {
  FUNC_0("read error\n");
  return 0;
 }

 FUNC_0("IR Key/Flags: (0x%02x/0x%02x)\n",
  VAR_6 & 0xff, VAR_5 & 0xff);

 *VAR_2 = VAR_0;
 *VAR_3 = VAR_6 & 0xff;
 *VAR_4 = 0;
 return 1;
}
