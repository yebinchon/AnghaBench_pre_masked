
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; struct address_space* mapping; } ;
struct address_space {TYPE_1__* host; int i_pages; } ;
typedef scalar_t__ dax_entry_t ;
struct TYPE_2__ {int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,void*) ;
 int VAR_0 ;

void FUNC_3(struct page *VAR_1, dax_entry_t VAR_2)
{
 struct address_space *VAR_3 = VAR_1->mapping;
 FUNC_1(VAR_0, &VAR_3->i_pages, VAR_1->index);

 if (FUNC_0(VAR_3->host->i_mode))
  return;

 FUNC_2(&VAR_0, (void *)VAR_2);
}
