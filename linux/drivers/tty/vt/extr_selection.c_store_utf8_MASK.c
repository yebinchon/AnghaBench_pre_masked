
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, char *VAR_1)
{
 if (VAR_0 < 0x80) {

  VAR_1[0] = VAR_0;
  return 1;
 } else if (VAR_0 < 0x800) {

  VAR_1[0] = 0xc0 | (VAR_0 >> 6);
  VAR_1[1] = 0x80 | (VAR_0 & 0x3f);
  return 2;
 } else if (VAR_0 < 0x10000) {

  VAR_1[0] = 0xe0 | (VAR_0 >> 12);
  VAR_1[1] = 0x80 | ((VAR_0 >> 6) & 0x3f);
  VAR_1[2] = 0x80 | (VAR_0 & 0x3f);
  return 3;
 } else if (VAR_0 < 0x110000) {

  VAR_1[0] = 0xf0 | (VAR_0 >> 18);
  VAR_1[1] = 0x80 | ((VAR_0 >> 12) & 0x3f);
  VAR_1[2] = 0x80 | ((VAR_0 >> 6) & 0x3f);
  VAR_1[3] = 0x80 | (VAR_0 & 0x3f);
  return 4;
 } else {

  VAR_1[0] = 0xef;
  VAR_1[1] = 0xbf;
  VAR_1[2] = 0xbd;
  return 3;
 }
}
