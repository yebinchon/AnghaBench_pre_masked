
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct page {int index; struct address_space* mapping; } ;
struct address_space {int i_pages; TYPE_1__* host; } ;
typedef int dax_entry_t ;
struct TYPE_11__ {int * xa; } ;
struct TYPE_10__ {int i_mode; } ;


 struct address_space* FUNC_0 (struct address_space*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__,int *,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*,void*) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,void*) ;
 TYPE_2__ VAR_0 ;
 void* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;

dax_entry_t FUNC_13(struct page *VAR_1)
{
 FUNC_2(VAR_0, ((void*)0), 0);
 void *VAR_2;


 FUNC_6();
 for (;;) {
  struct address_space *VAR_3 = FUNC_0(VAR_1->mapping);

  VAR_2 = ((void*)0);
  if (!VAR_3 || !FUNC_5(VAR_3))
   break;
  VAR_2 = (void *)~0UL;
  if (FUNC_1(VAR_3->host->i_mode))
   break;

  VAR_0.xa = &VAR_3->i_pages;
  FUNC_10(&VAR_0);
  if (VAR_3 != VAR_1->mapping) {
   FUNC_12(&VAR_0);
   continue;
  }
  FUNC_11(&VAR_0, VAR_1->index);
  VAR_2 = FUNC_9(&VAR_0);
  if (FUNC_3(VAR_2)) {
   FUNC_7();
   FUNC_8(&VAR_0, VAR_2);
   FUNC_6();
   continue;
  }
  FUNC_4(&VAR_0, VAR_2);
  FUNC_12(&VAR_0);
  break;
 }
 FUNC_7();
 return (dax_entry_t)VAR_2;
}
