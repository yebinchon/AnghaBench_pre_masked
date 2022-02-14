
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ocfs2_suballoc_result {unsigned int sr_bits; int sr_blkno; int sr_bit_offset; int sr_bg_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_wanted; scalar_t__ ac_bits_given; scalar_t__ ac_which; TYPE_2__* ac_inode; } ;
typedef int handle_t ;
struct TYPE_4__ {int bg_allocs; } ;
struct TYPE_6__ {TYPE_1__ alloc_stats; } ;
struct TYPE_5__ {int i_sb; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_alloc_context*,int *,scalar_t__,int,struct ocfs2_suballoc_result*) ;

int FUNC_5(handle_t *VAR_1,
    struct ocfs2_alloc_context *VAR_2,
    u32 VAR_3,
    u64 *VAR_4,
    u16 *VAR_5,
    unsigned int *VAR_6,
    u64 *VAR_7)
{
 int VAR_8;
 struct ocfs2_suballoc_result VAR_9 = { .sr_blkno = 0, };

 FUNC_0(!VAR_2);
 FUNC_0(VAR_2->ac_bits_wanted < (VAR_2->ac_bits_given + VAR_3));
 FUNC_0(VAR_2->ac_which != VAR_0);

 VAR_8 = FUNC_4(VAR_2,
        VAR_1,
        VAR_3,
        1,
        &VAR_9);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto bail;
 }
 FUNC_2(&FUNC_1(VAR_2->ac_inode->i_sb)->alloc_stats.bg_allocs);

 *VAR_4 = VAR_9.sr_bg_blkno;
 *VAR_5 = VAR_9.sr_bit_offset;
 *VAR_7 = VAR_9.sr_blkno;
 VAR_2->ac_bits_given += VAR_9.sr_bits;
 *VAR_6 = VAR_9.sr_bits;
 VAR_8 = 0;
bail:
 if (VAR_8)
  FUNC_3(VAR_8);
 return VAR_8;
}
