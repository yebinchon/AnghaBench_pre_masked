
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8leaf_t ;
struct tree {scalar_t__ maxage; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int * FUNC_5 (struct tree*,unsigned char*,char const*,size_t) ;

ssize_t FUNC_6(struct tree *VAR_3, const char *VAR_4, size_t VAR_5)
{
 utf8leaf_t *VAR_6;
 size_t VAR_7 = 0;
 unsigned char VAR_8[VAR_1];

 if (!VAR_3)
  return -1;
 while (VAR_5 && *VAR_4) {
  VAR_6 = FUNC_5(VAR_3, VAR_8, VAR_4, VAR_5);
  if (!VAR_6)
   return -1;
  if (VAR_2[FUNC_1(VAR_6)] > VAR_3->maxage)
   VAR_7 += FUNC_4(VAR_4);
  else if (FUNC_0(VAR_6) == VAR_0)
   VAR_7 += FUNC_3(FUNC_2(VAR_6));
  else
   VAR_7 += FUNC_4(VAR_4);
  VAR_5 -= FUNC_4(VAR_4);
  VAR_4 += FUNC_4(VAR_4);
 }
 return VAR_7;
}
