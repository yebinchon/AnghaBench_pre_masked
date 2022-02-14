
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct qstr {int len; } ;
struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_dentry_ptr {unsigned int max; int bitmap; } ;
typedef int nid_t ;
typedef int f2fs_hash_t ;
struct TYPE_2__ {int i_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_2 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct page*,void*) ;
 int FUNC_7 (struct inode*,struct qstr const*,int *) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 struct page* FUNC_10 (struct inode*,struct inode*,struct qstr const*,struct qstr const*,struct page*) ;
 int FUNC_11 (struct page*,int) ;
 unsigned int FUNC_12 (int ,int,unsigned int) ;
 int FUNC_13 (int ,int ,struct f2fs_dentry_ptr*,struct qstr const*,int ,unsigned int) ;
 int FUNC_14 (struct inode*,struct page*) ;
 int FUNC_15 (struct inode*,struct inode*,int ) ;
 int FUNC_16 (struct page*,int ,int,int) ;
 void* FUNC_17 (struct inode*,struct page*) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_3, const struct qstr *VAR_4,
    const struct qstr *VAR_5,
    struct inode *VAR_6, nid_t VAR_7, umode_t VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_1(VAR_3);
 struct page *VAR_10;
 unsigned int VAR_11;
 f2fs_hash_t VAR_12;
 void *VAR_13 = ((void*)0);
 struct f2fs_dentry_ptr VAR_14;
 int VAR_15 = FUNC_2(VAR_4->len);
 struct page *VAR_16 = ((void*)0);
 int VAR_17 = 0;

 VAR_10 = FUNC_8(VAR_9, VAR_3->i_ino);
 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);

 VAR_13 = FUNC_17(VAR_3, VAR_10);
 FUNC_19(VAR_3, &VAR_14, VAR_13);

 VAR_11 = FUNC_12(VAR_14.bitmap, VAR_15, VAR_14.max);
 if (VAR_11 >= VAR_14.max) {
  VAR_17 = FUNC_6(VAR_3, VAR_10, VAR_13);
  if (VAR_17)
   return VAR_17;
  VAR_17 = -VAR_0;
  goto out;
 }

 if (VAR_6) {
  FUNC_5(&FUNC_0(VAR_6)->i_sem);
  VAR_16 = FUNC_10(VAR_6, VAR_3, VAR_4,
      VAR_5, VAR_10);
  if (FUNC_3(VAR_16)) {
   VAR_17 = FUNC_4(VAR_16);
   goto fail;
  }
 }

 FUNC_16(VAR_10, VAR_2, 1, 1);

 VAR_12 = FUNC_7(VAR_3, VAR_4, ((void*)0));
 FUNC_13(VAR_7, VAR_8, &VAR_14, VAR_4, VAR_12, VAR_11);

 FUNC_20(VAR_10);


 if (VAR_6) {
  FUNC_9(VAR_6, VAR_3->i_ino);


  if (FUNC_18(VAR_6, VAR_1))
   FUNC_14(VAR_6, VAR_16);

  FUNC_11(VAR_16, 1);
 }

 FUNC_15(VAR_3, VAR_6, 0);
fail:
 if (VAR_6)
  FUNC_21(&FUNC_0(VAR_6)->i_sem);
out:
 FUNC_11(VAR_10, 1);
 return VAR_17;
}
