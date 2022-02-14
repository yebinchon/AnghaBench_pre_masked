
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int extent_lock; int extent_list; } ;
struct extent_tree {struct extent_node* cached_en; } ;
struct extent_info {scalar_t__ len; int blk; int fofs; } ;
struct extent_node {int list; struct extent_info ei; } ;


 scalar_t__ FUNC_0 (struct extent_info*,struct extent_info*) ;
 scalar_t__ FUNC_1 (struct extent_info*,struct extent_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,struct extent_tree*,struct extent_node*) ;
 int FUNC_3 (struct extent_tree*,struct extent_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct extent_node *FUNC_8(struct f2fs_sb_info *VAR_0,
    struct extent_tree *VAR_1, struct extent_info *VAR_2,
    struct extent_node *VAR_3,
    struct extent_node *VAR_4)
{
 struct extent_node *VAR_5 = ((void*)0);

 if (VAR_3 && FUNC_0(VAR_2, &VAR_3->ei)) {
  VAR_3->ei.len += VAR_2->len;
  VAR_2 = &VAR_3->ei;
  VAR_5 = VAR_3;
 }

 if (VAR_4 && FUNC_1(VAR_2, &VAR_4->ei)) {
  VAR_4->ei.fofs = VAR_2->fofs;
  VAR_4->ei.blk = VAR_2->blk;
  VAR_4->ei.len += VAR_2->len;
  if (VAR_5)
   FUNC_2(VAR_0, VAR_1, VAR_3);

  VAR_5 = VAR_4;
 }

 if (!VAR_5)
  return ((void*)0);

 FUNC_3(VAR_1, VAR_5);

 FUNC_6(&VAR_0->extent_lock);
 if (!FUNC_4(&VAR_5->list)) {
  FUNC_5(&VAR_5->list, &VAR_0->extent_list);
  VAR_1->cached_en = VAR_5;
 }
 FUNC_7(&VAR_0->extent_lock);
 return VAR_5;
}
