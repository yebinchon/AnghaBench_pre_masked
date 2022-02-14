
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,struct page*) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0, struct page *VAR_1)
{

 if (VAR_0->index > VAR_1->index)
  FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0);
 if (VAR_0 != VAR_1)
  FUNC_0(VAR_1);
}
