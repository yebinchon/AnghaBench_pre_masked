
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct partial_cluster {scalar_t__ state; scalar_t__ lblk; void* pclu; } ;
struct inode {int i_sb; } ;
struct ext4_sb_info {int s_cluster_ratio; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_maxdepth; int p_depth; TYPE_1__* p_hdr; struct ext4_ext_path* p_bh; void* p_block; scalar_t__ p_idx; struct ext4_extent* p_ext; } ;
struct buffer_head {int p_maxdepth; int p_depth; TYPE_1__* p_hdr; struct buffer_head* p_bh; void* p_block; scalar_t__ p_idx; struct ext4_extent* p_ext; } ;
typedef struct ext4_ext_path handle_t ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_6__ {scalar_t__ eh_entries; int eh_max; scalar_t__ eh_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct ext4_sb_info*,int) ;
 int FUNC_1 (struct ext4_sb_info*,void*) ;
 int FUNC_2 (struct inode*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ext4_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct ext4_ext_path*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct inode*,TYPE_1__*,int,int ) ;
 int FUNC_13 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_14 (struct ext4_ext_path*) ;
 int FUNC_15 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_16 (struct ext4_extent*) ;
 scalar_t__ FUNC_17 (struct ext4_ext_path*) ;
 int FUNC_18 (struct ext4_extent*) ;
 int FUNC_19 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*,int) ;
 int FUNC_20 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path*,struct partial_cluster*,int,int) ;
 int FUNC_21 (struct inode*,struct ext4_ext_path*,int*,int*,struct ext4_extent**) ;
 int FUNC_22 (struct inode*,int ) ;
 struct ext4_ext_path* FUNC_23 (struct inode*,int,int *,int ) ;
 int FUNC_24 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path**,int,int) ;
 int FUNC_25 (struct ext4_ext_path*,struct inode*,int *,int ,int,int) ;
 int FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (struct inode*,scalar_t__) ;
 struct ext4_ext_path* FUNC_28 (struct inode*,int ,int) ;
 int FUNC_29 (struct ext4_ext_path*) ;
 int FUNC_30 (struct inode*,scalar_t__) ;
 TYPE_1__* FUNC_31 (struct ext4_ext_path*) ;
 int FUNC_32 (char*,...) ;
 int FUNC_33 (struct inode*) ;
 TYPE_1__* FUNC_34 (struct inode*) ;
 int FUNC_35 (struct inode*) ;
 scalar_t__ VAR_8 ;
 struct ext4_ext_path* FUNC_36 (int,int,int ) ;
 int FUNC_37 (struct ext4_ext_path*) ;
 void* FUNC_38 (scalar_t__) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (struct ext4_ext_path*,int ,int) ;
 void* VAR_9 ;
 struct ext4_ext_path* FUNC_41 (struct inode*,int ,int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_42 (struct inode*,int,int,int) ;
 int FUNC_43 (struct inode*,int,int,int,struct partial_cluster*,scalar_t__) ;

int FUNC_44(struct inode *VAR_11, ext4_lblk_t VAR_12,
     ext4_lblk_t VAR_13)
{
 struct ext4_sb_info *VAR_14 = FUNC_3(VAR_11->i_sb);
 int VAR_15 = FUNC_33(VAR_11);
 struct ext4_ext_path *VAR_16 = ((void*)0);
 struct partial_cluster VAR_17;
 handle_t *VAR_18;
 int VAR_19 = 0, VAR_20 = 0;

 VAR_17.pclu = 0;
 VAR_17.lblk = 0;
 VAR_17.state = VAR_8;

 FUNC_32("truncate since %u to %u\n", VAR_12, VAR_13);


 VAR_18 = FUNC_28(VAR_11, VAR_5, VAR_15 + 1);
 if (FUNC_6(VAR_18))
  return FUNC_7(VAR_18);

again:
 FUNC_42(VAR_11, VAR_12, VAR_13, VAR_15);
 if (VAR_13 < VAR_6 - 1) {
  struct ext4_extent *VAR_21;
  ext4_lblk_t VAR_22, VAR_23, VAR_24;
  ext4_fsblk_t VAR_25;


  VAR_16 = FUNC_23(VAR_11, VAR_13, ((void*)0), VAR_3);
  if (FUNC_6(VAR_16)) {
   FUNC_29(VAR_18);
   return FUNC_7(VAR_16);
  }
  VAR_15 = FUNC_33(VAR_11);

  VAR_21 = VAR_16[VAR_15].p_ext;
  if (!VAR_21) {
   if (VAR_15) {
    FUNC_2(VAR_11,
       "path[%d].p_hdr == NULL",
       VAR_15);
    VAR_20 = -VAR_1;
   }
   goto out;
  }

  VAR_22 = FUNC_39(VAR_21->ee_block);
  VAR_23 = VAR_22 + FUNC_16(VAR_21) - 1;







  if (VAR_13 >= VAR_22 && VAR_13 < VAR_23) {






   if (VAR_14->s_cluster_ratio > 1) {
    VAR_25 = FUNC_18(VAR_21) + VAR_13 - VAR_22 + 2;
    VAR_17.pclu = FUNC_0(VAR_14, VAR_25);
    VAR_17.state = VAR_9;
   }







   VAR_20 = FUNC_24(VAR_18, VAR_11, &VAR_16,
        VAR_13 + 1, 1);
   if (VAR_20 < 0)
    goto out;

  } else if (VAR_14->s_cluster_ratio > 1 && VAR_13 >= VAR_23 &&
      VAR_17.state == VAR_8) {
   VAR_24 = VAR_23 + 1;
   VAR_20 = FUNC_21(VAR_11, VAR_16, &VAR_24, &VAR_25,
          &VAR_21);
   if (VAR_20)
    goto out;
   if (VAR_25) {
    VAR_17.pclu = FUNC_0(VAR_14, VAR_25);
    VAR_17.state = VAR_9;
   }
  }
 }




 VAR_15 = FUNC_33(VAR_11);
 if (VAR_16) {
  int VAR_26 = VAR_19 = VAR_15;
  while (--VAR_26 > 0)
   VAR_16[VAR_26].p_block =
    FUNC_38(VAR_16[VAR_26].p_hdr->eh_entries)+1;
 } else {
  VAR_16 = FUNC_36(VAR_15 + 1, sizeof(struct ext4_ext_path),
          VAR_7);
  if (VAR_16 == ((void*)0)) {
   FUNC_29(VAR_18);
   return -VAR_2;
  }
  VAR_16[0].p_maxdepth = VAR_16[0].p_depth = VAR_15;
  VAR_16[0].p_hdr = FUNC_34(VAR_11);
  VAR_19 = 0;

  if (FUNC_12(VAR_11, VAR_16[0].p_hdr, VAR_15, 0)) {
   VAR_20 = -VAR_1;
   goto out;
  }
 }
 VAR_20 = 0;

 while (VAR_19 >= 0 && VAR_20 == 0) {
  if (VAR_19 == VAR_15) {

   VAR_20 = FUNC_20(VAR_18, VAR_11, VAR_16,
            &VAR_17, VAR_12, VAR_13);

   FUNC_9(VAR_16[VAR_19].p_bh);
   VAR_16[VAR_19].p_bh = ((void*)0);
   VAR_19--;
   continue;
  }


  if (!VAR_16[VAR_19].p_hdr) {
   FUNC_32("initialize header\n");
   VAR_16[VAR_19].p_hdr = FUNC_31(VAR_16[VAR_19].p_bh);
  }

  if (!VAR_16[VAR_19].p_idx) {

   VAR_16[VAR_19].p_idx = FUNC_5(VAR_16[VAR_19].p_hdr);
   VAR_16[VAR_19].p_block = FUNC_38(VAR_16[VAR_19].p_hdr->eh_entries)+1;
   FUNC_32("init index ptr: hdr 0x%p, num %d\n",
      VAR_16[VAR_19].p_hdr,
      FUNC_38(VAR_16[VAR_19].p_hdr->eh_entries));
  } else {

   VAR_16[VAR_19].p_idx--;
  }

  FUNC_32("level %d - index, first 0x%p, cur 0x%p\n",
    VAR_19, FUNC_4(VAR_16[VAR_19].p_hdr),
    VAR_16[VAR_19].p_idx);
  if (FUNC_17(VAR_16 + VAR_19)) {
   struct buffer_head *VAR_27;

   FUNC_32("move to level %d (block %llu)\n",
      VAR_19 + 1, FUNC_26(VAR_16[VAR_19].p_idx));
   FUNC_40(VAR_16 + VAR_19 + 1, 0, sizeof(*VAR_16));
   VAR_27 = FUNC_41(VAR_11,
    FUNC_26(VAR_16[VAR_19].p_idx), VAR_15 - VAR_19 - 1,
    VAR_3);
   if (FUNC_6(VAR_27)) {

    VAR_20 = FUNC_7(VAR_27);
    break;
   }


   FUNC_10();
   if (FUNC_8(VAR_19 + 1 > VAR_15)) {
    VAR_20 = -VAR_1;
    break;
   }
   VAR_16[VAR_19 + 1].p_bh = VAR_27;



   VAR_16[VAR_19].p_block = FUNC_38(VAR_16[VAR_19].p_hdr->eh_entries);
   VAR_19++;
  } else {

   if (VAR_16[VAR_19].p_hdr->eh_entries == 0 && VAR_19 > 0) {



    VAR_20 = FUNC_19(VAR_18, VAR_11, VAR_16, VAR_19);
   }

   FUNC_9(VAR_16[VAR_19].p_bh);
   VAR_16[VAR_19].p_bh = ((void*)0);
   VAR_19--;
   FUNC_32("return to level %d\n", VAR_19);
  }
 }

 FUNC_43(VAR_11, VAR_12, VAR_13, VAR_15, &VAR_17,
      VAR_16->p_hdr->eh_entries);





 if (VAR_17.state == VAR_10 && VAR_20 == 0) {
  int VAR_28 = FUNC_35(VAR_11);

  if (FUNC_27(VAR_11, VAR_17.lblk))
   VAR_28 |= VAR_4;
  FUNC_25(VAR_18, VAR_11, ((void*)0),
     FUNC_1(VAR_14, VAR_17.pclu),
     VAR_14->s_cluster_ratio, VAR_28);
  if (VAR_28 & VAR_4)
   FUNC_30(VAR_11, VAR_17.lblk);
  VAR_17.state = VAR_8;
 }


 if (VAR_16->p_hdr->eh_entries == 0) {




  VAR_20 = FUNC_15(VAR_18, VAR_11, VAR_16);
  if (VAR_20 == 0) {
   FUNC_34(VAR_11)->eh_depth = 0;
   FUNC_34(VAR_11)->eh_max =
    FUNC_11(FUNC_22(VAR_11, 0));
   VAR_20 = FUNC_13(VAR_18, VAR_11, VAR_16);
  }
 }
out:
 FUNC_14(VAR_16);
 FUNC_37(VAR_16);
 VAR_16 = ((void*)0);
 if (VAR_20 == -VAR_0)
  goto again;
 FUNC_29(VAR_18);

 return VAR_20;
}
