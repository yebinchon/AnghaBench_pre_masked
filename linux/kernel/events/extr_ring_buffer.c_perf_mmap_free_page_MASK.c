
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * mapping; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct page *VAR_1 = FUNC_1((void *)VAR_0);

 VAR_1->mapping = ((void*)0);
 FUNC_0(VAR_1);
}
