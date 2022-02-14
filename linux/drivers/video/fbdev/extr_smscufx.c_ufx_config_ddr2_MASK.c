
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ufx_data*,int,int *) ;
 int FUNC_4 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ufx_data *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 u32 VAR_4;

 VAR_2 = FUNC_4(VAR_1, 0x0004, 0x001F0F77);
 FUNC_1(VAR_2, "error writing 0x0004");

 VAR_2 = FUNC_4(VAR_1, 0x0008, 0xFFF00000);
 FUNC_1(VAR_2, "error writing 0x0008");

 VAR_2 = FUNC_4(VAR_1, 0x000C, 0x0FFF2222);
 FUNC_1(VAR_2, "error writing 0x000C");

 VAR_2 = FUNC_4(VAR_1, 0x0010, 0x00030814);
 FUNC_1(VAR_2, "error writing 0x0010");

 VAR_2 = FUNC_4(VAR_1, 0x0014, 0x00500019);
 FUNC_1(VAR_2, "error writing 0x0014");

 VAR_2 = FUNC_4(VAR_1, 0x0018, 0x020D0F15);
 FUNC_1(VAR_2, "error writing 0x0018");

 VAR_2 = FUNC_4(VAR_1, 0x001C, 0x02532305);
 FUNC_1(VAR_2, "error writing 0x001C");

 VAR_2 = FUNC_4(VAR_1, 0x0020, 0x0B030905);
 FUNC_1(VAR_2, "error writing 0x0020");

 VAR_2 = FUNC_4(VAR_1, 0x0024, 0x00000827);
 FUNC_1(VAR_2, "error writing 0x0024");

 VAR_2 = FUNC_4(VAR_1, 0x0028, 0x00000000);
 FUNC_1(VAR_2, "error writing 0x0028");

 VAR_2 = FUNC_4(VAR_1, 0x002C, 0x00000042);
 FUNC_1(VAR_2, "error writing 0x002C");

 VAR_2 = FUNC_4(VAR_1, 0x0030, 0x09520000);
 FUNC_1(VAR_2, "error writing 0x0030");

 VAR_2 = FUNC_4(VAR_1, 0x0034, 0x02223314);
 FUNC_1(VAR_2, "error writing 0x0034");

 VAR_2 = FUNC_4(VAR_1, 0x0038, 0x00430043);
 FUNC_1(VAR_2, "error writing 0x0038");

 VAR_2 = FUNC_4(VAR_1, 0x003C, 0xF00F000F);
 FUNC_1(VAR_2, "error writing 0x003C");

 VAR_2 = FUNC_4(VAR_1, 0x0040, 0xF380F00F);
 FUNC_1(VAR_2, "error writing 0x0040");

 VAR_2 = FUNC_4(VAR_1, 0x0044, 0xF00F0496);
 FUNC_1(VAR_2, "error writing 0x0044");

 VAR_2 = FUNC_4(VAR_1, 0x0048, 0x03080406);
 FUNC_1(VAR_2, "error writing 0x0048");

 VAR_2 = FUNC_4(VAR_1, 0x004C, 0x00001000);
 FUNC_1(VAR_2, "error writing 0x004C");

 VAR_2 = FUNC_4(VAR_1, 0x005C, 0x00000007);
 FUNC_1(VAR_2, "error writing 0x005C");

 VAR_2 = FUNC_4(VAR_1, 0x0100, 0x54F00012);
 FUNC_1(VAR_2, "error writing 0x0100");

 VAR_2 = FUNC_4(VAR_1, 0x0104, 0x00004012);
 FUNC_1(VAR_2, "error writing 0x0104");

 VAR_2 = FUNC_4(VAR_1, 0x0118, 0x40404040);
 FUNC_1(VAR_2, "error writing 0x0118");

 VAR_2 = FUNC_4(VAR_1, 0x0000, 0x00000001);
 FUNC_1(VAR_2, "error writing 0x0000");

 while (VAR_3++ < 500) {
  VAR_2 = FUNC_3(VAR_1, 0x0000, &VAR_4);
  FUNC_1(VAR_2, "error reading 0x0000");

  if (FUNC_0(VAR_4, 0xC0000000))
   return 0;
 }

 FUNC_2("DDR2 initialisation timed out, reg 0x0000=0x%08x", VAR_4);
 return -VAR_0;
}
