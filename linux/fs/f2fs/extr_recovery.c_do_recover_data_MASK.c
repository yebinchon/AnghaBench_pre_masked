
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_info {scalar_t__ ino; int version; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {struct page* node_page; int nid; int ofs_in_node; int inode; } ;
typedef int loff_t ;
typedef scalar_t__ block_t ;


 unsigned int FUNC_0 (struct page*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct f2fs_sb_info*,scalar_t__,struct dnode_of_data*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct page*,struct page*) ;
 scalar_t__ FUNC_7 (int ,struct page*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct dnode_of_data*,unsigned int,int ) ;
 int FUNC_10 (struct f2fs_sb_info*,int ,struct node_info*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct inode*,int) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_14 (struct f2fs_sb_info*,char*,int ,char*,int,int) ;
 int FUNC_15 (struct dnode_of_data*) ;
 scalar_t__ FUNC_16 (struct inode*,struct page*) ;
 int FUNC_17 (struct inode*,struct page*) ;
 int FUNC_18 (struct inode*,struct page*) ;
 int FUNC_19 (struct f2fs_sb_info*,struct dnode_of_data*,scalar_t__,scalar_t__,int ,int,int) ;
 int FUNC_20 (struct dnode_of_data*) ;
 unsigned int FUNC_21 (scalar_t__,struct inode*) ;
 int FUNC_22 (struct dnode_of_data*,int) ;
 int FUNC_23 (struct page*,int ,int,int) ;
 int FUNC_24 (struct f2fs_sb_info*,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (struct inode*) ;
 int FUNC_26 (struct page*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_27 (struct inode*) ;
 scalar_t__ FUNC_28 (struct page*) ;
 scalar_t__ FUNC_29 (struct page*) ;
 int FUNC_30 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_31 (struct page*) ;

__attribute__((used)) static int FUNC_32(struct f2fs_sb_info *VAR_11, struct inode *VAR_12,
     struct page *VAR_13)
{
 struct dnode_of_data VAR_14;
 struct node_info VAR_15;
 unsigned int VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 0;


 if (FUNC_2(VAR_13)) {
  FUNC_17(VAR_12, VAR_13);
 } else if (FUNC_11(FUNC_29(VAR_13))) {
  VAR_18 = FUNC_18(VAR_12, VAR_13);
  if (!VAR_18)
   VAR_19++;
  goto out;
 }


 if (FUNC_16(VAR_12, VAR_13))
  goto out;


 VAR_16 = FUNC_21(FUNC_29(VAR_13), VAR_12);
 VAR_17 = VAR_16 + FUNC_0(VAR_13, VAR_12);

 FUNC_30(&VAR_14, VAR_12, ((void*)0), ((void*)0), 0);
retry_dn:
 VAR_18 = FUNC_9(&VAR_14, VAR_16, VAR_0);
 if (VAR_18) {
  if (VAR_18 == -VAR_4) {
   FUNC_5(VAR_1, VAR_5/50);
   goto retry_dn;
  }
  goto out;
 }

 FUNC_23(VAR_14.node_page, VAR_8, 1, 1);

 VAR_18 = FUNC_10(VAR_11, VAR_14.nid, &VAR_15);
 if (VAR_18)
  goto err;

 FUNC_8(VAR_11, VAR_15.ino != FUNC_28(VAR_13));

 if (FUNC_29(VAR_14.node_page) != FUNC_29(VAR_13)) {
  FUNC_24(VAR_11, "Inconsistent ofs_of_node, ino:%lu, ofs:%u, %u",
     VAR_12->i_ino, FUNC_29(VAR_14.node_page),
     FUNC_29(VAR_13));
  VAR_18 = -VAR_3;
  goto err;
 }

 for (; VAR_16 < VAR_17; VAR_16++, VAR_14.ofs_in_node++) {
  block_t VAR_20, VAR_21;

  VAR_20 = FUNC_7(VAR_14.inode, VAR_14.node_page, VAR_14.ofs_in_node);
  VAR_21 = FUNC_7(VAR_14.inode, VAR_13, VAR_14.ofs_in_node);

  if (FUNC_3(VAR_20) &&
   !FUNC_13(VAR_11, VAR_20, VAR_6)) {
   VAR_18 = -VAR_3;
   goto err;
  }

  if (FUNC_3(VAR_21) &&
   !FUNC_13(VAR_11, VAR_21, VAR_6)) {
   VAR_18 = -VAR_3;
   goto err;
  }


  if (VAR_20 == VAR_21)
   continue;


  if (VAR_21 == VAR_9) {
   FUNC_22(&VAR_14, 1);
   continue;
  }

  if (!FUNC_25(VAR_12) &&
   (FUNC_27(VAR_12) <= ((loff_t)VAR_16 << VAR_10)))
   FUNC_12(VAR_12,
    (loff_t)(VAR_16 + 1) << VAR_10);





  if (VAR_21 == VAR_7) {
   FUNC_22(&VAR_14, 1);
   FUNC_20(&VAR_14);
   continue;
  }


  if (FUNC_13(VAR_11, VAR_21, VAR_6)) {

   if (VAR_20 == VAR_9) {
    VAR_18 = FUNC_20(&VAR_14);
    while (VAR_18 &&
           FUNC_1(VAR_2))
     VAR_18 = FUNC_20(&VAR_14);

    FUNC_8(VAR_11, VAR_18);
    if (VAR_18)
     goto err;
   }
retry_prev:

   VAR_18 = FUNC_4(VAR_11, VAR_21, &VAR_14);
   if (VAR_18) {
    if (VAR_18 == -VAR_4) {
     FUNC_5(VAR_1, VAR_5/50);
     goto retry_prev;
    }
    goto err;
   }


   FUNC_19(VAR_11, &VAR_14, VAR_20, VAR_21,
      VAR_15.version, 0, 0);
   VAR_19++;
  }
 }

 FUNC_6(VAR_14.node_page, VAR_13);
 FUNC_26(VAR_14.node_page, VAR_14.nid, VAR_15.ino,
     FUNC_29(VAR_13), 0);
 FUNC_31(VAR_14.node_page);
err:
 FUNC_15(&VAR_14);
out:
 FUNC_14(VAR_11, "recover_data: ino = %lx (i_size: %s) recovered = %d, err = %d",
      VAR_12->i_ino, FUNC_25(VAR_12) ? "keep" : "recover",
      VAR_19, VAR_18);
 return VAR_18;
}
