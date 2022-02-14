
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_nlink; int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct extent_info {scalar_t__ blk; scalar_t__ fofs; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; int node_changed; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct f2fs_sb_info*,int,int) ;
 int FUNC_5 (struct dnode_of_data*,struct page*) ;
 int FUNC_6 (struct page*,struct page*) ;
 int FUNC_7 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_8 (struct dnode_of_data*,scalar_t__,int ) ;
 struct page* FUNC_9 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*,scalar_t__,struct extent_info*) ;
 int FUNC_12 (struct dnode_of_data*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct dnode_of_data*,struct inode*,struct page*,struct page*,int ) ;

__attribute__((used)) static int FUNC_19(struct f2fs_sb_info *VAR_8,
   struct page *VAR_9, loff_t VAR_10, unsigned VAR_11,
   block_t *VAR_12, bool *VAR_13)
{
 struct inode *VAR_14 = VAR_9->mapping->host;
 pgoff_t VAR_15 = VAR_9->index;
 struct dnode_of_data VAR_16;
 struct page *VAR_17;
 bool VAR_18 = 0;
 struct extent_info VAR_19 = {0,0,0};
 int VAR_20 = 0;
 int VAR_21;





 if (!FUNC_10(VAR_14) && VAR_11 == VAR_7 &&
     !FUNC_15(VAR_14, VAR_3) &&
     !FUNC_13(VAR_14))
  return 0;


 if (FUNC_10(VAR_14) && VAR_10 + VAR_11 > FUNC_1(VAR_14))
  VAR_21 = VAR_0;
 else
  VAR_21 = VAR_1;

 if (FUNC_10(VAR_14) ||
   (VAR_10 & VAR_6) >= FUNC_14(VAR_14)) {
  FUNC_4(VAR_8, VAR_21, 1);
  VAR_18 = 1;
 }
restart:

 VAR_17 = FUNC_9(VAR_8, VAR_14->i_ino);
 if (FUNC_0(VAR_17)) {
  VAR_20 = FUNC_2(VAR_17);
  goto unlock_out;
 }

 FUNC_18(&VAR_16, VAR_14, VAR_17, VAR_17, 0);

 if (FUNC_10(VAR_14)) {
  if (VAR_10 + VAR_11 <= FUNC_1(VAR_14)) {
   FUNC_6(VAR_9, VAR_17);
   FUNC_17(VAR_14, VAR_2);
   if (VAR_14->i_nlink)
    FUNC_16(VAR_17);
  } else {
   VAR_20 = FUNC_5(&VAR_16, VAR_9);
   if (VAR_20)
    goto out;
   if (VAR_16.data_blkaddr == VAR_5)
    VAR_20 = FUNC_7(&VAR_16, VAR_15);
  }
 } else if (VAR_18) {
  VAR_20 = FUNC_7(&VAR_16, VAR_15);
 } else {
  if (FUNC_11(VAR_14, VAR_15, &VAR_19)) {
   VAR_16.data_blkaddr = VAR_19.blk + VAR_15 - VAR_19.fofs;
  } else {

   VAR_20 = FUNC_8(&VAR_16, VAR_15, VAR_4);
   if (VAR_20 || VAR_16.data_blkaddr == VAR_5) {
    FUNC_12(&VAR_16);
    FUNC_4(VAR_8, VAR_1,
        1);
    FUNC_3(VAR_21 != VAR_1);
    VAR_18 = 1;
    goto restart;
   }
  }
 }


 *VAR_12 = VAR_16.data_blkaddr;
 *VAR_13 = VAR_16.node_changed;
out:
 FUNC_12(&VAR_16);
unlock_out:
 if (VAR_18)
  FUNC_4(VAR_8, VAR_21, 0);
 return VAR_20;
}
