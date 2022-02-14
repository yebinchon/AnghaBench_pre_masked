
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct coda_ctx {int dummy; } ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; } ;


 scalar_t__ FUNC_0 (int*,int const*,int) ;

u32 FUNC_1(struct coda_ctx *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 static const u8 VAR_3[4] = { 0x00, 0x00, 0x01, 0xb3 };
 static const union {
  u8 extension_start[4];
  u8 start_code_prefix[3];
 } VAR_4 = { { 0x00, 0x00, 0x01, 0xb5 } };

 if (VAR_2 < 22 ||
     FUNC_0(VAR_1, VAR_3, 4) != 0)
  return 0;

 if ((VAR_2 == 22 ||
      (VAR_2 >= 25 && FUNC_0(VAR_1 + 22, VAR_4.start_code_prefix, 3) == 0)) &&
     FUNC_0(VAR_1 + 12, VAR_4.extension_start, 4) == 0)
  return 22;

 if ((VAR_2 == 86 ||
      (VAR_2 > 89 && FUNC_0(VAR_1 + 86, VAR_4.start_code_prefix, 3) == 0)) &&
     FUNC_0(VAR_1 + 76, VAR_4.extension_start, 4) == 0)
  return 86;

 return 0;
}
