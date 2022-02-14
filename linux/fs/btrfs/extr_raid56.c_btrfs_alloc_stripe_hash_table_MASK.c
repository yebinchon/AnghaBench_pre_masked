
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_stripe_hash_table {struct btrfs_stripe_hash* table; int stripe_cache; int cache_lock; } ;
struct btrfs_stripe_hash {int lock; int hash_list; } ;
struct btrfs_fs_info {scalar_t__ stripe_hash_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct btrfs_stripe_hash_table* FUNC_1 (scalar_t__*,int *,struct btrfs_stripe_hash_table*) ;
 int FUNC_2 (struct btrfs_stripe_hash_table*) ;
 struct btrfs_stripe_hash_table* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct btrfs_fs_info *VAR_3)
{
 struct btrfs_stripe_hash_table *VAR_4;
 struct btrfs_stripe_hash_table *VAR_5;
 struct btrfs_stripe_hash *VAR_6;
 struct btrfs_stripe_hash *VAR_7;
 int VAR_8 = 1 << VAR_0;
 int VAR_9;
 int VAR_10;

 if (VAR_3->stripe_hash_table)
  return 0;
 VAR_10 = sizeof(*VAR_4) + sizeof(*VAR_7) * VAR_8;
 VAR_4 = FUNC_3(VAR_10, VAR_2);
 if (!VAR_4)
  return -VAR_1;

 FUNC_4(&VAR_4->cache_lock);
 FUNC_0(&VAR_4->stripe_cache);

 VAR_7 = VAR_4->table;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_6 = VAR_7 + VAR_9;
  FUNC_0(&VAR_6->hash_list);
  FUNC_4(&VAR_6->lock);
 }

 VAR_5 = FUNC_1(&VAR_3->stripe_hash_table, ((void*)0), VAR_4);
 if (VAR_5)
  FUNC_2(VAR_5);
 return 0;
}
