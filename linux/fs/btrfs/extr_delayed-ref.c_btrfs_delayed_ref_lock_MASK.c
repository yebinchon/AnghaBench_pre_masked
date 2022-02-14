
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_root {int lock; } ;
struct btrfs_delayed_ref_head {int mutex; int href_node; int refs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_delayed_ref_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct btrfs_delayed_ref_root *VAR_1,
      struct btrfs_delayed_ref_head *VAR_2)
{
 FUNC_2(&VAR_1->lock);
 if (FUNC_4(&VAR_2->mutex))
  return 0;

 FUNC_6(&VAR_2->refs);
 FUNC_8(&VAR_1->lock);

 FUNC_3(&VAR_2->mutex);
 FUNC_7(&VAR_1->lock);
 if (FUNC_0(&VAR_2->href_node)) {
  FUNC_5(&VAR_2->mutex);
  FUNC_1(VAR_2);
  return -VAR_0;
 }
 FUNC_1(VAR_2);
 return 0;
}
