
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
typedef int journal_t ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct page*) ;
 int * FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *,struct page*,unsigned int,unsigned int) ;
 int FUNC_3 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 journal_t *VAR_4 = FUNC_1(VAR_1->mapping->host);

 FUNC_3(VAR_1, VAR_2, VAR_3);




 if (VAR_2 == 0 && VAR_3 == VAR_0)
  FUNC_0(VAR_1);

 return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
}
