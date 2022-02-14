
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned int i_ino; int i_sb; } ;
struct fscrypt_str {int len; int name; } ;
struct file {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct ext4_dir_entry_2 {scalar_t__ inode; int name_len; int name; void* rec_len; } ;
struct dx_hash_info {scalar_t__ hash; scalar_t__ minor_hash; } ;
typedef int ext4_lblk_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int xattr_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct inode*,struct file*,struct ext4_dir_entry_2*,int ,void*,int,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct ext4_iloc*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct file*,scalar_t__,scalar_t__,struct ext4_dir_entry_2*,struct fscrypt_str*) ;
 int FUNC_10 (struct inode*,void*,int,struct ext4_iloc*) ;
 scalar_t__ FUNC_11 (void*,int) ;
 void* FUNC_12 (int ,int) ;
 int FUNC_13 (int ,struct ext4_dir_entry_2*,int ) ;
 int FUNC_14 (struct inode*,int ,int,struct dx_hash_info*) ;
 struct inode* FUNC_15 (struct file*) ;
 int FUNC_16 (void*) ;
 void* FUNC_17 (int,int ) ;
 unsigned int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct file *VAR_5,
      struct inode *VAR_6, ext4_lblk_t VAR_7,
      struct dx_hash_info *VAR_8,
      __u32 VAR_9, __u32 VAR_10,
      int *VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0;
 unsigned int VAR_14;
 int VAR_15;
 struct ext4_dir_entry_2 *VAR_16;
 struct inode *VAR_17 = FUNC_15(VAR_5);
 int VAR_18, VAR_19 = 0;
 struct ext4_iloc VAR_20;
 void *VAR_21 = ((void*)0);
 struct ext4_dir_entry_2 VAR_22;
 struct fscrypt_str VAR_23;

 VAR_18 = FUNC_7(VAR_17, &VAR_20);
 if (VAR_18)
  return VAR_18;

 FUNC_4(&FUNC_1(VAR_17)->xattr_sem);
 if (!FUNC_8(VAR_17)) {
  FUNC_20(&FUNC_1(VAR_17)->xattr_sem);
  *VAR_11 = 0;
  goto out;
 }

 VAR_19 = FUNC_6(VAR_17);
 VAR_21 = FUNC_17(VAR_19, VAR_3);
 if (!VAR_21) {
  VAR_18 = -VAR_0;
  FUNC_20(&FUNC_1(VAR_17)->xattr_sem);
  goto out;
 }

 VAR_18 = FUNC_10(VAR_17, VAR_21, VAR_19, &VAR_20);
 FUNC_20(&FUNC_1(VAR_17)->xattr_sem);
 if (VAR_18 < 0)
  goto out;

 VAR_15 = 0;
 VAR_14 = FUNC_18(((struct ext4_dir_entry_2 *)VAR_21)->inode);
 while (VAR_15 < VAR_19) {





  if (VAR_15 == 0) {
   VAR_22.inode = FUNC_3(VAR_17->i_ino);
   VAR_22.name_len = 1;
   FUNC_19(VAR_22.name, ".");
   VAR_22.rec_len = FUNC_12(
      FUNC_0(VAR_22.name_len),
      VAR_19);
   FUNC_13(VAR_17->i_sb, &VAR_22, VAR_4);
   VAR_16 = &VAR_22;
   VAR_15 = VAR_1;
  } else if (VAR_15 == VAR_1) {
   VAR_22.inode = FUNC_3(VAR_14);
   VAR_22.name_len = 2;
   FUNC_19(VAR_22.name, "..");
   VAR_22.rec_len = FUNC_12(
      FUNC_0(VAR_22.name_len),
      VAR_19);
   FUNC_13(VAR_17->i_sb, &VAR_22, VAR_4);
   VAR_16 = &VAR_22;
   VAR_15 = VAR_2;
  } else {
   VAR_16 = (struct ext4_dir_entry_2 *)(VAR_21 + VAR_15);
   VAR_15 += FUNC_11(VAR_16->rec_len, VAR_19);
   if (FUNC_5(VAR_17, VAR_5, VAR_16,
      VAR_20.bh, VAR_21,
      VAR_19, VAR_15)) {
    VAR_18 = VAR_13;
    goto out;
   }
  }

  FUNC_14(VAR_6, VAR_16->name, VAR_16->name_len, VAR_8);
  if ((VAR_8->hash < VAR_9) ||
      ((VAR_8->hash == VAR_9) &&
       (VAR_8->minor_hash < VAR_10)))
   continue;
  if (VAR_16->inode == 0)
   continue;
  VAR_23.name = VAR_16->name;
  VAR_23.len = VAR_16->name_len;
  VAR_12 = FUNC_9(VAR_5, VAR_8->hash,
           VAR_8->minor_hash, VAR_16, &VAR_23);
  if (VAR_12) {
   VAR_18 = VAR_12;
   goto out;
  }
  VAR_13++;
 }
 VAR_18 = VAR_13;
out:
 FUNC_16(VAR_21);
 FUNC_2(VAR_20.bh);
 return VAR_18;
}
