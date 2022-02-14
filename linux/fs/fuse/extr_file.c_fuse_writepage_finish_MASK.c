
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_args_pages {int num_pages; int * pages; } ;
struct TYPE_2__ {struct fuse_args_pages ap; } ;
struct fuse_writepage_args {int writepages_entry; struct inode* inode; TYPE_1__ ia; } ;
struct fuse_inode {int page_waitq; } ;
struct fuse_conn {int dummy; } ;
struct backing_dev_info {int wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 struct backing_dev_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fuse_conn *VAR_2,
      struct fuse_writepage_args *VAR_3)
{
 struct fuse_args_pages *VAR_4 = &VAR_3->ia.ap;
 struct inode *VAR_5 = VAR_3->inode;
 struct fuse_inode *VAR_6 = FUNC_2(VAR_5);
 struct backing_dev_info *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;

 FUNC_4(&VAR_3->writepages_entry);
 for (VAR_8 = 0; VAR_8 < VAR_4->num_pages; VAR_8++) {
  FUNC_1(&VAR_7->wb, VAR_1);
  FUNC_0(VAR_4->pages[VAR_8], VAR_0);
  FUNC_6(&VAR_7->wb);
 }
 FUNC_5(&VAR_6->page_waitq);
}
