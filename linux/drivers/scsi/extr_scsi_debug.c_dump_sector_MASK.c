
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int,char*,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_0(">>> Sector Dump <<<\n");
 for (VAR_2 = 0 ; VAR_2 < VAR_1 ; VAR_2 += 16) {
  char VAR_5[128];

  for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 16; VAR_3++) {
   unsigned char VAR_6 = VAR_0[VAR_2+VAR_3];

   if (VAR_6 >= 0x20 && VAR_6 < 0x7e)
    VAR_4 += FUNC_1(VAR_5 + VAR_4, sizeof(VAR_5) - VAR_4,
            " %c ", VAR_0[VAR_2+VAR_3]);
   else
    VAR_4 += FUNC_1(VAR_5 + VAR_4, sizeof(VAR_5) - VAR_4,
            "%02x ", VAR_0[VAR_2+VAR_3]);
  }
  FUNC_0("%04d: %s\n", VAR_2, VAR_5);
 }
}
