
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct TYPE_4__ {TYPE_1__ rb_root; } ;
struct extent_tree {struct extent_node* cached_en; int largest; TYPE_2__ root; } ;
struct extent_node {int ei; } ;
struct extent_info {int dummy; } ;


 struct extent_node* FUNC_0 (struct f2fs_sb_info*,struct extent_tree*,struct extent_info*,int *,struct rb_node**,int) ;

__attribute__((used)) static struct extent_node *FUNC_1(struct f2fs_sb_info *VAR_0,
    struct extent_tree *VAR_1, struct extent_info *VAR_2)
{
 struct rb_node **VAR_3 = &VAR_1->root.rb_root.rb_node;
 struct extent_node *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3, 1);
 if (!VAR_4)
  return ((void*)0);

 VAR_1->largest = VAR_4->ei;
 VAR_1->cached_en = VAR_4;
 return VAR_4;
}
