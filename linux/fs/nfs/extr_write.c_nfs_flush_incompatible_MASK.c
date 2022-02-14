
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {struct page* wb_page; struct nfs_lock_context* wb_lock_context; } ;
struct nfs_open_context {int dummy; } ;
struct nfs_lock_context {scalar_t__ lockowner; } ;
struct file_lock_context {int flc_flock; int flc_posix; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ files; } ;
struct TYPE_5__ {struct file_lock_context* i_flctx; } ;
struct TYPE_4__ {int host; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct nfs_open_context* FUNC_2 (struct file*) ;
 int FUNC_3 (int ,struct nfs_open_context*) ;
 struct nfs_page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (int ,struct page*) ;
 TYPE_1__* FUNC_8 (struct page*) ;

int FUNC_9(struct file *VAR_1, struct page *VAR_2)
{
 struct nfs_open_context *VAR_3 = FUNC_2(VAR_1);
 struct nfs_lock_context *VAR_4;
 struct file_lock_context *VAR_5 = FUNC_0(VAR_1)->i_flctx;
 struct nfs_page *VAR_6;
 int VAR_7, VAR_8;
 do {
  VAR_6 = FUNC_4(VAR_2);
  if (VAR_6 == ((void*)0))
   return 0;
  VAR_4 = VAR_6->wb_lock_context;
  VAR_7 = VAR_6->wb_page != VAR_2 ||
   !FUNC_3(FUNC_6(VAR_6), VAR_3);
  if (VAR_4 && VAR_5 &&
      !(FUNC_1(&VAR_5->flc_posix) &&
        FUNC_1(&VAR_5->flc_flock))) {
   VAR_7 |= VAR_4->lockowner != VAR_0->files;
  }
  FUNC_5(VAR_6);
  if (!VAR_7)
   return 0;
  VAR_8 = FUNC_7(FUNC_8(VAR_2)->host, VAR_2);
 } while (VAR_8 == 0);
 return VAR_8;
}
