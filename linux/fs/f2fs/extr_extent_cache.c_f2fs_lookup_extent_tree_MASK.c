
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_entry {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int extent_lock; int extent_list; } ;
struct extent_info {scalar_t__ fofs; scalar_t__ len; } ;
struct extent_tree {int lock; struct extent_node* cached_en; int root; struct extent_info largest; } ;
struct extent_node {int list; struct extent_info ei; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {struct extent_tree* extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_3 (int *,struct rb_entry*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (struct inode*,scalar_t__,struct extent_info*) ;
 int FUNC_15 (struct inode*,scalar_t__) ;

__attribute__((used)) static bool FUNC_16(struct inode *VAR_0, pgoff_t VAR_1,
       struct extent_info *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_1(VAR_0);
 struct extent_tree *VAR_4 = FUNC_0(VAR_0)->extent_tree;
 struct extent_node *VAR_5;
 bool VAR_6 = 0;

 FUNC_2(VAR_3, !VAR_4);

 FUNC_15(VAR_0, VAR_1);

 FUNC_6(&VAR_4->lock);

 if (VAR_4->largest.fofs <= VAR_1 &&
   VAR_4->largest.fofs + VAR_4->largest.len > VAR_1) {
  *VAR_2 = VAR_4->largest;
  VAR_6 = 1;
  FUNC_11(VAR_3);
  goto out;
 }

 VAR_5 = (struct extent_node *)FUNC_3(&VAR_4->root,
    (struct rb_entry *)VAR_4->cached_en, VAR_1);
 if (!VAR_5)
  goto out;

 if (VAR_5 == VAR_4->cached_en)
  FUNC_10(VAR_3);
 else
  FUNC_12(VAR_3);

 *VAR_2 = VAR_5->ei;
 FUNC_8(&VAR_3->extent_lock);
 if (!FUNC_4(&VAR_5->list)) {
  FUNC_5(&VAR_5->list, &VAR_3->extent_list);
  VAR_4->cached_en = VAR_5;
 }
 FUNC_9(&VAR_3->extent_lock);
 VAR_6 = 1;
out:
 FUNC_13(VAR_3);
 FUNC_7(&VAR_4->lock);

 FUNC_14(VAR_0, VAR_1, VAR_2);
 return VAR_6;
}
