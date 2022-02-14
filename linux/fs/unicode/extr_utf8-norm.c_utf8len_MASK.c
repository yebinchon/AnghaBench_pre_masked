
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8leaf_t ;
struct utf8data {scalar_t__ maxage; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_4 (char const*) ;
 int * FUNC_5 (struct utf8data const*,unsigned char*,char const*) ;

ssize_t FUNC_6(const struct utf8data *VAR_3, const char *VAR_4)
{
 utf8leaf_t *VAR_5;
 size_t VAR_6 = 0;
 unsigned char VAR_7[VAR_1];

 if (!VAR_3)
  return -1;
 while (*VAR_4) {
  VAR_5 = FUNC_5(VAR_3, VAR_7, VAR_4);
  if (!VAR_5)
   return -1;
  if (VAR_2[FUNC_1(VAR_5)] > VAR_3->maxage)
   VAR_6 += FUNC_4(VAR_4);
  else if (FUNC_0(VAR_5) == VAR_0)
   VAR_6 += FUNC_3(FUNC_2(VAR_5));
  else
   VAR_6 += FUNC_4(VAR_4);
  VAR_4 += FUNC_4(VAR_4);
 }
 return VAR_6;
}
