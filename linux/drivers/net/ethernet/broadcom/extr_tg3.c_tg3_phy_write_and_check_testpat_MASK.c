
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tg3*,int ,int*) ;
 scalar_t__ FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct tg3*,int ,int const) ;

__attribute__((used)) static int FUNC_3(struct tg3 *VAR_4, int *VAR_5)
{
 static const u32 VAR_6[4][6] = {
 { 0x00005555, 0x00000005, 0x00002aaa, 0x0000000a, 0x00003456, 0x00000003 },
 { 0x00002aaa, 0x0000000a, 0x00003333, 0x00000003, 0x0000789a, 0x00000005 },
 { 0x00005a5a, 0x00000005, 0x00002a6a, 0x0000000a, 0x00001bcd, 0x00000003 },
 { 0x00002a5a, 0x0000000a, 0x000033c3, 0x00000003, 0x00002ef1, 0x00000005 }
 };
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  int VAR_8;

  FUNC_2(VAR_4, VAR_1,
        (VAR_7 * 0x2000) | 0x0200);
  FUNC_2(VAR_4, VAR_2, 0x0002);

  for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
   FUNC_2(VAR_4, VAR_3,
         VAR_6[VAR_7][VAR_8]);

  FUNC_2(VAR_4, VAR_2, 0x0202);
  if (FUNC_1(VAR_4)) {
   *VAR_5 = 1;
   return -VAR_0;
  }

  FUNC_2(VAR_4, VAR_1,
        (VAR_7 * 0x2000) | 0x0200);
  FUNC_2(VAR_4, VAR_2, 0x0082);
  if (FUNC_1(VAR_4)) {
   *VAR_5 = 1;
   return -VAR_0;
  }

  FUNC_2(VAR_4, VAR_2, 0x0802);
  if (FUNC_1(VAR_4)) {
   *VAR_5 = 1;
   return -VAR_0;
  }

  for (VAR_8 = 0; VAR_8 < 6; VAR_8 += 2) {
   u32 VAR_9, VAR_10;

   if (FUNC_0(VAR_4, VAR_3, &VAR_9) ||
       FUNC_0(VAR_4, VAR_3, &VAR_10) ||
       FUNC_1(VAR_4)) {
    *VAR_5 = 1;
    return -VAR_0;
   }
   VAR_9 &= 0x7fff;
   VAR_10 &= 0x000f;
   if (VAR_9 != VAR_6[VAR_7][VAR_8] ||
       VAR_10 != VAR_6[VAR_7][VAR_8+1]) {
    FUNC_2(VAR_4, VAR_1, 0x000b);
    FUNC_2(VAR_4, VAR_3, 0x4001);
    FUNC_2(VAR_4, VAR_3, 0x4005);

    return -VAR_0;
   }
  }
 }

 return 0;
}
