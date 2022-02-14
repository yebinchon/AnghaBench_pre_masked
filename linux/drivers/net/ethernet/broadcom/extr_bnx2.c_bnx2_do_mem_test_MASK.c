
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int test_pattern ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int const FUNC_0 (struct bnx2*,int) ;
 int FUNC_1 (struct bnx2*,int,int const) ;

__attribute__((used)) static int
FUNC_2(struct bnx2 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 static const u32 VAR_4[] = { 0x00000000, 0xffffffff, 0x55555555,
  0xaaaaaaaa , 0xaa55aa55, 0x55aa55aa };
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4) / 4; VAR_5++) {
  u32 VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 4) {

   FUNC_1(VAR_1, VAR_2 + VAR_6, VAR_4[VAR_5]);

   if (FUNC_0(VAR_1, VAR_2 + VAR_6) !=
    VAR_4[VAR_5]) {
    return -VAR_0;
   }
  }
 }
 return 0;
}
