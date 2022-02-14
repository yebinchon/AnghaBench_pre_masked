
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,int ) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_0, gfp_t VAR_1)
{
 if (FUNC_0(VAR_0))
  return 0;
 return FUNC_1(VAR_0, VAR_1);
}
