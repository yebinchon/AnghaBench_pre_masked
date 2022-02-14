
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_2(gfp_t VAR_1,
            unsigned int VAR_2)
{
 struct page *VAR_3;

 VAR_3 = FUNC_0(VAR_1 | VAR_0, VAR_2);
 if (VAR_3)
  return (unsigned long) FUNC_1(VAR_3);
 return 0;
}
