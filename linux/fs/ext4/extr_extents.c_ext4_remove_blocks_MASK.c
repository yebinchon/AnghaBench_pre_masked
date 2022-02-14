
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_cluster {scalar_t__ state; scalar_t__ pclu; unsigned short lblk; } ;
struct inode {int i_sb; } ;
struct ext4_sb_info {unsigned short s_ext_blocks; unsigned short s_ext_min; unsigned short s_ext_max; scalar_t__ s_depth_max; unsigned short s_cluster_ratio; int s_ext_stats_lock; int s_ext_extents; int s_sb; } ;
struct ext4_extent {int ee_block; } ;
typedef int handle_t ;
typedef unsigned short ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_2 (struct ext4_sb_info*,unsigned short) ;
 int FUNC_3 (struct ext4_sb_info*,unsigned short) ;
 scalar_t__ FUNC_4 (struct ext4_sb_info*,scalar_t__) ;
 struct ext4_sb_info* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned short,unsigned short,unsigned short,unsigned short) ;
 unsigned short FUNC_7 (struct ext4_extent*) ;
 scalar_t__ FUNC_8 (struct ext4_extent*) ;
 int FUNC_9 (int *,struct inode*,int *,scalar_t__,unsigned short,int) ;
 scalar_t__ FUNC_10 (struct inode*,unsigned short) ;
 int FUNC_11 (struct inode*,unsigned short) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ VAR_3 ;
 unsigned short FUNC_14 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (struct inode*,struct ext4_extent*,unsigned short,unsigned short,struct partial_cluster*) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_6, struct inode *VAR_7,
         struct ext4_extent *VAR_8,
         struct partial_cluster *VAR_9,
         ext4_lblk_t VAR_10, ext4_lblk_t VAR_11)
{
 struct ext4_sb_info *VAR_12 = FUNC_5(VAR_7->i_sb);
 unsigned short VAR_13 = FUNC_7(VAR_8);
 ext4_fsblk_t VAR_14, VAR_15;
 ext4_lblk_t VAR_16;
 int VAR_17;


 if (VAR_10 < FUNC_14(VAR_8->ee_block) ||
     VAR_11 != FUNC_14(VAR_8->ee_block) + VAR_13 - 1) {
  FUNC_6(VAR_12->s_sb,
      "strange request: removal(2) %u-%u from %u:%u",
      VAR_10, VAR_11, FUNC_14(VAR_8->ee_block), VAR_13);
  return 0;
 }
 FUNC_17(VAR_7, VAR_8, VAR_10, VAR_11, VAR_9);





 VAR_14 = FUNC_8(VAR_8) + VAR_13 - 1;

 if (VAR_9->state != VAR_3 &&
     VAR_9->pclu != FUNC_0(VAR_12, VAR_14)) {
  if (VAR_9->state == VAR_5) {
   VAR_17 = FUNC_13(VAR_7);
   if (FUNC_10(VAR_7, VAR_9->lblk))
    VAR_17 |= VAR_2;
   FUNC_9(VAR_6, VAR_7, ((void*)0),
      FUNC_1(VAR_12, VAR_9->pclu),
      VAR_12->s_cluster_ratio, VAR_17);
   if (VAR_17 & VAR_2)
    FUNC_11(VAR_7, VAR_9->lblk);
  }
  VAR_9->state = VAR_3;
 }

 VAR_16 = FUNC_14(VAR_8->ee_block) + VAR_13 - VAR_10;
 VAR_15 = FUNC_8(VAR_8) + VAR_13 - VAR_16;







 VAR_17 = FUNC_13(VAR_7);


 if ((FUNC_3(VAR_12, VAR_11) != VAR_12->s_cluster_ratio - 1) &&
     (FUNC_2(VAR_12, VAR_11) >= VAR_10) &&
     (VAR_9->state != VAR_4)) {
  if (FUNC_10(VAR_7, VAR_11))
   VAR_17 |= VAR_2;
  FUNC_9(VAR_6, VAR_7, ((void*)0),
     FUNC_4(VAR_12, VAR_14),
     VAR_12->s_cluster_ratio, VAR_17);
  if (VAR_17 & VAR_2)
   FUNC_11(VAR_7, VAR_11);
  VAR_9->state = VAR_3;
  VAR_17 = FUNC_13(VAR_7);
 }

 VAR_17 |= VAR_1;







 VAR_17 |= VAR_0;
 FUNC_9(VAR_6, VAR_7, ((void*)0), VAR_15, VAR_16, VAR_17);


 if (VAR_9->state != VAR_3 && VAR_9->pclu != FUNC_0(VAR_12, VAR_15))
  VAR_9->state = VAR_3;
 if (FUNC_3(VAR_12, VAR_10) && VAR_16 == VAR_13) {
  if (VAR_9->state == VAR_3) {
   VAR_9->pclu = FUNC_0(VAR_12, VAR_15);
   VAR_9->lblk = VAR_10;
   VAR_9->state = VAR_5;
  }
 } else {
  VAR_9->state = VAR_3;
 }

 return 0;
}
