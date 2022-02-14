
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int index; } ;
struct fuse_args_pages {int num_pages; int * pages; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
struct TYPE_6__ {struct fuse_args_pages ap; TYPE_2__ write; } ;
struct fuse_writepage_args {scalar_t__ inode; struct fuse_writepage_args* next; TYPE_3__ ia; int writepages_entry; } ;
struct fuse_inode {int lock; int writepages; } ;
struct backing_dev_info {int wb; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 struct fuse_writepage_args* FUNC_3 (struct fuse_inode*,int,int) ;
 int FUNC_4 (struct fuse_writepage_args*) ;
 struct fuse_inode* FUNC_5 (scalar_t__) ;
 struct backing_dev_info* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(struct fuse_writepage_args *VAR_3,
         struct page *VAR_4)
{
 struct fuse_inode *VAR_5 = FUNC_5(VAR_3->inode);
 struct fuse_writepage_args *VAR_6;
 struct fuse_writepage_args *VAR_7;
 struct fuse_args_pages *VAR_8 = &VAR_3->ia.ap;

 FUNC_0(VAR_8->num_pages != 0);

 FUNC_9(&VAR_5->lock);
 FUNC_8(&VAR_3->writepages_entry);
 VAR_7 = FUNC_3(VAR_5, VAR_4->index, VAR_4->index);
 if (!VAR_7) {
  FUNC_7(&VAR_3->writepages_entry, &VAR_5->writepages);
  FUNC_10(&VAR_5->lock);
  return 0;
 }

 VAR_8->num_pages = 1;
 for (VAR_6 = VAR_7->next; VAR_6; VAR_6 = VAR_6->next) {
  pgoff_t VAR_9;

  FUNC_0(VAR_6->inode != VAR_3->inode);
  VAR_9 = VAR_6->ia.write.in.offset >> VAR_1;
  if (VAR_9 == VAR_4->index) {
   FUNC_0(VAR_6->ia.ap.num_pages != 1);
   FUNC_11(VAR_6->ia.ap.pages[0], VAR_8->pages[0]);
   break;
  }
 }

 if (!VAR_6) {
  VAR_3->next = VAR_7->next;
  VAR_7->next = VAR_3;
 }

 FUNC_10(&VAR_5->lock);

 if (VAR_6) {
  struct backing_dev_info *VAR_10 = FUNC_6(VAR_3->inode);

  FUNC_2(&VAR_10->wb, VAR_2);
  FUNC_1(VAR_8->pages[0], VAR_0);
  FUNC_12(&VAR_10->wb);
  FUNC_4(VAR_3);
 }

 return 1;
}
