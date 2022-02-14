
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int parent; } ;
struct kobj_attribute {int dummy; } ;
struct btrfs_block_rsv {int lock; int size; } ;
struct btrfs_fs_info {struct btrfs_block_rsv global_block_rsv; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int *,char*) ;
 struct btrfs_fs_info* FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0,
        struct kobj_attribute *VAR_1, char *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_1(VAR_0->parent);
 struct btrfs_block_rsv *VAR_4 = &VAR_3->global_block_rsv;
 return FUNC_0(&VAR_4->size, &VAR_4->lock, VAR_2);
}
