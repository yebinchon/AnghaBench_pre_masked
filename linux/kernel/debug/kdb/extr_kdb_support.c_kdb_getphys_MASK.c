
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,size_t) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, unsigned long VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 void *VAR_6;
 struct page *VAR_7;

 VAR_5 = (VAR_3 >> VAR_0);
 if (!FUNC_4(VAR_5))
  return 1;
 VAR_7 = FUNC_3(VAR_5);
 VAR_6 = FUNC_0(VAR_7);
 FUNC_2(VAR_2, VAR_6 + (VAR_3 & (VAR_1 - 1)), VAR_4);
 FUNC_1(VAR_6);

 return 0;
}
