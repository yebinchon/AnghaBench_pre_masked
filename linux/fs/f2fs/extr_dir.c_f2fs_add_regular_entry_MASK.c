
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct qstr {int len; } ;
struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_dentry_ptr {int dummy; } ;
struct f2fs_dentry_block {int dentry_bitmap; } ;
typedef int nid_t ;
typedef scalar_t__ f2fs_hash_t ;
struct TYPE_2__ {unsigned int i_current_depth; scalar_t__ chash; unsigned int clevel; int i_sem; int i_dir_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_4 (struct page*) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned long FUNC_6 (unsigned int,int ,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct inode*,struct qstr const*,int *) ;
 struct page* FUNC_10 (struct inode*,int *,unsigned long,int) ;
 int FUNC_11 (struct inode*,int ) ;
 struct page* FUNC_12 (struct inode*,struct inode*,struct qstr const*,struct qstr const*,int *) ;
 int FUNC_13 (struct page*,int) ;
 unsigned int FUNC_14 (int *,int,unsigned int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,struct f2fs_dentry_ptr*,struct qstr const*,scalar_t__,unsigned int) ;
 int FUNC_17 (struct inode*,struct page*) ;
 int FUNC_18 (struct inode*,struct inode*,unsigned int) ;
 int FUNC_19 (struct page*,int ,int,int) ;
 scalar_t__ FUNC_20 (struct inode*,int ) ;
 unsigned int FUNC_21 (scalar_t__) ;
 int FUNC_22 (int *,struct f2fs_dentry_ptr*,struct f2fs_dentry_block*) ;
 struct f2fs_dentry_block* FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (int *) ;

int FUNC_28(struct inode *VAR_6, const struct qstr *VAR_7,
    const struct qstr *VAR_8,
    struct inode *VAR_9, nid_t VAR_10, umode_t VAR_11)
{
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned long VAR_15, VAR_16;
 f2fs_hash_t VAR_17;
 unsigned int VAR_18, VAR_19;
 struct page *VAR_20 = ((void*)0);
 struct f2fs_dentry_block *VAR_21 = ((void*)0);
 struct f2fs_dentry_ptr VAR_22;
 struct page *VAR_23 = ((void*)0);
 int VAR_24, VAR_25 = 0;

 VAR_13 = 0;
 VAR_24 = FUNC_2(VAR_7->len);
 VAR_17 = FUNC_9(VAR_6, VAR_7, ((void*)0));

 VAR_14 = FUNC_0(VAR_6)->i_current_depth;
 if (FUNC_0(VAR_6)->chash == VAR_17) {
  VAR_13 = FUNC_0(VAR_6)->clevel;
  FUNC_0(VAR_6)->chash = 0;
 }

start:
 if (FUNC_25(FUNC_1(VAR_6), VAR_2)) {
  FUNC_15(VAR_2);
  return -VAR_1;
 }

 if (FUNC_26(VAR_14 == VAR_4))
  return -VAR_1;


 if (VAR_13 == VAR_14)
  ++VAR_14;

 VAR_18 = FUNC_7(VAR_13, FUNC_0(VAR_6)->i_dir_level);
 VAR_19 = FUNC_5(VAR_13);

 VAR_15 = FUNC_6(VAR_13, FUNC_0(VAR_6)->i_dir_level,
    (FUNC_21(VAR_17) % VAR_18));

 for (VAR_16 = VAR_15; VAR_16 <= (VAR_15 + VAR_19 - 1); VAR_16++) {
  VAR_20 = FUNC_10(VAR_6, ((void*)0), VAR_16, 1);
  if (FUNC_3(VAR_20))
   return FUNC_4(VAR_20);

  VAR_21 = FUNC_23(VAR_20);
  VAR_12 = FUNC_14(&VAR_21->dentry_bitmap,
      VAR_24, VAR_5);
  if (VAR_12 < VAR_5)
   goto add_dentry;

  FUNC_13(VAR_20, 1);
 }


 ++VAR_13;
 goto start;
add_dentry:
 FUNC_19(VAR_20, VAR_0, 1, 1);

 if (VAR_9) {
  FUNC_8(&FUNC_0(VAR_9)->i_sem);
  VAR_23 = FUNC_12(VAR_9, VAR_6, VAR_7,
      VAR_8, ((void*)0));
  if (FUNC_3(VAR_23)) {
   VAR_25 = FUNC_4(VAR_23);
   goto fail;
  }
 }

 FUNC_22(((void*)0), &VAR_22, VAR_21);
 FUNC_16(VAR_10, VAR_11, &VAR_22, VAR_7, VAR_17, VAR_12);

 FUNC_24(VAR_20);

 if (VAR_9) {
  FUNC_11(VAR_9, VAR_6->i_ino);


  if (FUNC_20(VAR_9, VAR_3))
   FUNC_17(VAR_9, VAR_23);

  FUNC_13(VAR_23, 1);
 }

 FUNC_18(VAR_6, VAR_9, VAR_14);
fail:
 if (VAR_9)
  FUNC_27(&FUNC_0(VAR_9)->i_sem);

 FUNC_13(VAR_20, 1);

 return VAR_25;
}
