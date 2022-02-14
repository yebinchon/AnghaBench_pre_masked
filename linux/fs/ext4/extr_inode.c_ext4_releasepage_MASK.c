
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
typedef int journal_t ;
typedef int gfp_t ;
struct TYPE_2__ {int host; } ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int *,struct page*,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_0, gfp_t VAR_1)
{
 journal_t *VAR_2 = FUNC_0(VAR_0->mapping->host);

 FUNC_3(VAR_0);


 if (FUNC_1(VAR_0))
  return 0;
 if (VAR_2)
  return FUNC_2(VAR_2, VAR_0, VAR_1);
 else
  return FUNC_4(VAR_0);
}
