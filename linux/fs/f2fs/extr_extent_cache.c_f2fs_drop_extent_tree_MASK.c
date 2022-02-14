
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct extent_tree {int lock; TYPE_1__ largest; } ;
struct TYPE_4__ {struct extent_tree* extent_tree; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct f2fs_sb_info*,struct extent_tree*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct inode *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_1(VAR_1);
 struct extent_tree *VAR_3 = FUNC_0(VAR_1)->extent_tree;
 bool VAR_4 = 0;

 if (!FUNC_4(VAR_1))
  return;

 FUNC_5(VAR_1, VAR_0);

 FUNC_6(&VAR_3->lock);
 FUNC_2(VAR_2, VAR_3);
 if (VAR_3->largest.len) {
  VAR_3->largest.len = 0;
  VAR_4 = 1;
 }
 FUNC_7(&VAR_3->lock);
 if (VAR_4)
  FUNC_3(VAR_1, 1);
}
