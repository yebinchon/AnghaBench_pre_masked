
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {struct nfs_lock_context* wb_lock_context; struct page* wb_page; } ;
struct nfs_open_context {int dentry; int flags; } ;
struct nfs_lock_context {struct nfs_open_context* open_context; int io_count; } ;
struct TYPE_2__ {int uoc_rpcwaitq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_lock_context*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct nfs_page *VAR_1)
{
 struct page *VAR_2 = VAR_1->wb_page;
 struct nfs_lock_context *VAR_3 = VAR_1->wb_lock_context;
 struct nfs_open_context *VAR_4;

 if (VAR_2 != ((void*)0)) {
  FUNC_4(VAR_2);
  VAR_1->wb_page = ((void*)0);
 }
 if (VAR_3 != ((void*)0)) {
  if (FUNC_1(&VAR_3->io_count)) {
   FUNC_7(&VAR_3->io_count);
   VAR_4 = VAR_3->open_context;
   if (FUNC_6(VAR_0, &VAR_4->flags))
    FUNC_5(&FUNC_0(FUNC_2(VAR_4->dentry))->uoc_rpcwaitq);
  }
  FUNC_3(VAR_3);
  VAR_1->wb_lock_context = ((void*)0);
 }
}
