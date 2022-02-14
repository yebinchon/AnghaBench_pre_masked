
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8data {unsigned int maxage; } ;


 int FUNC_0 (struct utf8data const*) ;
 struct utf8data const* VAR_0 ;

const struct utf8data *FUNC_1(unsigned int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0) - 1;

 while (VAR_1 < VAR_0[VAR_2].maxage)
  VAR_2--;
 if (VAR_1 > VAR_0[VAR_2].maxage)
  return ((void*)0);
 return &VAR_0[VAR_2];
}
