
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {scalar_t__* i_nid; } ;
struct dnode_of_data {int nid; } ;
typedef int pgoff_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct f2fs_inode* FUNC_2 (struct page*) ;
 struct f2fs_sb_info* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct page*,int ) ;
 int FUNC_9 (struct page*,int ,int,int) ;
 int FUNC_10 (struct inode*,int ,int*,int*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct dnode_of_data*,struct inode*,struct page*,int *,int ) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct dnode_of_data*) ;
 int FUNC_18 (struct dnode_of_data*,unsigned int,int,int) ;
 int FUNC_19 (struct dnode_of_data*,struct f2fs_inode*,int*,int) ;
 int FUNC_20 (struct page*) ;

int FUNC_21(struct inode *VAR_3, pgoff_t VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = 0, VAR_7 = 1;
 int VAR_8, VAR_9[4], VAR_10[4];
 unsigned int VAR_11 = 0;
 struct f2fs_inode *VAR_12;
 struct dnode_of_data VAR_13;
 struct page *VAR_14;

 FUNC_15(VAR_3, VAR_4);

 VAR_8 = FUNC_10(VAR_3, VAR_4, VAR_9, VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_14 = FUNC_7(VAR_5, VAR_3->i_ino);
 if (FUNC_4(VAR_14)) {
  FUNC_16(VAR_3, FUNC_6(VAR_14));
  return FUNC_6(VAR_14);
 }

 FUNC_13(&VAR_13, VAR_3, VAR_14, ((void*)0), 0);
 FUNC_20(VAR_14);

 VAR_12 = FUNC_2(VAR_14);
 switch (VAR_8) {
 case 0:
 case 1:
  VAR_11 = VAR_10[1];
  break;
 case 2:
  VAR_11 = VAR_10[1];
  if (!VAR_9[VAR_8 - 1])
   goto skip_partial;
  VAR_6 = FUNC_19(&VAR_13, VAR_12, VAR_9, VAR_8);
  if (VAR_6 < 0 && VAR_6 != -VAR_0)
   goto fail;
  VAR_11 += 1 + VAR_1;
  break;
 case 3:
  VAR_11 = 5 + 2 * VAR_1;
  if (!VAR_9[VAR_8 - 1])
   goto skip_partial;
  VAR_6 = FUNC_19(&VAR_13, VAR_12, VAR_9, VAR_8);
  if (VAR_6 < 0 && VAR_6 != -VAR_0)
   goto fail;
  break;
 default:
  FUNC_0();
 }

skip_partial:
 while (VAR_7) {
  VAR_13.nid = FUNC_11(VAR_12->i_nid[VAR_9[0] - 131]);
  switch (VAR_9[0]) {
  case 131:
  case 130:
   VAR_6 = FUNC_17(&VAR_13);
   break;

  case 129:
  case 128:
   VAR_6 = FUNC_18(&VAR_13, VAR_11, VAR_9[1], 2);
   break;

  case 132:
   VAR_6 = FUNC_18(&VAR_13, VAR_11, VAR_9[1], 3);
   VAR_7 = 0;
   break;

  default:
   FUNC_0();
  }
  if (VAR_6 < 0 && VAR_6 != -VAR_0)
   goto fail;
  if (VAR_9[1] == 0 &&
    VAR_12->i_nid[VAR_9[0] - 131]) {
   FUNC_12(VAR_14);
   FUNC_1(VAR_14->mapping != FUNC_5(VAR_5));
   FUNC_9(VAR_14, VAR_2, 1, 1);
   VAR_12->i_nid[VAR_9[0] - 131] = 0;
   FUNC_14(VAR_14);
   FUNC_20(VAR_14);
  }
  VAR_9[1] = 0;
  VAR_9[0]++;
  VAR_11 += VAR_6;
 }
fail:
 FUNC_8(VAR_14, 0);
 FUNC_16(VAR_3, VAR_6);
 return VAR_6 > 0 ? 0 : VAR_6;
}
