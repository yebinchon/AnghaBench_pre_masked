
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debuglevel { ____Placeholder_debuglevel } debuglevel ;


 int FUNC_0 (int,char*,unsigned char const*,unsigned int,unsigned char*) ;

void FUNC_1(enum debuglevel VAR_0, const unsigned char *VAR_1,
   size_t VAR_2, const unsigned char *VAR_3)
{
 unsigned char VAR_4[80];
 unsigned char VAR_5;
 size_t VAR_6 = sizeof VAR_4 - 1;
 unsigned char *VAR_7 = VAR_4;
 size_t VAR_8 = VAR_2;

 while (VAR_8--) {
  VAR_5 = *VAR_3++;
  if (VAR_5 == '~' || VAR_5 == '^' || VAR_5 == '\\') {
   if (!VAR_6--)
    break;
   *VAR_7++ = '\\';
  }
  if (VAR_5 & 0x80) {
   if (!VAR_6--)
    break;
   *VAR_7++ = '~';
   VAR_5 ^= 0x80;
  }
  if (VAR_5 < 0x20 || VAR_5 == 0x7f) {
   if (!VAR_6--)
    break;
   *VAR_7++ = '^';
   VAR_5 ^= 0x40;
  }
  if (!VAR_6--)
   break;
  *VAR_7++ = VAR_5;
 }
 *VAR_7 = 0;

 FUNC_0(VAR_0, "%s (%u bytes): %s", VAR_1, (unsigned) VAR_2, VAR_4);
}
