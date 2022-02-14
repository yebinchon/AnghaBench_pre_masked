
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8leaf_t ;
struct utf8data {int maxage; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (struct utf8data const*,unsigned char*,char const*) ;

int FUNC_3(const struct utf8data *VAR_2, const char *VAR_3)
{
 utf8leaf_t *VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 unsigned char VAR_7[VAR_0];

 if (!VAR_2)
  return -1;

 while (*VAR_3) {
  VAR_4 = FUNC_2(VAR_2, VAR_7, VAR_3);
  if (!VAR_4)
   return -1;

  VAR_6 = VAR_1[FUNC_0(VAR_4)];
  if (VAR_6 <= VAR_2->maxage && VAR_6 > VAR_5)
   VAR_5 = VAR_6;
  VAR_3 += FUNC_1(VAR_3);
 }
 return VAR_5;
}
