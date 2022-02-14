
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_ctx {int lock; struct page* notify_page; int * notify; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct vmci_ctx *VAR_1)
{
 struct page *VAR_2;

 FUNC_2(&VAR_1->lock);

 VAR_2 = VAR_1->notify_page;
 VAR_1->notify = &VAR_0;
 VAR_1->notify_page = ((void*)0);

 FUNC_3(&VAR_1->lock);

 if (VAR_2) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
}
