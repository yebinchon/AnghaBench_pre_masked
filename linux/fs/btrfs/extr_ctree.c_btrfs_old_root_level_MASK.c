
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int level; } ;
struct tree_mod_elem {scalar_t__ op; TYPE_1__ old_root; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tree_mod_elem* FUNC_0 (struct extent_buffer*,int ) ;
 int FUNC_1 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct extent_buffer*) ;

int FUNC_4(struct btrfs_root *VAR_1, u64 VAR_2)
{
 struct tree_mod_elem *VAR_3;
 int VAR_4;
 struct extent_buffer *VAR_5 = FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_5, VAR_2);
 if (VAR_3 && VAR_3->op == VAR_0) {
  VAR_4 = VAR_3->old_root.level;
 } else {
  VAR_4 = FUNC_1(VAR_5);
 }
 FUNC_3(VAR_5);

 return VAR_4;
}
