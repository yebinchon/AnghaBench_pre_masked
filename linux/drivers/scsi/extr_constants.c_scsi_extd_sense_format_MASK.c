
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned short code12; scalar_t__ size; } ;
struct TYPE_4__ {char* fmt; unsigned char code1; unsigned char code2_min; unsigned char code2_max; char const* str; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 char const* VAR_2 ;

const char *
FUNC_1(unsigned char VAR_3, unsigned char VAR_4, const char **VAR_5)
{
 int VAR_6;
 unsigned short VAR_7 = ((VAR_3 << 8) | VAR_4);
 unsigned VAR_8 = 0;

 *VAR_5 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (VAR_0[VAR_6].code12 == VAR_7)
   return VAR_2 + VAR_8;
  VAR_8 += VAR_0[VAR_6].size;
 }
 for (VAR_6 = 0; VAR_1[VAR_6].fmt; VAR_6++) {
  if (VAR_1[VAR_6].code1 == VAR_3 &&
      VAR_4 >= VAR_1[VAR_6].code2_min &&
      VAR_4 <= VAR_1[VAR_6].code2_max) {
   *VAR_5 = VAR_1[VAR_6].fmt;
   return VAR_1[VAR_6].str;
  }
 }
 return ((void*)0);
}
