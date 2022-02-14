
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int extent_lock; } ;
struct extent_tree {int dummy; } ;
struct extent_node {int list; } ;


 int FUNC_0 (struct f2fs_sb_info*,struct extent_tree*,struct extent_node*) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_0,
   struct extent_tree *VAR_1, struct extent_node *VAR_2)
{
 FUNC_4(&VAR_0->extent_lock);
 FUNC_1(VAR_0, FUNC_3(&VAR_2->list));
 FUNC_2(&VAR_2->list);
 FUNC_5(&VAR_0->extent_lock);

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
