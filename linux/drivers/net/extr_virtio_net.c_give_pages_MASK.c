
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_queue {struct page* pages; } ;
struct page {long private; } ;



__attribute__((used)) static void FUNC_0(struct receive_queue *VAR_0, struct page *VAR_1)
{
 struct page *VAR_2;


 for (VAR_2 = VAR_1; VAR_2->private; VAR_2 = (struct page *)VAR_2->private);
 VAR_2->private = (unsigned long)VAR_0->pages;
 VAR_0->pages = VAR_1;
}
