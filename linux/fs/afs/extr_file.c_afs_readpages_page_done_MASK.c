
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct afs_vnode {int cache; TYPE_1__ status; } ;
struct afs_read {size_t index; struct page** pages; struct afs_vnode* vnode; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,struct page*) ;
 scalar_t__ FUNC_4 (int ,struct page*,int ,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct afs_read *VAR_1)
{



 struct page *VAR_2 = VAR_1->pages[VAR_1->index];

 VAR_1->pages[VAR_1->index] = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
}
