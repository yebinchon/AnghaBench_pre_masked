
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct node_info {int blk_addr; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {scalar_t__ nid; TYPE_1__* inode; TYPE_2__* node_page; } ;
typedef int pgoff_t ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {scalar_t__ i_ino; } ;


 struct f2fs_sb_info* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,TYPE_1__*,int) ;
 int FUNC_5 (struct f2fs_sb_info*,scalar_t__,struct node_info*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,struct node_info*,int ,int) ;
 int FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(struct dnode_of_data *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_2->inode);
 struct node_info VAR_4;
 int VAR_5;
 pgoff_t VAR_6;

 VAR_5 = FUNC_5(VAR_3, VAR_2->nid, &VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_7(VAR_3, VAR_4.blk_addr);
 FUNC_4(VAR_3, VAR_2->inode, VAR_2->nid == VAR_2->inode->i_ino);
 FUNC_11(VAR_3, &VAR_4, VAR_0, 0);

 if (VAR_2->nid == VAR_2->inode->i_ino) {
  FUNC_9(VAR_3, VAR_2->nid);
  FUNC_3(VAR_3);
  FUNC_6(VAR_2->inode);
 }

 FUNC_2(VAR_2->node_page);
 FUNC_12(VAR_3, VAR_1);

 VAR_6 = VAR_2->node_page->index;
 FUNC_8(VAR_2->node_page, 1);

 FUNC_10(FUNC_1(VAR_3),
   VAR_6, VAR_6);

 VAR_2->node_page = ((void*)0);
 FUNC_13(VAR_2->inode, VAR_2->nid, VAR_4.blk_addr);

 return 0;
}
