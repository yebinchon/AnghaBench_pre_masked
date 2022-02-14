
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blkbits; scalar_t__ i_sb; int i_ino; int i_mode; } ;
struct file {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {size_t p_depth; struct ext4_extent* p_ext; } ;
typedef int pgoff_t ;
typedef int ext4_lblk_t ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (struct ext4_ext_path*) ;
 int FUNC_10 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 struct inode* FUNC_12 (struct file*) ;
 int FUNC_13 (struct inode*,int,struct ext4_ext_path**) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ext4_ext_path*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct inode*,struct inode*) ;
 int FUNC_18 (struct inode*,struct inode*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_19 (struct file*,struct inode*,int,int,int,int,int,int*) ;
 int FUNC_20 (struct inode*,struct inode*) ;

int
FUNC_21(struct file *VAR_7, struct file *VAR_8, __u64 VAR_9,
    __u64 VAR_10, __u64 VAR_11, __u64 *VAR_12)
{
 struct inode *VAR_13 = FUNC_12(VAR_7);
 struct inode *VAR_14 = FUNC_12(VAR_8);
 struct ext4_ext_path *VAR_15 = ((void*)0);
 int VAR_16 = VAR_6 >> VAR_13->i_blkbits;
 ext4_lblk_t VAR_17, VAR_18 = VAR_9;
 ext4_lblk_t VAR_19 = VAR_10;
 int VAR_20;

 if (VAR_13->i_sb != VAR_14->i_sb) {
  FUNC_2("ext4 move extent: The argument files "
   "should be in same FS [ino:orig %lu, donor %lu]\n",
   VAR_13->i_ino, VAR_14->i_ino);
  return -VAR_0;
 }


 if (VAR_13 == VAR_14) {
  FUNC_2("ext4 move extent: The argument files should not "
   "be same inode [ino:orig %lu, donor %lu]\n",
   VAR_13->i_ino, VAR_14->i_ino);
  return -VAR_0;
 }


 if (!FUNC_1(VAR_13->i_mode) || !FUNC_1(VAR_14->i_mode)) {
  FUNC_2("ext4 move extent: The argument files should be "
   "regular file [ino:orig %lu, donor %lu]\n",
   VAR_13->i_ino, VAR_14->i_ino);
  return -VAR_0;
 }



 if (FUNC_11(VAR_13) ||
     FUNC_11(VAR_14)) {
  FUNC_10(VAR_13->i_sb, VAR_4,
    "Online defrag not supported with data journaling");
  return -VAR_2;
 }

 if (FUNC_0(VAR_13) || FUNC_0(VAR_14)) {
  FUNC_10(VAR_13->i_sb, VAR_4,
    "Online defrag not supported for encrypted files");
  return -VAR_2;
 }


 FUNC_17(VAR_13, VAR_14);


 FUNC_14(VAR_13);
 FUNC_14(VAR_14);


 FUNC_4(VAR_13, VAR_14);

 VAR_20 = FUNC_18(VAR_13, VAR_14, VAR_9,
        VAR_10, &VAR_11);
 if (VAR_20)
  goto out;
 VAR_17 = VAR_18 + VAR_11;

 while (VAR_18 < VAR_17) {
  struct ext4_extent *VAR_21;
  ext4_lblk_t VAR_22, VAR_23;
  pgoff_t VAR_24, VAR_25;
  int VAR_26;
  int VAR_27, VAR_28;

  VAR_20 = FUNC_13(VAR_13, VAR_18, &VAR_15);
  if (VAR_20)
   goto out;
  VAR_21 = VAR_15[VAR_15->p_depth].p_ext;
  VAR_23 = FUNC_9(VAR_15);
  VAR_22 = FUNC_16(VAR_21->ee_block);
  VAR_28 = FUNC_7(VAR_21);

  if (VAR_22 + VAR_28 - 1 < VAR_18) {
   if (VAR_23 == VAR_3) {
    VAR_18 = VAR_17;
    VAR_20 = -VAR_1;
    goto out;
   }
   VAR_19 += VAR_23 - VAR_18;
   VAR_18 = VAR_23;
   continue;

  } else if (VAR_22 > VAR_18) {

   VAR_19 += VAR_22 - VAR_18;
   VAR_18 = VAR_22;

   if (VAR_22 >= VAR_17)
    goto out;
  } else {
   VAR_28 += VAR_22 - VAR_18;
  }
  VAR_27 = FUNC_8(VAR_21);
  if (VAR_17 - VAR_18 < VAR_28)
   VAR_28 = VAR_17 - VAR_18;

  VAR_24 = VAR_18 >> (VAR_5 -
            VAR_13->i_blkbits);
  VAR_25 = VAR_19 >> (VAR_5 -
            VAR_14->i_blkbits);
  VAR_26 = VAR_18 % VAR_16;
  if (VAR_28 > VAR_16- VAR_26)
   VAR_28 = VAR_16 - VAR_26;







  FUNC_5(VAR_13, VAR_14);

  FUNC_19(VAR_7, VAR_14,
         VAR_24, VAR_25,
         VAR_26, VAR_28,
         VAR_27, &VAR_20);
  FUNC_4(VAR_13, VAR_14);
  if (VAR_20 < 0)
   break;
  VAR_18 += VAR_28;
  VAR_19 += VAR_28;
 }
 *VAR_12 = VAR_18 - VAR_9;
 if (*VAR_12 > VAR_11)
  *VAR_12 = VAR_11;

out:
 if (*VAR_12) {
  FUNC_3(VAR_13);
  FUNC_3(VAR_14);
 }

 FUNC_6(VAR_15);
 FUNC_15(VAR_15);
 FUNC_5(VAR_13, VAR_14);
 FUNC_20(VAR_13, VAR_14);

 return VAR_20;
}
