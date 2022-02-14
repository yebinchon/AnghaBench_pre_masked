
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct btrfs_delayed_ref_root {int lock; } ;
struct btrfs_delayed_ref_head {struct btrfs_delayed_extent_op* extent_op; } ;
struct btrfs_delayed_extent_op {int is_data; } ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_delayed_ref_head*,int *,int ,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_delayed_ref_head*,int *,int ,int ,int ,int ,int ,int ,int) ;
 struct btrfs_delayed_ref_head* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct btrfs_trans_handle *VAR_4,
    u64 VAR_5, u64 VAR_6,
    struct btrfs_delayed_extent_op *VAR_7)
{
 struct btrfs_delayed_ref_head *VAR_8;
 struct btrfs_delayed_ref_root *VAR_9;

 VAR_8 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_2(VAR_8, ((void*)0), VAR_5, VAR_6, 0, 0,
         VAR_0, VAR_7->is_data,
         0);
 VAR_8->extent_op = VAR_7;

 VAR_9 = &VAR_4->transaction->delayed_refs;
 FUNC_4(&VAR_9->lock);

 FUNC_0(VAR_4, VAR_8, ((void*)0), VAR_0,
        ((void*)0), ((void*)0), ((void*)0));

 FUNC_5(&VAR_9->lock);





 FUNC_1(VAR_4);
 return 0;
}
