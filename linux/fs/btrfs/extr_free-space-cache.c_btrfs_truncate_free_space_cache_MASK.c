
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_block_group_cache {int lock; int disk_cache_state; int io_list; } ;
struct TYPE_5__ {struct btrfs_root* root; } ;
struct TYPE_4__ {int cache_write_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int ,int ) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct inode*,int ) ;

int FUNC_16(struct btrfs_trans_handle *VAR_3,
        struct btrfs_block_group_cache *VAR_4,
        struct inode *VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 int VAR_7 = 0;
 bool VAR_8 = 0;

 if (VAR_4) {
  struct btrfs_path *VAR_9 = FUNC_2();

  if (!VAR_9) {
   VAR_7 = -VAR_2;
   goto fail;
  }
  VAR_8 = 1;
  FUNC_11(&VAR_3->transaction->cache_write_mutex);
  if (!FUNC_10(&VAR_4->io_list)) {
   FUNC_9(&VAR_4->io_list);

   FUNC_8(VAR_3, VAR_4, VAR_9);
   FUNC_5(VAR_4);
  }





  FUNC_13(&VAR_4->lock);
  VAR_4->disk_cache_state = VAR_0;
  FUNC_14(&VAR_4->lock);
  FUNC_3(VAR_9);
 }

 FUNC_4(FUNC_0(VAR_5), 0);
 FUNC_15(VAR_5, 0);





 VAR_7 = FUNC_6(VAR_3, VAR_6, VAR_5,
      0, VAR_1);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_7(VAR_3, VAR_6, VAR_5);

fail:
 if (VAR_8)
  FUNC_12(&VAR_3->transaction->cache_write_mutex);
 if (VAR_7)
  FUNC_1(VAR_3, VAR_7);

 return VAR_7;
}
