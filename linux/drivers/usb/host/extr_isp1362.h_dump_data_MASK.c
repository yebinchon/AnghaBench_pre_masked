
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void __attribute__((unused)) FUNC_2(char *VAR_1, int VAR_2)
{
 if (VAR_0 > 0) {
  int VAR_3;
  int VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
   if (!VAR_4)
    FUNC_0(0, "%04x:", VAR_3);
   FUNC_1(" %02x", ((u8 *) VAR_1)[VAR_3]);
   VAR_4 = 1;
   if (!VAR_3)
    continue;
   if (VAR_3 % 16 == 15) {
    FUNC_1("\n");
    VAR_4 = 0;
    continue;
   }
   if (VAR_3 % 8 == 7)
    FUNC_1(" ");
   if (VAR_3 % 4 == 3)
    FUNC_1(" ");
  }
  if (VAR_4)
   FUNC_1("\n");
 }
}
