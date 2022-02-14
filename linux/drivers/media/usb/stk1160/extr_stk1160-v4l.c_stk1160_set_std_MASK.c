
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {int norm; } ;
struct regval {int member_0; int member_1; int reg; int val; } ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct stk1160*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct stk1160 *VAR_1)
{
 int VAR_2;

 static struct regval VAR_3[] = {




  {130, 0x0000},
  {131, 0x0000},
  {128, 0x0003},
  {129, 0x0000},


  {135, 0x05a0},
  {136, 0x0005},
  {133, 0x00f3},
  {134, 0x0000},

  {0xffff, 0xffff}
 };

 static struct regval VAR_4[] = {





  {132, 0x0000},
  {132 +1, 0x0000},
  {132 +2, 0x0001},
  {132 +3, 0x0000},


  {137, 0x05a0},
  {137 +1, 0x0005},
  {137 +2, 0x0121},
  {137 +3, 0x0001},

  {0xffff, 0xffff}
 };

 if (VAR_1->norm & VAR_0) {
  FUNC_0("registers to NTSC like standard\n");
  for (VAR_2 = 0; VAR_3[VAR_2].reg != 0xffff; VAR_2++)
   FUNC_1(VAR_1, VAR_3[VAR_2].reg, VAR_3[VAR_2].val);
 } else {
  FUNC_0("registers to PAL like standard\n");
  for (VAR_2 = 0; VAR_4[VAR_2].reg != 0xffff; VAR_2++)
   FUNC_1(VAR_1, VAR_4[VAR_2].reg, VAR_4[VAR_2].val);
 }

}
