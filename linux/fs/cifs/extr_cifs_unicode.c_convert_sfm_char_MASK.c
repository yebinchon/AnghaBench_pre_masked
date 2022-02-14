
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;
__attribute__((used)) static bool
FUNC_0(const __u16 VAR_0, char *VAR_1)
{
 if (VAR_0 >= 0xF001 && VAR_0 <= 0xF01F) {
  *VAR_1 = VAR_0 - 0xF000;
  return 1;
 }
 switch (VAR_0) {
 case 135:
  *VAR_1 = ':';
  break;
 case 134:
  *VAR_1 = '"';
  break;
 case 136:
  *VAR_1 = '*';
  break;
 case 129:
  *VAR_1 = '?';
  break;
 case 130:
  *VAR_1 = '|';
  break;
 case 133:
  *VAR_1 = '>';
  break;
 case 132:
  *VAR_1 = '<';
  break;
 case 128:
  *VAR_1 = ' ';
  break;
 case 131:
  *VAR_1 = '.';
  break;
 default:
  return 0;
 }
 return 1;
}
