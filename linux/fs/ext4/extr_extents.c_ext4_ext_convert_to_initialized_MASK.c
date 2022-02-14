
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; int i_ino; } ;
struct ext4_sb_info {int s_extent_max_zeroout_kb; } ;
struct ext4_map_blocks {unsigned int m_len; unsigned int m_lblk; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {void* ee_len; void* ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef unsigned int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_blocksize; int s_blocksize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_1 (TYPE_1__*) ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 unsigned int VAR_2 ;
 struct ext4_extent* FUNC_3 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (unsigned int) ;
 void* FUNC_7 (unsigned int) ;
 int FUNC_8 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_10 (struct ext4_extent*) ;
 int FUNC_11 (struct ext4_extent*) ;
 int FUNC_12 (struct ext4_extent*) ;
 scalar_t__ FUNC_13 (struct ext4_extent*) ;
 int FUNC_14 (struct ext4_extent*,scalar_t__) ;
 int FUNC_15 (struct inode*,struct ext4_extent*) ;
 int FUNC_16 (int *,struct inode*,struct ext4_ext_path**,struct ext4_map_blocks*,int,int) ;
 int FUNC_17 (struct inode*,struct ext4_extent*) ;
 int FUNC_18 (char*,int ,unsigned long long,unsigned int) ;
 unsigned int FUNC_19 (struct inode*) ;
 int FUNC_20 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_21 (void*) ;
 int FUNC_22 (struct inode*,struct ext4_map_blocks*,struct ext4_extent*) ;
 int FUNC_23 (struct inode*,struct ext4_map_blocks*,struct ext4_extent*,struct ext4_extent*) ;

__attribute__((used)) static int FUNC_24(handle_t *VAR_3,
        struct inode *VAR_4,
        struct ext4_map_blocks *VAR_5,
        struct ext4_ext_path **VAR_6,
        int VAR_7)
{
 struct ext4_ext_path *VAR_8 = *VAR_6;
 struct ext4_sb_info *VAR_9;
 struct ext4_extent_header *VAR_10;
 struct ext4_map_blocks VAR_11;
 struct ext4_extent VAR_12, VAR_13;
 struct ext4_extent *VAR_14, *VAR_15;
 ext4_lblk_t VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20 = VAR_5->m_len;
 int VAR_21 = 0, VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = VAR_0;

 FUNC_18("ext4_ext_convert_to_initialized: inode %lu, logical"
  "block %llu, max_blocks %u\n", VAR_4->i_ino,
  (unsigned long long)VAR_5->m_lblk, VAR_20);

 VAR_9 = FUNC_1(VAR_4->i_sb);
 VAR_17 = (VAR_4->i_size + VAR_4->i_sb->s_blocksize - 1) >>
  VAR_4->i_sb->s_blocksize_bits;
 if (VAR_17 < VAR_5->m_lblk + VAR_20)
  VAR_17 = VAR_5->m_lblk + VAR_20;

 VAR_19 = FUNC_19(VAR_4);
 VAR_10 = VAR_8[VAR_19].p_hdr;
 VAR_14 = VAR_8[VAR_19].p_ext;
 VAR_16 = FUNC_21(VAR_14->ee_block);
 VAR_18 = FUNC_10(VAR_14);
 VAR_12 = 0;
 VAR_13 = 0;

 FUNC_22(VAR_4, VAR_5, VAR_14);


 FUNC_0(!FUNC_11(VAR_14));
 FUNC_0(!FUNC_20(VAR_5->m_lblk, VAR_16, VAR_18));
 if ((VAR_5->m_lblk == VAR_16) &&

  (VAR_20 < VAR_18) &&
  (VAR_14 > FUNC_2(VAR_10))) {
  ext4_lblk_t VAR_25;
  ext4_fsblk_t VAR_26, VAR_27;
  unsigned int VAR_28;

  VAR_15 = VAR_14 - 1;
  VAR_25 = FUNC_21(VAR_15->ee_block);
  VAR_28 = FUNC_10(VAR_15);
  VAR_26 = FUNC_13(VAR_15);
  VAR_27 = FUNC_13(VAR_14);
  if ((!FUNC_11(VAR_15)) &&
   ((VAR_25 + VAR_28) == VAR_16) &&
   ((VAR_26 + VAR_28) == VAR_27) &&
   (VAR_28 < (VAR_2 - VAR_20))) {
   VAR_23 = FUNC_9(VAR_3, VAR_4, VAR_8 + VAR_19);
   if (VAR_23)
    goto out;

   FUNC_23(VAR_4,
    VAR_5, VAR_14, VAR_15);


   VAR_14->ee_block = FUNC_7(VAR_16 + VAR_20);
   FUNC_14(VAR_14, VAR_27 + VAR_20);
   VAR_14->ee_len = FUNC_6(VAR_18 - VAR_20);
   FUNC_12(VAR_14);


   VAR_15->ee_len = FUNC_6(VAR_28 + VAR_20);


   VAR_21 = VAR_20;
  }
 } else if (((VAR_5->m_lblk + VAR_20) == (VAR_16 + VAR_18)) &&
     (VAR_20 < VAR_18) &&
     VAR_14 < FUNC_3(VAR_10)) {

  ext4_lblk_t VAR_29;
  ext4_fsblk_t VAR_30, VAR_31;
  unsigned int VAR_32;

  VAR_15 = VAR_14 + 1;
  VAR_29 = FUNC_21(VAR_15->ee_block);
  VAR_32 = FUNC_10(VAR_15);
  VAR_30 = FUNC_13(VAR_15);
  VAR_31 = FUNC_13(VAR_14);
  if ((!FUNC_11(VAR_15)) &&
      ((VAR_5->m_lblk + VAR_20) == VAR_29) &&
      ((VAR_31 + VAR_18) == VAR_30) &&
      (VAR_32 < (VAR_2 - VAR_20))) {
   VAR_23 = FUNC_9(VAR_3, VAR_4, VAR_8 + VAR_19);
   if (VAR_23)
    goto out;

   FUNC_23(VAR_4,
    VAR_5, VAR_14, VAR_15);


   VAR_15->ee_block = FUNC_7(VAR_29 - VAR_20);
   FUNC_14(VAR_15, VAR_30 - VAR_20);
   VAR_14->ee_len = FUNC_6(VAR_18 - VAR_20);
   FUNC_12(VAR_14);


   VAR_15->ee_len = FUNC_6(VAR_32 + VAR_20);


   VAR_21 = VAR_20;
  }
 }
 if (VAR_21) {

  FUNC_8(VAR_3, VAR_4, VAR_8 + VAR_19);


  VAR_8[VAR_19].p_ext = VAR_15;
  goto out;
 } else
  VAR_21 = VAR_18 - (VAR_5->m_lblk - VAR_16);

 FUNC_5(VAR_5->m_lblk < VAR_16);




 VAR_24 |= VAR_16 + VAR_18 <= VAR_17 ? VAR_1 : 0;

 if (VAR_1 & VAR_24)
  VAR_22 = VAR_9->s_extent_max_zeroout_kb >>
   (VAR_4->i_sb->s_blocksize_bits - 10);

 if (FUNC_4(VAR_4))
  VAR_22 = 0;
 VAR_11.m_lblk = VAR_5->m_lblk;
 VAR_11.m_len = VAR_5->m_len;

 if (VAR_22 && (VAR_21 > VAR_11.m_len)) {
  if (VAR_21 <= VAR_22) {

   VAR_12 =
     FUNC_7(VAR_11.m_lblk +
          VAR_11.m_len);
   VAR_12 =
    FUNC_6(VAR_21 - VAR_11.m_len);
   FUNC_14(&VAR_12,
    FUNC_13(VAR_14) + VAR_11.m_lblk +
    VAR_11.m_len - VAR_16);
   VAR_23 = FUNC_15(VAR_4, &VAR_12);
   if (VAR_23)
    goto out;
   VAR_11.m_len = VAR_21;
  }
  if (VAR_11.m_lblk - VAR_16 + VAR_11.m_len <
        VAR_22) {

   if (VAR_11.m_lblk != VAR_16) {
    VAR_13 = VAR_14->ee_block;
    VAR_13 = FUNC_6(VAR_11.m_lblk -
       VAR_16);
    FUNC_14(&VAR_13,
            FUNC_13(VAR_14));
    VAR_23 = FUNC_15(VAR_4, &VAR_13);
    if (VAR_23)
     goto out;
   }

   VAR_11.m_len += VAR_11.m_lblk - VAR_16;
   VAR_11.m_lblk = VAR_16;
   VAR_21 = VAR_5->m_len;
  }
 }

 VAR_23 = FUNC_16(VAR_3, VAR_4, VAR_6, &VAR_11, VAR_24,
    VAR_7);
 if (VAR_23 > 0)
  VAR_23 = 0;
out:

 if (!VAR_23) {
  VAR_23 = FUNC_17(VAR_4, &VAR_12);
  if (!VAR_23)
   VAR_23 = FUNC_17(VAR_4, &VAR_13);
 }
 return VAR_23 ? VAR_23 : VAR_21;
}
