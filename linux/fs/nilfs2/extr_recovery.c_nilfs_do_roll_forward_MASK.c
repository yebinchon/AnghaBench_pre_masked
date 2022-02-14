
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct the_nilfs {scalar_t__ ns_ctime; scalar_t__ ns_nongc_ctime; } ;
struct super_block {int dummy; } ;
struct nilfs_segment_summary {int ss_nblocks; int ss_create; int ss_next; int ss_flags; } ;
struct nilfs_root {int dummy; } ;
struct nilfs_recovery_info {scalar_t__ ri_lsegs_start; scalar_t__ ri_segnum; scalar_t__ ri_pseg_start; scalar_t__ ri_lsegs_end; int ri_need_recovery; int ri_lsegs_start_seq; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct the_nilfs*,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct the_nilfs*,scalar_t__) ;
 int FUNC_8 (struct super_block*,int ,char*,int,...) ;
 struct buffer_head* FUNC_9 (struct the_nilfs*,scalar_t__,struct nilfs_segment_summary**) ;
 int FUNC_10 (struct the_nilfs*,struct super_block*,struct nilfs_root*,int *,unsigned long*) ;
 int FUNC_11 (struct the_nilfs*,scalar_t__,struct nilfs_segment_summary*,int *) ;
 int FUNC_12 (struct the_nilfs*,int ,struct buffer_head*,struct nilfs_segment_summary*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct the_nilfs *VAR_12,
     struct super_block *VAR_13,
     struct nilfs_root *VAR_14,
     struct nilfs_recovery_info *VAR_15)
{
 struct buffer_head *VAR_16 = ((void*)0);
 struct nilfs_segment_summary *VAR_17 = ((void*)0);
 sector_t VAR_18;
 sector_t VAR_19, VAR_20;
 unsigned long VAR_21 = 0;
 unsigned int VAR_22;
 u64 VAR_23;
 __u64 VAR_24, VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0, VAR_28;
 FUNC_0(VAR_11);
 enum {
  RF_INIT_ST,
  RF_DSYNC_ST,
 };
 int VAR_29 = RF_INIT_ST;

 VAR_18 = VAR_15->ri_lsegs_start;
 VAR_23 = VAR_15->ri_lsegs_start_seq;
 VAR_24 = FUNC_7(VAR_12, VAR_18);
 FUNC_6(VAR_12, VAR_24, &VAR_19, &VAR_20);

 while (VAR_24 != VAR_15->ri_segnum || VAR_18 <= VAR_15->ri_pseg_start) {
  FUNC_1(VAR_16);
  VAR_16 = FUNC_9(VAR_12, VAR_18, &VAR_17);
  if (!VAR_16) {
   VAR_27 = -VAR_1;
   goto failed;
  }

  VAR_28 = FUNC_12(VAR_12, VAR_23, VAR_16, VAR_17);
  if (VAR_28) {
   if (VAR_28 == VAR_5) {
    VAR_27 = -VAR_1;
    goto failed;
   }
   goto strayed;
  }

  VAR_22 = FUNC_3(VAR_17->ss_flags);
  if (VAR_22 & VAR_9)
   goto confused;


  VAR_25 = FUNC_7(VAR_12,
          FUNC_5(VAR_17->ss_next));
  VAR_26 = 0;
  VAR_12->ns_ctime = FUNC_5(VAR_17->ss_create);
  if (!(VAR_22 & VAR_6))
   VAR_12->ns_nongc_ctime = VAR_12->ns_ctime;

  switch (VAR_29) {
  case RF_INIT_ST:
   if (!(VAR_22 & VAR_7) ||
       !(VAR_22 & VAR_10))
    goto try_next_pseg;
   VAR_29 = RF_DSYNC_ST;

  case RF_DSYNC_ST:
   if (!(VAR_22 & VAR_10))
    goto confused;

   VAR_27 = FUNC_11(VAR_12, VAR_18, VAR_17,
         &VAR_11);
   if (FUNC_13(VAR_27))
    goto failed;
   if (VAR_22 & VAR_8) {
    VAR_27 = FUNC_10(
     VAR_12, VAR_13, VAR_14, &VAR_11,
     &VAR_21);
    if (FUNC_13(VAR_27))
     goto failed;
    VAR_29 = RF_INIT_ST;
   }
   break;
  }

 try_next_pseg:
  if (VAR_18 == VAR_15->ri_lsegs_end)
   break;
  VAR_18 += FUNC_4(VAR_17->ss_nblocks);
  if (VAR_18 < VAR_20)
   continue;
  goto feed_segment;

 strayed:
  if (VAR_18 == VAR_15->ri_lsegs_end)
   break;

 feed_segment:

  if (VAR_26++)
   break;
  VAR_23++;
  VAR_24 = VAR_25;
  FUNC_6(VAR_12, VAR_24, &VAR_19, &VAR_20);
  VAR_18 = VAR_19;
 }

 if (VAR_21) {
  FUNC_8(VAR_13, VAR_3, "salvaged %lu blocks",
     VAR_21);
  VAR_15->ri_need_recovery = VAR_4;
 }
 out:
 FUNC_1(VAR_16);
 FUNC_2(&VAR_11);
 return VAR_27;

 confused:
 VAR_27 = -VAR_0;
 failed:
 FUNC_8(VAR_13, VAR_2,
    "error %d roll-forwarding partial segment at blocknr = %llu",
    VAR_27, (unsigned long long)VAR_18);
 goto out;
}
