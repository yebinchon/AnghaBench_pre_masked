
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_cluster {scalar_t__ pclu; scalar_t__ state; int lblk; } ;
struct inode {int i_sb; } ;
struct ext4_sb_info {int s_cluster_ratio; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int ee_block; int ee_len; } ;
struct ext4_ext_path {int * p_bh; struct ext4_extent* p_ext; struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;
typedef unsigned short ext4_lblk_t ;
typedef unsigned short ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*,unsigned short) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (struct ext4_sb_info*,scalar_t__) ;
 int FUNC_3 (struct inode*,char*,unsigned short,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 struct ext4_sb_info* FUNC_5 (int ) ;
 struct ext4_extent* FUNC_6 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_7 (struct ext4_extent_header*) ;
 int VAR_2 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_10 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_11 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned short FUNC_12 (struct ext4_extent*) ;
 scalar_t__ FUNC_13 (struct ext4_extent*) ;
 int FUNC_14 (struct ext4_extent*) ;
 unsigned short FUNC_15 (struct ext4_extent*) ;
 int FUNC_16 (int *,struct inode*,struct ext4_ext_path*,int) ;
 int FUNC_17 (struct ext4_extent*,int ) ;
 int FUNC_18 (int *,struct inode*,int) ;
 int FUNC_19 (int *,struct inode*,int *,int ,int,int) ;
 scalar_t__ FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (int *,struct inode*,struct ext4_extent*,struct partial_cluster*,unsigned short,unsigned short) ;
 int FUNC_22 (struct inode*,int ) ;
 struct ext4_extent_header* FUNC_23 (int *) ;
 int FUNC_24 (char*,unsigned short,unsigned int,...) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_27 (scalar_t__*,int) ;
 unsigned short FUNC_28 (int ) ;
 int FUNC_29 (struct ext4_extent*,struct ext4_extent*,int) ;
 int FUNC_30 (struct ext4_extent*,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_31 (struct inode*,unsigned short,struct ext4_extent*,struct partial_cluster*) ;
 scalar_t__ FUNC_32 (int ) ;

__attribute__((used)) static int
FUNC_33(handle_t *VAR_6, struct inode *VAR_7,
   struct ext4_ext_path *VAR_8,
   struct partial_cluster *VAR_9,
   ext4_lblk_t VAR_10, ext4_lblk_t VAR_11)
{
 struct ext4_sb_info *VAR_12 = FUNC_5(VAR_7->i_sb);
 int VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = FUNC_25(VAR_7), VAR_16;
 struct ext4_extent_header *VAR_17;
 ext4_lblk_t VAR_18, VAR_19;
 unsigned VAR_20;
 ext4_lblk_t VAR_21;
 unsigned short VAR_22;
 unsigned VAR_23 = 0;
 struct ext4_extent *VAR_24;
 ext4_fsblk_t VAR_25;


 FUNC_24("truncate since %u in leaf to %u\n", VAR_10, VAR_11);
 if (!VAR_8[VAR_15].p_hdr)
  VAR_8[VAR_15].p_hdr = FUNC_23(VAR_8[VAR_15].p_bh);
 VAR_17 = VAR_8[VAR_15].p_hdr;
 if (FUNC_32(VAR_8[VAR_15].p_hdr == ((void*)0))) {
  FUNC_3(VAR_7, "path[%d].p_hdr == NULL", VAR_15);
  return -VAR_0;
 }

 VAR_24 = VAR_8[VAR_15].p_ext;
 if (!VAR_24)
  VAR_24 = FUNC_7(VAR_17);

 VAR_21 = FUNC_28(VAR_24->ee_block);
 VAR_22 = FUNC_12(VAR_24);

 FUNC_31(VAR_7, VAR_10, VAR_24, VAR_9);

 while (VAR_24 >= FUNC_6(VAR_17) &&
   VAR_21 + VAR_22 > VAR_10) {

  if (FUNC_13(VAR_24))
   VAR_23 = 1;
  else
   VAR_23 = 0;

  FUNC_24("remove ext %u:[%d]%d\n", VAR_21,
     VAR_23, VAR_22);
  VAR_8[VAR_15].p_ext = VAR_24;

  VAR_18 = VAR_21 > VAR_10 ? VAR_21 : VAR_10;
  VAR_19 = VAR_21+VAR_22 - 1 < VAR_11 ?
   VAR_21+VAR_22 - 1 : VAR_11;

  FUNC_24("  border %u:%u\n", VAR_18, VAR_19);


  if (VAR_11 < VAR_21) {







   if (VAR_12->s_cluster_ratio > 1) {
    VAR_25 = FUNC_15(VAR_24);
    VAR_9->pclu = FUNC_0(VAR_12, VAR_25);
    VAR_9->state = VAR_4;
   }
   VAR_24--;
   VAR_21 = FUNC_28(VAR_24->ee_block);
   VAR_22 = FUNC_12(VAR_24);
   continue;
  } else if (VAR_19 != VAR_21 + VAR_22 - 1) {
   FUNC_3(VAR_7,
      "can not handle truncate %u:%u "
      "on extent %u:%u",
      VAR_10, VAR_11, VAR_21,
      VAR_21 + VAR_22 - 1);
   VAR_13 = -VAR_0;
   goto out;
  } else if (VAR_18 != VAR_21) {

   VAR_20 = VAR_18 - VAR_21;
  } else {

   VAR_20 = 0;
  }






  VAR_16 = 7 + 2*(VAR_22/FUNC_1(VAR_7->i_sb));
  if (VAR_24 == FUNC_6(VAR_17)) {
   VAR_14 = 1;
   VAR_16 += (FUNC_25(VAR_7)) + 1;
  }
  VAR_16 += FUNC_4(VAR_7->i_sb);

  VAR_13 = FUNC_18(VAR_6, VAR_7, VAR_16);
  if (VAR_13)
   goto out;

  VAR_13 = FUNC_11(VAR_6, VAR_7, VAR_8 + VAR_15);
  if (VAR_13)
   goto out;

  VAR_13 = FUNC_21(VAR_6, VAR_7, VAR_24, VAR_9, VAR_18, VAR_19);
  if (VAR_13)
   goto out;

  if (VAR_20 == 0)

   FUNC_17(VAR_24, 0);

  VAR_24->ee_len = FUNC_8(VAR_20);




  if (VAR_23 && VAR_20)
   FUNC_14(VAR_24);




  if (VAR_20 == 0) {
   if (VAR_11 != VAR_2 - 1) {





    FUNC_29(VAR_24, VAR_24+1, (FUNC_7(VAR_17) - VAR_24) *
     sizeof(struct ext4_extent));


    FUNC_30(FUNC_7(VAR_17), 0,
     sizeof(struct ext4_extent));
   }
   FUNC_27(&VAR_17->eh_entries, -1);
  }

  VAR_13 = FUNC_10(VAR_6, VAR_7, VAR_8 + VAR_15);
  if (VAR_13)
   goto out;

  FUNC_24("new extent: %u:%u:%llu\n", VAR_21, VAR_20,
    FUNC_15(VAR_24));
  VAR_24--;
  VAR_21 = FUNC_28(VAR_24->ee_block);
  VAR_22 = FUNC_12(VAR_24);
 }

 if (VAR_14 && VAR_17->eh_entries)
  VAR_13 = FUNC_9(VAR_6, VAR_7, VAR_8);
 if (VAR_9->state == VAR_5 && VAR_24 >= FUNC_6(VAR_17)) {
  VAR_25 = FUNC_15(VAR_24) + VAR_22 - 1;
  if (VAR_9->pclu != FUNC_0(VAR_12, VAR_25)) {
   int VAR_26 = FUNC_26(VAR_7);

   if (FUNC_20(VAR_7, VAR_9->lblk))
    VAR_26 |= VAR_1;
   FUNC_19(VAR_6, VAR_7, ((void*)0),
      FUNC_2(VAR_12, VAR_9->pclu),
      VAR_12->s_cluster_ratio, VAR_26);
   if (VAR_26 & VAR_1)
    FUNC_22(VAR_7, VAR_9->lblk);
  }
  VAR_9->state = VAR_3;
 }



 if (VAR_13 == 0 && VAR_17->eh_entries == 0 && VAR_8[VAR_15].p_bh != ((void*)0))
  VAR_13 = FUNC_16(VAR_6, VAR_7, VAR_8, VAR_15);

out:
 return VAR_13;
}
