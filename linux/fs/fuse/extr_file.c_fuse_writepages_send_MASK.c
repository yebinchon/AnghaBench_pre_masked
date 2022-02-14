
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int num_pages; } ;
struct TYPE_4__ {int ff; TYPE_1__ ap; } ;
struct fuse_writepage_args {int queue_entry; TYPE_2__ ia; } ;
struct fuse_inode {int lock; int queued_writes; } ;
struct fuse_fill_wb_data {int * orig_pages; int ff; struct inode* inode; struct fuse_writepage_args* wpa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 struct fuse_inode* FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fuse_fill_wb_data *VAR_0)
{
 struct fuse_writepage_args *VAR_1 = VAR_0->wpa;
 struct inode *VAR_2 = VAR_0->inode;
 struct fuse_inode *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = VAR_1->ia.ap.num_pages;
 int VAR_5;

 VAR_1->ia.ff = FUNC_1(VAR_0->ff);
 FUNC_5(&VAR_3->lock);
 FUNC_4(&VAR_1->queue_entry, &VAR_3->queued_writes);
 FUNC_2(VAR_2);
 FUNC_6(&VAR_3->lock);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(VAR_0->orig_pages[VAR_5]);
}
