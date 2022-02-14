
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {int root_item; struct extent_buffer* commit_root; struct extent_buffer* node; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct btrfs_root *VAR_2,
         struct extent_buffer *VAR_3)
{






 if (FUNC_3(VAR_1, &VAR_2->state) &&
     VAR_3 != VAR_2->node && VAR_3 != VAR_2->commit_root &&
     (FUNC_1(VAR_3) <=
      FUNC_2(&VAR_2->root_item) ||
      FUNC_0(VAR_3, VAR_0)))
  return 1;

 return 0;
}
