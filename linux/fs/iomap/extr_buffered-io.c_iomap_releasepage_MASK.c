
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

int
FUNC_3(struct page *VAR_0, gfp_t VAR_1)
{





 if (FUNC_0(VAR_0) || FUNC_1(VAR_0))
  return 0;
 FUNC_2(VAR_0);
 return 1;
}
