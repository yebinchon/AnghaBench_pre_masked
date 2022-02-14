
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*) ;

 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;

 int FUNC_5 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_6 (struct bnx2x*,int) ;
 int FUNC_7 (struct bnx2x*,int,int) ;






 int FUNC_8 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = -VAR_4;
 u32 VAR_9 = 0, VAR_10;
 int VAR_11 = FUNC_0(VAR_5);
 static const struct {
  u32 hw;
  u32 offset0;
  u32 offset1;
  u32 mask;
 } VAR_12[] = {
         { 170,
   165, 4, 0x000003ff },
  { 170,
   164, 4, 0xffffffff },
  { 169,
   163, 4, 0x000003ff },
  { 170,
   142, 4, 0x00000001 },
  { 169 | 168 | 167,
   141, 4, 0x000007ff },
  { 166,
   143, 4, 0x000007ff },
  { 170,
   140, 4, 0x00ffffff },
  { 170,
   139, 4, 0x000fffff },
  { 170,
   136, 8, 0x0003ffff },
  { 170,
   138, 4, 0x000fffff },
         { 170,
   135, 8, 0x0003ffff },
  { 170,
   137, 4, 0x000fffff },
  { 170,
   134, 4, 0x000fffff },
  { 170,
   131, 4, 0x0003ffff },
  { 170,
   133, 40, 0xffffffff },
  { 170,
   132, 40, 0xffffffff },
  { 170,
   128, 4, 0x00000001 },
  { 170,
   129, 4, 0x00000003 },
  { 170,
   130, 4, 0x000000ff },
  { 170,
   151, 4, 0x00000001 },
         { 169 | 168,
   160, 4, 0x00000001 },
  { 169 | 168,
   162, 4, 0x00000001 },
  { 170,
   146, 4, 0x00000001 },
  { 170,
   161, 4, 0x00000001 },
  { 170,
   149, 4, 0x00000007 },
  { 170,
   157, 68, 0x000000ff },
  { 170,
   158, 68, 0xffffffff },
  { 170,
   155, 160, 0xffffffff },
  { 170,
   156, 160, 0xffffffff },
  { 170,
   152, 160, 0x00000001 },
         { 170,
   153, 160, 0x0000ffff },
  { 170,
   154, 160, 0x0000ffff },
  { 170,
   150, 160, 0x00000fff },
  { 169 | 168,
   144, 4, 0x00000001 },
  { 170,
   159, 4, 0x00000001},
  { 170,
   147, 4, 0x07ffffff },
  { 169 | 168,
   145, 24, 0x00000001 },
  { 169 | 168,
   148, 16, 0x0000001f },

  { 170, 0xffffffff, 0, 0x00000000 }
 };

 if (!FUNC_8(VAR_5)) {
  FUNC_5(VAR_2 | VAR_3,
     "cannot access eeprom when the interface is down\n");
  return VAR_8;
 }

 if (FUNC_1(VAR_5))
  VAR_10 = VAR_0;
 else if (FUNC_2(VAR_5))
  VAR_10 = VAR_1;
 else if (FUNC_3(VAR_5))
  VAR_10 = 168;
 else if (FUNC_4(VAR_5))
  VAR_10 = 166;
 else
  VAR_10 = 167;




 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {

  switch (VAR_6) {
  case 0:
   VAR_9 = 0;
   break;
  case 1:
   VAR_9 = 0xffffffff;
   break;
  }

  for (VAR_7 = 0; VAR_12[VAR_7].offset0 != 0xffffffff; VAR_7++) {
   u32 VAR_13, VAR_14, VAR_15, VAR_16;
   if (!(VAR_10 & VAR_12[VAR_7].hw))
    continue;

   VAR_13 = VAR_12[VAR_7].offset0 + VAR_11*VAR_12[VAR_7].offset1;
   VAR_14 = VAR_12[VAR_7].mask;

   VAR_15 = FUNC_6(VAR_5, VAR_13);

   FUNC_7(VAR_5, VAR_13, VAR_9 & VAR_14);

   VAR_16 = FUNC_6(VAR_5, VAR_13);


   FUNC_7(VAR_5, VAR_13, VAR_15);


   if ((VAR_16 & VAR_14) != (VAR_9 & VAR_14)) {
    FUNC_5(VAR_2,
       "offset 0x%x: val 0x%x != 0x%x mask 0x%x\n",
       VAR_13, VAR_16, VAR_9, VAR_14);
    goto test_reg_exit;
   }
  }
 }

 VAR_8 = 0;

test_reg_exit:
 return VAR_8;
}
