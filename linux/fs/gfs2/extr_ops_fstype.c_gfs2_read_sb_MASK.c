
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {int sd_fsb2bb_shift; int sd_fsb2bb; int sd_diptrs; int sd_inptrs; int sd_jbsize; int sd_hash_bsize; int sd_hash_bsize_shift; int sd_hash_ptrs; int sd_qc_per_block; int sd_blocks_per_bitmap; int sd_max_dirres; int* sd_heightsize; unsigned int sd_max_height; int sd_max_dents_per_leaf; TYPE_1__ sd_sb; } ;
struct gfs2_quota_change {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_leaf {int dummy; } ;
struct gfs2_dinode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct gfs2_sbd*,char*) ;
 int FUNC_4 (struct gfs2_sbd*,int) ;
 int FUNC_5 (struct gfs2_sbd*,int,int) ;

__attribute__((used)) static int FUNC_6(struct gfs2_sbd *VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_6, VAR_5 >> VAR_6->sd_fsb2bb_shift, VAR_7);
 if (VAR_13) {
  if (!VAR_7)
   FUNC_3(VAR_6, "can't read superblock\n");
  return VAR_13;
 }

 VAR_6->sd_fsb2bb_shift = VAR_6->sd_sb.sb_bsize_shift -
          VAR_0;
 VAR_6->sd_fsb2bb = FUNC_0(VAR_6->sd_fsb2bb_shift);
 VAR_6->sd_diptrs = (VAR_6->sd_sb.sb_bsize -
     sizeof(struct gfs2_dinode)) / sizeof(u64);
 VAR_6->sd_inptrs = (VAR_6->sd_sb.sb_bsize -
     sizeof(struct gfs2_meta_header)) / sizeof(u64);
 VAR_6->sd_jbsize = VAR_6->sd_sb.sb_bsize - sizeof(struct gfs2_meta_header);
 VAR_6->sd_hash_bsize = VAR_6->sd_sb.sb_bsize / 2;
 VAR_6->sd_hash_bsize_shift = VAR_6->sd_sb.sb_bsize_shift - 1;
 VAR_6->sd_hash_ptrs = VAR_6->sd_hash_bsize / sizeof(u64);
 VAR_6->sd_qc_per_block = (VAR_6->sd_sb.sb_bsize -
    sizeof(struct gfs2_meta_header)) /
           sizeof(struct gfs2_quota_change);
 VAR_6->sd_blocks_per_bitmap = (VAR_6->sd_sb.sb_bsize -
         sizeof(struct gfs2_meta_header))
  * VAR_4;



 VAR_8 = FUNC_1(sizeof(u64) * FUNC_0(VAR_1),
        VAR_6->sd_jbsize);

 VAR_9 = 0;
 for (VAR_11 = VAR_8; VAR_11 > VAR_6->sd_diptrs;) {
  VAR_11 = FUNC_1(VAR_11, VAR_6->sd_inptrs);
  VAR_9 += VAR_11;
 }

 VAR_10 = 2 + VAR_1;

 VAR_6->sd_max_dirres = VAR_8 + VAR_9 + VAR_10;

 VAR_6->sd_heightsize[0] = VAR_6->sd_sb.sb_bsize -
    sizeof(struct gfs2_dinode);
 VAR_6->sd_heightsize[1] = VAR_6->sd_sb.sb_bsize * VAR_6->sd_diptrs;
 for (VAR_12 = 2;; VAR_12++) {
  u64 VAR_14, VAR_15;
  u32 VAR_16;

  VAR_14 = VAR_6->sd_heightsize[VAR_12 - 1] * VAR_6->sd_inptrs;
  VAR_15 = VAR_14;
  VAR_16 = FUNC_2(VAR_15, VAR_6->sd_inptrs);

  if (VAR_15 != VAR_6->sd_heightsize[VAR_12 - 1] || VAR_16)
   break;
  VAR_6->sd_heightsize[VAR_12] = VAR_14;
 }
 VAR_6->sd_max_height = VAR_12;
 VAR_6->sd_heightsize[VAR_12] = ~0;
 FUNC_4(VAR_6, VAR_6->sd_max_height <= VAR_2);

 VAR_6->sd_max_dents_per_leaf = (VAR_6->sd_sb.sb_bsize -
          sizeof(struct gfs2_leaf)) /
         VAR_3;
 return 0;
}
