
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_info {scalar_t__ blk_addr; int ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int i_inline; int i_crtime_nsec; int i_crtime; int i_extra_isize; int i_projid; int i_inline_xattr_size; scalar_t__ i_xattr_nid; int i_links; int i_blocks; scalar_t__ i_size; int i_ext; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct f2fs_inode*,int ,int ) ;
 int VAR_3 ;
 struct f2fs_inode* FUNC_1 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,struct node_info*) ;
 struct page* FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct page*,int) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_14 (struct f2fs_sb_info*) ;
 int FUNC_15 (struct page*,int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct f2fs_sb_info*) ;
 int FUNC_17 (struct f2fs_sb_info*,int *,int) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct f2fs_inode*,struct f2fs_inode*,unsigned long) ;
 int FUNC_21 (struct f2fs_sb_info*,int ) ;
 int FUNC_22 (struct page*,int) ;
 int FUNC_23 (struct f2fs_sb_info*,struct node_info*,int ,int) ;
 int FUNC_24 (struct page*) ;
 scalar_t__ FUNC_25 (int) ;

int FUNC_26(struct f2fs_sb_info *VAR_10, struct page *VAR_11)
{
 struct f2fs_inode *VAR_12, *VAR_13;
 nid_t VAR_14 = FUNC_18(VAR_11);
 struct node_info VAR_15, VAR_16;
 struct page *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_9(VAR_10, VAR_14, &VAR_15);
 if (VAR_18)
  return VAR_18;

 if (FUNC_25(VAR_15.blk_addr != VAR_6))
  return -VAR_1;
retry:
 VAR_17 = FUNC_10(FUNC_2(VAR_10), VAR_14, 0);
 if (!VAR_17) {
  FUNC_6(VAR_0, VAR_4/50);
  goto retry;
 }


 FUNC_21(VAR_10, VAR_14);

 if (!FUNC_3(VAR_17))
  FUNC_4(VAR_17);
 FUNC_15(VAR_17, VAR_14, VAR_14, 0, 1);
 FUNC_22(VAR_17, 0);

 VAR_12 = FUNC_1(VAR_11);
 VAR_13 = FUNC_1(VAR_17);

 FUNC_20(VAR_13, VAR_12, (unsigned long)&VAR_12->i_ext - (unsigned long)VAR_12);
 VAR_13->i_size = 0;
 VAR_13->i_blocks = FUNC_8(1);
 VAR_13->i_links = FUNC_7(1);
 VAR_13->i_xattr_nid = 0;
 VAR_13->i_inline = VAR_12->i_inline & (VAR_3 | VAR_2);
 if (VAR_13->i_inline & VAR_2) {
  VAR_13->i_extra_isize = VAR_12->i_extra_isize;

  if (FUNC_12(VAR_10) &&
   FUNC_0(VAR_12, FUNC_19(VAR_12->i_extra_isize),
       VAR_8))
   VAR_13->i_inline_xattr_size = VAR_12->i_inline_xattr_size;

  if (FUNC_14(VAR_10) &&
   FUNC_0(VAR_12, FUNC_19(VAR_12->i_extra_isize),
        VAR_9))
   VAR_13->i_projid = VAR_12->i_projid;

  if (FUNC_13(VAR_10) &&
   FUNC_0(VAR_12, FUNC_19(VAR_12->i_extra_isize),
       VAR_7)) {
   VAR_13->i_crtime = VAR_12->i_crtime;
   VAR_13->i_crtime_nsec = VAR_12->i_crtime_nsec;
  }
 }

 VAR_16 = VAR_15;
 VAR_16.ino = VAR_14;

 if (FUNC_25(FUNC_17(VAR_10, ((void*)0), 1)))
  FUNC_5(1);
 FUNC_23(VAR_10, &VAR_16, VAR_5, 0);
 FUNC_16(VAR_10);
 FUNC_24(VAR_17);
 FUNC_11(VAR_17, 1);
 return 0;
}
