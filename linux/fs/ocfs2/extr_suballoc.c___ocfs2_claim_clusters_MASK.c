
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bitmap_data; int local_data; } ;
struct ocfs2_super {int bitmap_cpg; TYPE_1__ alloc_stats; } ;
struct ocfs2_suballoc_result {int sr_blkno; int sr_bits; int sr_bit_offset; int sr_bg_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; scalar_t__ ac_bits_wanted; scalar_t__ ac_which; TYPE_2__* ac_inode; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,unsigned int,int*,int*) ;
 int FUNC_7 (struct ocfs2_alloc_context*,int *,unsigned int,int,struct ocfs2_suballoc_result*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

int FUNC_9(handle_t *VAR_4,
      struct ocfs2_alloc_context *VAR_5,
      u32 VAR_6,
      u32 VAR_7,
      u32 *VAR_8,
      u32 *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11 = VAR_7;
 struct ocfs2_suballoc_result VAR_12 = { .sr_blkno = 0, };
 struct ocfs2_super *VAR_13 = FUNC_1(VAR_5->ac_inode->i_sb);

 FUNC_0(VAR_5->ac_bits_given >= VAR_5->ac_bits_wanted);

 FUNC_0(VAR_5->ac_which != VAR_2
        && VAR_5->ac_which != VAR_3);

 if (VAR_5->ac_which == VAR_2) {
  FUNC_2(VAR_6 > 1);

  VAR_10 = FUNC_6(VAR_13,
            VAR_4,
            VAR_5,
            VAR_11,
            VAR_8,
            VAR_9);
  if (!VAR_10)
   FUNC_3(&VAR_13->alloc_stats.local_data);
 } else {
  if (VAR_6 > (VAR_13->bitmap_cpg - 1)) {


   FUNC_4(VAR_1, "minimum allocation requested %u exceeds "
        "group bitmap size %u!\n", VAR_6,
        VAR_13->bitmap_cpg);
   VAR_10 = -VAR_0;
   goto bail;
  }

  if (VAR_11 > (VAR_13->bitmap_cpg - 1))
   VAR_11 = VAR_13->bitmap_cpg - 1;

  VAR_10 = FUNC_7(VAR_5,
         VAR_4,
         VAR_11,
         VAR_6,
         &VAR_12);
  if (!VAR_10) {
   FUNC_0(VAR_12.sr_blkno);
   *VAR_8 =
    FUNC_8(VAR_5->ac_inode,
         VAR_12.sr_bg_blkno,
         VAR_12.sr_bit_offset);
   FUNC_3(&VAR_13->alloc_stats.bitmap_data);
   *VAR_9 = VAR_12.sr_bits;
  }
 }
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_0)
   FUNC_5(VAR_10);
  goto bail;
 }

 VAR_5->ac_bits_given += *VAR_9;

bail:
 if (VAR_10)
  FUNC_5(VAR_10);
 return VAR_10;
}
