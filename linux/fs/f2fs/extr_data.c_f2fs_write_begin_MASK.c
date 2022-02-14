
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ pgoff_t ;
typedef unsigned int loff_t ;
typedef scalar_t__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,scalar_t__,int ) ;
 struct page* FUNC_11 (struct address_space*,scalar_t__,int,int ) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct inode*,struct page*,scalar_t__) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct page*,int ,int,int) ;
 int FUNC_16 (struct address_space*,unsigned int) ;
 scalar_t__ FUNC_17 (struct f2fs_sb_info*,int ,int ) ;
 unsigned int FUNC_18 (struct inode*) ;
 scalar_t__ FUNC_19 (struct inode*,int ) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct f2fs_sb_info*,struct page*,unsigned int,unsigned int,scalar_t__*,int*) ;
 int FUNC_22 (struct inode*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_26(struct file *VAR_16, struct address_space *VAR_17,
  loff_t VAR_18, unsigned VAR_19, unsigned VAR_20,
  struct page **VAR_21, void **VAR_22)
{
 struct inode *VAR_23 = VAR_17->host;
 struct f2fs_sb_info *VAR_24 = FUNC_0(VAR_23);
 struct page *VAR_25 = ((void*)0);
 pgoff_t VAR_26 = ((unsigned long long) VAR_18) >> VAR_14;
 bool VAR_27 = 0, VAR_28 = 0;
 block_t VAR_29 = VAR_13;
 int VAR_30 = 0;

 FUNC_22(VAR_23, VAR_18, VAR_19, VAR_20);

 if (!FUNC_9(VAR_24)) {
  VAR_30 = -VAR_5;
  goto fail;
 }

 if ((FUNC_8(VAR_23) &&
   !FUNC_4(VAR_24, VAR_11)) ||
   FUNC_19(VAR_23, VAR_9)) {
  VAR_30 = -VAR_4;
  VAR_28 = 1;
  goto fail;
 }






 if (VAR_26 != 0) {
  VAR_30 = FUNC_6(VAR_23);
  if (VAR_30)
   goto fail;
 }
repeat:




 VAR_25 = FUNC_11(VAR_17, VAR_26,
    VAR_7 | VAR_8 | VAR_6, VAR_10);
 if (!VAR_25) {
  VAR_30 = -VAR_4;
  goto fail;
 }

 *VAR_21 = VAR_25;

 VAR_30 = FUNC_21(VAR_24, VAR_25, VAR_18, VAR_19,
     &VAR_29, &VAR_27);
 if (VAR_30)
  goto fail;

 if (VAR_27 && !FUNC_1(VAR_23) &&
   FUNC_17(VAR_24, 0, 0)) {
  FUNC_24(VAR_25);
  FUNC_5(VAR_24, 1);
  FUNC_20(VAR_25);
  if (VAR_25->mapping != VAR_17) {

   FUNC_12(VAR_25, 1);
   goto repeat;
  }
 }

 FUNC_15(VAR_25, VAR_0, 0, 1);

 if (VAR_19 == VAR_15 || FUNC_2(VAR_25))
  return 0;

 if (!(VAR_18 & (VAR_15 - 1)) && (VAR_18 + VAR_19) >= FUNC_18(VAR_23) &&
     !FUNC_14(VAR_23)) {
  FUNC_25(VAR_25, VAR_19, VAR_15);
  return 0;
 }

 if (VAR_29 == VAR_12) {
  FUNC_25(VAR_25, 0, VAR_15);
  FUNC_3(VAR_25);
 } else {
  if (!FUNC_10(VAR_24, VAR_29,
    VAR_1)) {
   VAR_30 = -VAR_2;
   goto fail;
  }
  VAR_30 = FUNC_13(VAR_23, VAR_25, VAR_29);
  if (VAR_30)
   goto fail;

  FUNC_20(VAR_25);
  if (FUNC_23(VAR_25->mapping != VAR_17)) {
   FUNC_12(VAR_25, 1);
   goto repeat;
  }
  if (FUNC_23(!FUNC_2(VAR_25))) {
   VAR_30 = -VAR_3;
   goto fail;
  }
 }
 return 0;

fail:
 FUNC_12(VAR_25, 1);
 FUNC_16(VAR_17, VAR_18 + VAR_19);
 if (VAR_28)
  FUNC_7(VAR_24, 0);
 return VAR_30;
}
