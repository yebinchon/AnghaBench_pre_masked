
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {unsigned long len; int lock_nested; scalar_t__ write_locks; int read_locks; int spinning_readers; scalar_t__ spinning_writers; int io_pages; int refs; int refs_lock; int leak_list; int read_lock_wq; int write_lock_wq; scalar_t__ blocking_writers; int blocking_readers; int lock; scalar_t__ bflags; struct btrfs_fs_info* fs_info; int start; } ;
struct btrfs_fs_info {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 struct extent_buffer* FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct extent_buffer *
FUNC_8(struct btrfs_fs_info *VAR_6, u64 VAR_7,
        unsigned long VAR_8)
{
 struct extent_buffer *VAR_9 = ((void*)0);

 VAR_9 = FUNC_5(VAR_5, VAR_1|VAR_3);
 VAR_9->start = VAR_7;
 VAR_9->len = VAR_8;
 VAR_9->fs_info = VAR_6;
 VAR_9->bflags = 0;
 FUNC_6(&VAR_9->lock);
 FUNC_2(&VAR_9->blocking_readers, 0);
 VAR_9->blocking_writers = 0;
 VAR_9->lock_nested = 0;
 FUNC_4(&VAR_9->write_lock_wq);
 FUNC_4(&VAR_9->read_lock_wq);

 FUNC_3(&VAR_9->leak_list, &VAR_4);

 FUNC_7(&VAR_9->refs_lock);
 FUNC_2(&VAR_9->refs, 1);
 FUNC_2(&VAR_9->io_pages, 0);




 FUNC_1(VAR_0
  > VAR_2);
 FUNC_0(VAR_8 > VAR_2);
 return VAR_9;
}
