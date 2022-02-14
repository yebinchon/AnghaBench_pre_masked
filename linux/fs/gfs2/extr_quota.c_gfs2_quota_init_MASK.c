
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct kqid {int dummy; } ;
struct TYPE_2__ {unsigned int sb_bsize_shift; } ;
struct gfs2_sbd {unsigned int sd_quota_slots; unsigned int sd_qc_per_block; int sd_quota_count; int sd_quota_list; int * sd_quota_bitmap; int sd_qc_inode; TYPE_1__ sd_sb; } ;
struct gfs2_quota_data {unsigned int qd_slot; int qd_slot_count; int qd_hlist; int qd_list; scalar_t__ qd_change; int qd_flags; } ;
struct gfs2_quota_change {int qc_id; int qc_flags; int qc_change; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ s64 ;
typedef enum quota_type { ____Placeholder_quota_type } quota_type ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct gfs2_sbd*,char*,unsigned int) ;
 scalar_t__ FUNC_9 (int ,int,int) ;
 int FUNC_10 (int *,unsigned int,int*,unsigned int*,int*) ;
 struct buffer_head* FUNC_11 (int ,unsigned int,int) ;
 scalar_t__ FUNC_12 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 unsigned int FUNC_13 (struct gfs2_sbd*,struct kqid) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (int *,int *) ;
 unsigned int FUNC_16 (int ) ;
 int VAR_11 ;
 int * FUNC_17 (unsigned int,int) ;
 int FUNC_18 (int *,int *) ;
 struct kqid FUNC_19 (int *,int,int) ;
 struct gfs2_quota_data* FUNC_20 (unsigned int,struct gfs2_sbd*,struct kqid) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (unsigned int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (unsigned int) ;
 int FUNC_26 (unsigned int,int *) ;

int FUNC_27(struct gfs2_sbd *VAR_14)
{
 struct gfs2_inode *VAR_15 = FUNC_2(VAR_14->sd_qc_inode);
 u64 VAR_16 = FUNC_16(VAR_14->sd_qc_inode);
 unsigned int VAR_17 = VAR_16 >> VAR_14->sd_sb.sb_bsize_shift;
 unsigned int VAR_18, VAR_19 = 0;
 unsigned int VAR_20 = 0;
 unsigned int VAR_21;
 unsigned int VAR_22;
 u64 VAR_23;
 u32 VAR_24 = 0;
 int VAR_25;

 if (FUNC_9(VAR_14->sd_qc_inode, 1, 64 << 20))
  return -VAR_0;

 VAR_14->sd_quota_slots = VAR_17 * VAR_14->sd_qc_per_block;
 VAR_22 = FUNC_1(VAR_14->sd_quota_slots, 8 * sizeof(unsigned long));
 VAR_22 *= sizeof(unsigned long);
 VAR_25 = -VAR_1;
 VAR_14->sd_quota_bitmap = FUNC_17(VAR_22, VAR_2 | VAR_9);
 if (VAR_14->sd_quota_bitmap == ((void*)0))
  VAR_14->sd_quota_bitmap = FUNC_3(VAR_22, VAR_2 |
       VAR_10, VAR_6);
 if (!VAR_14->sd_quota_bitmap)
  return VAR_25;

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  struct buffer_head *VAR_26;
  const struct gfs2_quota_change *VAR_27;
  unsigned int VAR_28;

  if (!VAR_24) {
   int VAR_29 = 0;
   VAR_25 = FUNC_10(&VAR_15->i_inode, VAR_18, &VAR_29, &VAR_23, &VAR_24);
   if (VAR_25)
    goto fail;
  }
  VAR_25 = -VAR_0;
  VAR_26 = FUNC_11(VAR_15->i_gl, VAR_23, VAR_24);
  if (!VAR_26)
   goto fail;
  if (FUNC_12(VAR_14, VAR_26, VAR_3)) {
   FUNC_7(VAR_26);
   goto fail;
  }

  VAR_27 = (const struct gfs2_quota_change *)(VAR_26->b_data + sizeof(struct gfs2_meta_header));
  for (VAR_28 = 0; VAR_28 < VAR_14->sd_qc_per_block && VAR_19 < VAR_14->sd_quota_slots;
       VAR_28++, VAR_19++) {
   struct gfs2_quota_data *VAR_30;
   s64 VAR_31 = FUNC_6(VAR_27->qc_change);
   u32 VAR_32 = FUNC_5(VAR_27->qc_flags);
   enum quota_type VAR_33 = (VAR_32 & VAR_4) ?
      VAR_8 : VAR_5;
   struct kqid VAR_34 = FUNC_19(&VAR_11, VAR_33,
            FUNC_5(VAR_27->qc_id));
   VAR_27++;
   if (!VAR_31)
    continue;

   VAR_21 = FUNC_13(VAR_14, VAR_34);
   VAR_30 = FUNC_20(VAR_21, VAR_14, VAR_34);
   if (VAR_30 == ((void*)0)) {
    FUNC_7(VAR_26);
    goto fail;
   }

   FUNC_21(VAR_7, &VAR_30->qd_flags);
   VAR_30->qd_change = VAR_31;
   VAR_30->qd_slot = VAR_19;
   VAR_30->qd_slot_count = 1;

   FUNC_22(&VAR_13);
   FUNC_0(FUNC_26(VAR_19, VAR_14->sd_quota_bitmap));
   FUNC_18(&VAR_30->qd_list, &VAR_14->sd_quota_list);
   FUNC_4(&VAR_14->sd_quota_count);
   FUNC_24(&VAR_13);

   FUNC_23(VAR_21);
   FUNC_15(&VAR_30->qd_hlist, &VAR_12[VAR_21]);
   FUNC_25(VAR_21);

   VAR_20++;
  }

  FUNC_7(VAR_26);
  VAR_23++;
  VAR_24--;
 }

 if (VAR_20)
  FUNC_8(VAR_14, "found %u quota changes\n", VAR_20);

 return 0;

fail:
 FUNC_14(VAR_14);
 return VAR_25;
}
