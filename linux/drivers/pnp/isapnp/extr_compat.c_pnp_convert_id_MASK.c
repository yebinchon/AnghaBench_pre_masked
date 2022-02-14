
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char,char,char,unsigned short,unsigned short,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, unsigned short VAR_1,
      unsigned short VAR_2)
{
 FUNC_0(VAR_0, "%c%c%c%x%x%x%x",
  'A' + ((VAR_1 >> 2) & 0x3f) - 1,
  'A' + (((VAR_1 & 3) << 3) | ((VAR_1 >> 13) & 7)) - 1,
  'A' + ((VAR_1 >> 8) & 0x1f) - 1,
  (VAR_2 >> 4) & 0x0f, VAR_2 & 0x0f,
  (VAR_2 >> 12) & 0x0f, (VAR_2 >> 8) & 0x0f);
}
