
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2,
         int VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6;
 char *VAR_7;

 FUNC_0("Offset       Read                          Written\n");
 while (VAR_4 < VAR_3) {
  FUNC_0("0x%08x: ", VAR_2 + VAR_4);
  VAR_7 = "   ";
  for (VAR_5 = 0; VAR_5 < 8 && VAR_4 + VAR_5 < VAR_3; VAR_5++) {
   FUNC_0(" %02x", VAR_0[VAR_2 + VAR_4 + VAR_5]);
   if (VAR_0[VAR_2 + VAR_4 + VAR_5] != VAR_1[VAR_2 + VAR_4 + VAR_5])
    VAR_7 = "***";
  }

  while (VAR_5 < 8) {
   FUNC_0(" ");
   VAR_5 += 1;
  }

  FUNC_0("  %s ", VAR_7);

  for (VAR_6 = 0; VAR_6 < 8 && VAR_4 + VAR_6 < VAR_3; VAR_6++)
   FUNC_0(" %02x", VAR_1[VAR_2 + VAR_4 + VAR_6]);
  FUNC_0("\n");
  VAR_4 += 8;
 }
}
