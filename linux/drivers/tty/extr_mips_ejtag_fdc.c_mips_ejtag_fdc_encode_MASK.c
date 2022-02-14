
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fdc_word {int word; int bytes; int member_1; int member_0; } ;



__attribute__((used)) static struct fdc_word FUNC_0(const char **VAR_0,
          unsigned int *VAR_1,
          unsigned int VAR_2)
{
 struct fdc_word VAR_3 = { 0, 0 };
 const char **VAR_4 = VAR_0 + VAR_2;

 for (; VAR_0 < VAR_4; ++VAR_0) {
  const char *VAR_5 = *(VAR_0++);
  const char *VAR_6 = VAR_5 + *(VAR_1++);

  for (; VAR_5 < VAR_6; ++VAR_5) {
   VAR_3.word |= (u8)*VAR_5 << (8*VAR_3.bytes);
   ++VAR_3.bytes;
   if (VAR_3.bytes == 4)
    goto done;
  }
 }
done:

 switch (VAR_3.bytes) {
 case 4:

  if ((VAR_3.word >> 8) != 0x808080 &&
      (VAR_3.word >> 16) != 0x8181 &&
      (VAR_3.word >> 24) != 0x82)
   break;

  VAR_3.bytes = 3;
  VAR_3.word &= 0x00ffffff;
 case 3:

  VAR_3.word |= 0x82000000;
  break;
 case 2:

  VAR_3.word |= 0x81810000;
  break;
 case 1:

  VAR_3.word |= 0x80808000;
  break;
 }
 return VAR_3;
}
