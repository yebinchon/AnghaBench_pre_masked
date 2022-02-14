
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct IR_i2c {unsigned int old; int c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 unsigned int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (struct IR_i2c*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct IR_i2c *VAR_2, enum rc_proto *VAR_3,
       u32 *VAR_4, u8 *VAR_5, int VAR_6,
       int VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned char VAR_10[4];
 unsigned int VAR_11 = 0,VAR_12 = 0,VAR_13 = 0;


 VAR_9 = FUNC_1(VAR_2->c, VAR_10, 4);
 if (VAR_9 != 4) {
  FUNC_2(VAR_2, "read error\n");
  if (VAR_9 < 0)
   return VAR_9;
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++) {
  if (VAR_10[VAR_11] == VAR_7) {
   VAR_13=VAR_10[(VAR_11+VAR_6 + 1) % 4];
   VAR_12=VAR_10[(VAR_11+VAR_6) % 4];
  }
 }


 if (VAR_12 == 0)
  return 0;


 if (VAR_2->old == VAR_12)
  return 0;

 VAR_2->old = VAR_12;



 if (VAR_7 == 0xfe && (VAR_13 & 0x40))
  return 0;

 VAR_13 %= VAR_8;

 *VAR_3 = VAR_1;
 *VAR_4 = VAR_13;
 *VAR_5 = 0;

 FUNC_2(VAR_2, "Pinnacle PCTV key %02x\n", VAR_13);
 return 1;
}
