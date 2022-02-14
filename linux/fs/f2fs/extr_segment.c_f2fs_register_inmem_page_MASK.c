
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct inmem_pages {int list; struct page* page; } ;
struct TYPE_2__ {int inmem_lock; int inmem_pages; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 struct inmem_pages* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*,int ) ;

void FUNC_12(struct inode *VAR_5, struct page *VAR_6)
{
 struct inmem_pages *VAR_7;

 FUNC_5(VAR_6);

 FUNC_4(VAR_6, (unsigned long)VAR_0);

 VAR_7 = FUNC_3(VAR_4, VAR_2);


 VAR_7->page = VAR_6;
 FUNC_2(&VAR_7->list);


 FUNC_6(VAR_6);
 FUNC_9(&FUNC_0(VAR_5)->inmem_lock);
 FUNC_8(&VAR_7->list, &FUNC_0(VAR_5)->inmem_pages);
 FUNC_7(FUNC_1(VAR_5), VAR_1);
 FUNC_10(&FUNC_0(VAR_5)->inmem_lock);

 FUNC_11(VAR_6, VAR_3);
}
