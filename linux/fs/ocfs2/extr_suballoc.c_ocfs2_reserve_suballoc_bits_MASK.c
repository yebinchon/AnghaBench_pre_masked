
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int bg_extends; } ;
struct ocfs2_super {TYPE_1__ alloc_stats; } ;
struct TYPE_5__ {int i_used; int i_total; } ;
struct TYPE_6__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {int i_flags; TYPE_3__ id1; int i_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_wanted; struct buffer_head* ac_bh; int ac_max_block; scalar_t__ ac_alloc_slot; struct inode* ac_inode; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int *,int) ;
 int FUNC_13 (int ,char*,unsigned long long) ;
 struct inode* FUNC_14 (struct ocfs2_super*,int,scalar_t__) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct ocfs2_super *VAR_4,
           struct ocfs2_alloc_context *VAR_5,
           int VAR_6,
           u32 VAR_7,
           u64 *VAR_8,
           int VAR_9)
{
 int VAR_10;
 u32 VAR_11 = VAR_5->ac_bits_wanted;
 struct inode *VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 struct ocfs2_dinode *VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_14(VAR_4, VAR_6, VAR_7);
 if (!VAR_12) {
  FUNC_11(-VAR_1);
  return -VAR_1;
 }

 FUNC_6(VAR_12);

 VAR_10 = FUNC_15(VAR_12, &VAR_13, 1);
 if (VAR_10 < 0) {
  FUNC_7(VAR_12);
  FUNC_8(VAR_12);

  FUNC_11(VAR_10);
  return VAR_10;
 }

 VAR_5->ac_inode = VAR_12;
 VAR_5->ac_alloc_slot = VAR_7;

 VAR_14 = (struct ocfs2_dinode *) VAR_13->b_data;



 FUNC_0(!FUNC_1(VAR_14));

 if (!(VAR_14->i_flags & FUNC_4(VAR_3))) {
  VAR_10 = FUNC_13(VAR_12->i_sb,
         "Invalid chain allocator %llu\n",
         (unsigned long long)FUNC_10(VAR_14->i_blkno));
  goto bail;
 }

 VAR_15 = FUNC_9(VAR_14->id1.bitmap1.i_total) -
  FUNC_9(VAR_14->id1.bitmap1.i_used);

 if (VAR_11 > VAR_15) {

  if (FUNC_16(VAR_12)) {
   FUNC_18(VAR_11,
        VAR_15);
   VAR_10 = -VAR_2;
   goto bail;
  }

  if (!(VAR_9 & VAR_0)) {
   FUNC_17(
      VAR_7, VAR_11, VAR_15);
   VAR_10 = -VAR_2;
   goto bail;
  }

  VAR_10 = FUNC_12(VAR_4, VAR_12, VAR_13,
       VAR_5->ac_max_block,
       VAR_8, VAR_9);
  if (VAR_10 < 0) {
   if (VAR_10 != -VAR_2)
    FUNC_11(VAR_10);
   goto bail;
  }
  FUNC_2(&VAR_4->alloc_stats.bg_extends);


  FUNC_0(VAR_11 >
         (FUNC_9(VAR_14->id1.bitmap1.i_total)
   - FUNC_9(VAR_14->id1.bitmap1.i_used)));
 }

 FUNC_5(VAR_13);
 VAR_5->ac_bh = VAR_13;
bail:
 FUNC_3(VAR_13);

 if (VAR_10)
  FUNC_11(VAR_10);
 return VAR_10;
}
