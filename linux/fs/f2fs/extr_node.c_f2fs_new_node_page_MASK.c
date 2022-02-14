
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct node_info {scalar_t__ blk_addr; scalar_t__ version; scalar_t__ flag; int ino; int nid; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int node_changed; int nid; TYPE_1__* inode; } ;
struct TYPE_6__ {int i_mode; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 struct f2fs_sb_info* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct f2fs_sb_info*,TYPE_1__*,int) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,struct node_info*) ;
 struct page* FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct page*,int ,int,int) ;
 int FUNC_15 (struct page*,int ,int ,unsigned int,int) ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*,TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (struct page*,int ) ;
 int FUNC_20 (struct f2fs_sb_info*,struct node_info*,int ,int) ;
 scalar_t__ FUNC_21 (struct page*) ;
 scalar_t__ FUNC_22 (int) ;

struct page *FUNC_23(struct dnode_of_data *VAR_6, unsigned int VAR_7)
{
 struct f2fs_sb_info *VAR_8 = FUNC_1(VAR_6->inode);
 struct node_info VAR_9;
 struct page *VAR_10;
 int VAR_11;

 if (FUNC_22(FUNC_18(VAR_6->inode, VAR_2)))
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_10(FUNC_2(VAR_8), VAR_6->nid, 0);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 if (FUNC_22((VAR_11 = FUNC_17(VAR_8, VAR_6->inode, !VAR_7))))
  goto fail;
 VAR_9.nid = VAR_6->nid;
 VAR_9.ino = VAR_6->inode->i_ino;
 VAR_9.blk_addr = VAR_5;
 VAR_9.flag = 0;
 VAR_9.version = 0;
 FUNC_20(VAR_8, &VAR_9, VAR_3, 0);

 FUNC_14(VAR_10, VAR_4, 1, 1);
 FUNC_15(VAR_10, VAR_6->nid, VAR_6->inode->i_ino, VAR_7, 1);
 FUNC_19(VAR_10, FUNC_4(VAR_6->inode->i_mode));
 if (!FUNC_3(VAR_10))
  FUNC_5(VAR_10);
 if (FUNC_21(VAR_10))
  VAR_6->node_changed = 1;

 if (FUNC_11(VAR_7))
  FUNC_12(VAR_6->inode, VAR_6->nid);

 if (VAR_7 == 0)
  FUNC_16(VAR_8);
 return VAR_10;

fail:
 FUNC_6(VAR_10);
 FUNC_13(VAR_10, 1);
 return FUNC_0(VAR_11);
}
