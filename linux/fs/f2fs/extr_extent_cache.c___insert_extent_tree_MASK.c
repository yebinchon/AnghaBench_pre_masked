
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct f2fs_sb_info {int extent_lock; int extent_list; } ;
struct extent_tree {struct extent_node* cached_en; int root; } ;
struct extent_node {int list; } ;
struct extent_info {int fofs; } ;


 struct extent_node* FUNC_0 (struct f2fs_sb_info*,struct extent_tree*,struct extent_info*,struct rb_node*,struct rb_node**,int) ;
 int FUNC_1 (struct extent_tree*,struct extent_node*) ;
 struct rb_node** FUNC_2 (struct f2fs_sb_info*,int *,struct rb_node**,int ,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct extent_node *FUNC_6(struct f2fs_sb_info *VAR_0,
    struct extent_tree *VAR_1, struct extent_info *VAR_2,
    struct rb_node **VAR_3,
    struct rb_node *VAR_4,
    bool VAR_5)
{
 struct rb_node **VAR_6;
 struct rb_node *VAR_7 = ((void*)0);
 struct extent_node *VAR_8 = ((void*)0);

 if (VAR_3 && VAR_4) {
  VAR_7 = VAR_4;
  VAR_6 = VAR_3;
  goto do_insert;
 }

 VAR_5 = 1;

 VAR_6 = FUNC_2(VAR_0, &VAR_1->root, &VAR_7,
      VAR_2->fofs, &VAR_5);
do_insert:
 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7, VAR_6, VAR_5);
 if (!VAR_8)
  return ((void*)0);

 FUNC_1(VAR_1, VAR_8);


 FUNC_4(&VAR_0->extent_lock);
 FUNC_3(&VAR_8->list, &VAR_0->extent_list);
 VAR_1->cached_en = VAR_8;
 FUNC_5(&VAR_0->extent_lock);
 return VAR_8;
}
