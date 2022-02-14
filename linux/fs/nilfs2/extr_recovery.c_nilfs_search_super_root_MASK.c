
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct the_nilfs {scalar_t__ ns_last_pseg; int ns_mount_state; int ns_sb; void* ns_last_cno; void* ns_seg_seq; void* ns_last_seq; void* ns_nextnum; scalar_t__ ns_ctime; void* ns_cno; void* ns_segnum; scalar_t__ ns_pseg_offset; int ns_blocksize; int ns_bdev; } ;
struct nilfs_segment_summary {int ss_create; int ss_flags; int ss_next; int ss_nblocks; } ;
struct nilfs_recovery_info {void* ri_cno; int ri_used_segments; int ri_need_recovery; scalar_t__ ri_lsegs_end; scalar_t__ ri_lsegs_start; scalar_t__ ri_super_root; void* ri_lsegs_start_seq; void* ri_nextnum; void* ri_segnum; void* ri_seq; scalar_t__ ri_pseg_start; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* __u64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 unsigned int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct the_nilfs*,void*,scalar_t__*,scalar_t__*) ;
 void* FUNC_9 (struct the_nilfs*,scalar_t__) ;
 struct buffer_head* FUNC_10 (struct the_nilfs*,scalar_t__,struct nilfs_segment_summary**) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (struct the_nilfs*,void*,struct buffer_head*,struct nilfs_segment_summary*) ;
 int FUNC_13 (int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct the_nilfs *VAR_8,
       struct nilfs_recovery_info *VAR_9)
{
 struct buffer_head *VAR_10 = ((void*)0);
 struct nilfs_segment_summary *VAR_11 = ((void*)0);
 sector_t VAR_12, VAR_13, VAR_14 = 0;
 sector_t VAR_15, VAR_16;
 sector_t VAR_17, VAR_18;
 unsigned long VAR_19;
 unsigned int VAR_20;
 u64 VAR_21;
 __u64 VAR_22, VAR_23 = 0;
 __u64 VAR_24;
 FUNC_0(VAR_7);
 int VAR_25 = 0, VAR_26 = 0;
 int VAR_27;

 VAR_12 = VAR_8->ns_last_pseg;
 VAR_21 = VAR_8->ns_last_seq;
 VAR_24 = VAR_8->ns_last_cno;
 VAR_22 = FUNC_9(VAR_8, VAR_12);


 FUNC_8(VAR_8, VAR_22, &VAR_15, &VAR_16);


 VAR_17 = VAR_15;
 while (VAR_17 <= VAR_16)
  FUNC_1(VAR_8->ns_bdev, VAR_17++, VAR_8->ns_blocksize);

 for (;;) {
  FUNC_2(VAR_10);
  VAR_27 = VAR_2;
  VAR_10 = FUNC_10(VAR_8, VAR_12, &VAR_11);
  if (!VAR_10)
   goto failed;

  VAR_27 = FUNC_12(VAR_8, VAR_21, VAR_10, VAR_11);
  if (VAR_27) {
   if (VAR_27 == VAR_2)
    goto failed;
   goto strayed;
  }

  VAR_19 = FUNC_4(VAR_11->ss_nblocks);
  VAR_13 = VAR_12 + VAR_19 - 1;
  if (FUNC_14(VAR_13 > VAR_16)) {
   VAR_27 = VAR_1;
   goto strayed;
  }


  VAR_9->ri_pseg_start = VAR_12;
  VAR_9->ri_seq = VAR_21;
  VAR_9->ri_segnum = VAR_22;
  VAR_23 = FUNC_9(VAR_8,
          FUNC_5(VAR_11->ss_next));
  VAR_9->ri_nextnum = VAR_23;
  VAR_25 = 0;

  VAR_20 = FUNC_3(VAR_11->ss_flags);
  if (!(VAR_20 & VAR_5) && !VAR_26) {





   VAR_27 = VAR_1;
   goto failed;
  }

  if (VAR_12 == VAR_15) {
   FUNC_8(VAR_8, VAR_23, &VAR_17, &VAR_18);
   while (VAR_17 <= VAR_18)
    FUNC_1(VAR_8->ns_bdev, VAR_17++,
          VAR_8->ns_blocksize);
  }
  if (!(VAR_20 & VAR_5)) {
   if (!VAR_9->ri_lsegs_start && (VAR_20 & VAR_3)) {
    VAR_9->ri_lsegs_start = VAR_12;
    VAR_9->ri_lsegs_start_seq = VAR_21;
   }
   if (VAR_20 & VAR_4)
    VAR_9->ri_lsegs_end = VAR_12;
   goto try_next_pseg;
  }


  VAR_9->ri_cno = VAR_24++;
  VAR_9->ri_super_root = VAR_13;
  VAR_9->ri_lsegs_start = VAR_9->ri_lsegs_end = 0;

  FUNC_7(&VAR_7);
  VAR_14 = VAR_12;
  VAR_8->ns_pseg_offset = VAR_12 + VAR_19 - VAR_15;
  VAR_8->ns_seg_seq = VAR_21;
  VAR_8->ns_segnum = VAR_22;
  VAR_8->ns_cno = VAR_24;
  VAR_8->ns_ctime = FUNC_5(VAR_11->ss_create);
  VAR_8->ns_nextnum = VAR_23;

  if (VAR_26)
   VAR_9->ri_need_recovery = VAR_0;
  else {
   if (VAR_8->ns_mount_state & VAR_6)
    goto super_root_found;
   VAR_26 = 1;
  }

 try_next_pseg:

  VAR_12 += VAR_19;
  if (VAR_12 < VAR_16)
   continue;
  goto feed_segment;

 strayed:

  if (!VAR_26)




   goto failed;

 feed_segment:

  if (VAR_25++)
   goto super_root_found;

  VAR_27 = FUNC_11(&VAR_7, VAR_22);
  if (FUNC_14(VAR_27))
   goto failed;

  VAR_21++;
  VAR_22 = VAR_23;
  FUNC_8(VAR_8, VAR_22, &VAR_15, &VAR_16);
  VAR_12 = VAR_15;
 }

 super_root_found:

 FUNC_2(VAR_10);
 FUNC_6(&VAR_7, &VAR_9->ri_used_segments);
 VAR_8->ns_last_pseg = VAR_14;
 VAR_8->ns_last_seq = VAR_8->ns_seg_seq;
 VAR_8->ns_last_cno = VAR_9->ri_cno;
 return 0;

 failed:
 FUNC_2(VAR_10);
 FUNC_7(&VAR_7);
 return VAR_27 < 0 ? VAR_27 : FUNC_13(VAR_8->ns_sb, VAR_27);
}
