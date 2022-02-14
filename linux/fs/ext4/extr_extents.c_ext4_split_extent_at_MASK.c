
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent* p_ext; } ;
typedef int orig_ex ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (int *,struct inode*,struct ext4_ext_path**,struct ext4_extent*,int) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (struct ext4_extent*) ;
 scalar_t__ FUNC_10 (struct ext4_extent*) ;
 int FUNC_11 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_12 (struct ext4_extent*,scalar_t__) ;
 int FUNC_13 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_14 (struct inode*,struct ext4_extent*) ;
 int FUNC_15 (struct inode*,struct ext4_extent*) ;
 int FUNC_16 (char*,int ,unsigned long long) ;
 unsigned int FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct ext4_extent*,struct ext4_extent*,int) ;

__attribute__((used)) static int FUNC_20(handle_t *VAR_7,
        struct inode *VAR_8,
        struct ext4_ext_path **VAR_9,
        ext4_lblk_t VAR_10,
        int VAR_11,
        int VAR_12)
{
 struct ext4_ext_path *VAR_13 = *VAR_9;
 ext4_fsblk_t VAR_14;
 ext4_lblk_t VAR_15;
 struct ext4_extent *VAR_16, VAR_17, VAR_18, VAR_19;
 struct ext4_extent *VAR_20 = ((void*)0);
 unsigned int VAR_21, VAR_22;
 int VAR_23 = 0;

 FUNC_0((VAR_11 & (VAR_1 | VAR_2)) ==
        (VAR_1 | VAR_2));

 FUNC_16("ext4_split_extents_at: inode %lu, logical"
  "block %llu\n", VAR_8->i_ino, (unsigned long long)VAR_10);

 FUNC_11(VAR_8, VAR_13);

 VAR_22 = FUNC_17(VAR_8);
 VAR_16 = VAR_13[VAR_22].p_ext;
 VAR_15 = FUNC_18(VAR_16->ee_block);
 VAR_21 = FUNC_5(VAR_16);
 VAR_14 = VAR_10 - VAR_15 + FUNC_10(VAR_16);

 FUNC_0(VAR_10 < VAR_15 || VAR_10 >= (VAR_15 + VAR_21));
 FUNC_0(!FUNC_7(VAR_16) &&
        VAR_11 & (VAR_5 |
        VAR_3 |
        VAR_4));

 VAR_23 = FUNC_4(VAR_7, VAR_8, VAR_13 + VAR_22);
 if (VAR_23)
  goto out;

 if (VAR_10 == VAR_15) {





  if (VAR_11 & VAR_4)
   FUNC_9(VAR_16);
  else
   FUNC_8(VAR_16);

  if (!(VAR_12 & VAR_6))
   FUNC_13(VAR_7, VAR_8, VAR_13, VAR_16);

  VAR_23 = FUNC_3(VAR_7, VAR_8, VAR_13 + VAR_13->p_depth);
  goto out;
 }


 FUNC_19(&VAR_18, VAR_16, sizeof(VAR_18));
 VAR_16->ee_len = FUNC_1(VAR_10 - VAR_15);
 if (VAR_11 & VAR_3)
  FUNC_9(VAR_16);





 VAR_23 = FUNC_3(VAR_7, VAR_8, VAR_13 + VAR_22);
 if (VAR_23)
  goto fix_extent_len;

 VAR_20 = &VAR_17;
 VAR_20->ee_block = FUNC_2(VAR_10);
 VAR_20->ee_len = FUNC_1(VAR_21 - (VAR_10 - VAR_15));
 FUNC_12(VAR_20, VAR_14);
 if (VAR_11 & VAR_4)
  FUNC_9(VAR_20);

 VAR_23 = FUNC_6(VAR_7, VAR_8, VAR_9, &VAR_17, VAR_12);
 if (VAR_23 == -VAR_0 && (VAR_5 & VAR_11)) {
  if (VAR_11 & (VAR_1|VAR_2)) {
   if (VAR_11 & VAR_1) {
    VAR_23 = FUNC_14(VAR_8, VAR_20);
    VAR_19.ee_block = VAR_20->ee_block;
    VAR_19.ee_len = FUNC_1(
      FUNC_5(VAR_20));
    FUNC_12(&VAR_19,
            FUNC_10(VAR_20));
   } else {
    VAR_23 = FUNC_14(VAR_8, VAR_16);
    VAR_19.ee_block = VAR_16->ee_block;
    VAR_19.ee_len = FUNC_1(
      FUNC_5(VAR_16));
    FUNC_12(&VAR_19,
            FUNC_10(VAR_16));
   }
  } else {
   VAR_23 = FUNC_14(VAR_8, &VAR_18);
   VAR_19.ee_block = VAR_18.ee_block;
   VAR_19.ee_len = FUNC_1(
      FUNC_5(&VAR_18));
   FUNC_12(&VAR_19,
           FUNC_10(&VAR_18));
  }

  if (VAR_23)
   goto fix_extent_len;

  VAR_16->ee_len = FUNC_1(VAR_21);
  FUNC_13(VAR_7, VAR_8, VAR_13, VAR_16);
  VAR_23 = FUNC_3(VAR_7, VAR_8, VAR_13 + VAR_13->p_depth);
  if (VAR_23)
   goto fix_extent_len;


  VAR_23 = FUNC_15(VAR_8, &VAR_19);

  goto out;
 } else if (VAR_23)
  goto fix_extent_len;

out:
 FUNC_11(VAR_8, VAR_13);
 return VAR_23;

fix_extent_len:
 VAR_16->ee_len = VAR_18.ee_len;
 FUNC_3(VAR_7, VAR_8, VAR_13 + VAR_13->p_depth);
 return VAR_23;
}
