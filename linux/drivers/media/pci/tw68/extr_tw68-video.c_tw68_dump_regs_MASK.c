
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw68_dev {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct tw68_dev *VAR_0)
{
 unsigned char VAR_1[80];
 int VAR_2, VAR_3, VAR_4;
 unsigned char *VAR_5;

 FUNC_0("Full dump of TW68 registers:\n");

 for (VAR_2 = 0; VAR_2 < 0x100; VAR_2 += 32) {
  VAR_5 = VAR_1;
  VAR_5 += FUNC_1(VAR_5, "%03x  ", VAR_2);

  for (VAR_3 = VAR_2; VAR_3 < VAR_2 + 16; VAR_3 += 4)
   VAR_5 += FUNC_1(VAR_5, "%08x ", FUNC_3(VAR_3));
  *VAR_5++ = ' ';
  for (; VAR_3 < VAR_2 + 32; VAR_3 += 4)
   VAR_5 += FUNC_1(VAR_5, "%08x ", FUNC_3(VAR_3));
  *VAR_5++ = '\n';
  *VAR_5 = 0;
  FUNC_0("%s", VAR_1);
 }

 while (VAR_2 < 0x400) {
  VAR_5 = VAR_1;
  VAR_5 += FUNC_1(VAR_5, "%03x ", VAR_2);

  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    VAR_5 += FUNC_1(VAR_5, "%02x ",
     FUNC_2(VAR_2));
    VAR_2 += 4;
   }
   *VAR_5++ = ' ';
  }
  *VAR_5++ = '\n';
  *VAR_5 = 0;
  FUNC_0("%s", VAR_1);
 }
}
