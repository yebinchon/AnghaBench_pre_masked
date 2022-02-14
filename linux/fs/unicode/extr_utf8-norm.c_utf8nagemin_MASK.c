
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8leaf_t ;
struct utf8data {int maxage; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int * FUNC_2 (struct utf8data const*,unsigned char*,char const*,size_t) ;

int FUNC_3(const struct utf8data *VAR_2, const char *VAR_3, size_t VAR_4)
{
 utf8leaf_t *VAR_5;
 int VAR_6;
 int VAR_7;
 unsigned char VAR_8[VAR_0];

 if (!VAR_2)
  return -1;
 VAR_7 = VAR_2->maxage;
 while (VAR_4 && *VAR_3) {
  VAR_5 = FUNC_2(VAR_2, VAR_8, VAR_3, VAR_4);
  if (!VAR_5)
   return -1;
  VAR_6 = VAR_1[FUNC_0(VAR_5)];
  if (VAR_6 <= VAR_2->maxage && VAR_6 < VAR_7)
   VAR_7 = VAR_6;
  VAR_4 -= FUNC_1(VAR_3);
  VAR_3 += FUNC_1(VAR_3);
 }
 return VAR_7;
}
