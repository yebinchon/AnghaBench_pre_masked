
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {scalar_t__ local_alloc_bits; scalar_t__ bitmap_cpg; int local_alloc_state; struct buffer_head* local_alloc_bh; int slot_num; int sb; } ;
struct ocfs2_local_alloc {scalar_t__ la_size; scalar_t__ la_bm_off; } ;
struct TYPE_4__ {scalar_t__ i_total; scalar_t__ i_used; } ;
struct TYPE_5__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; scalar_t__ i_flags; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 struct ocfs2_local_alloc* FUNC_1 (struct ocfs2_dinode*) ;
 int VAR_7 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;
 int FUNC_7 (int) ;
 struct inode* FUNC_8 (struct ocfs2_super*,int ,int ) ;
 int FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (struct ocfs2_dinode*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_14 (scalar_t__) ;

int FUNC_15(struct ocfs2_super *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_dinode *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = ((void*)0);
 u32 VAR_12;
 struct inode *VAR_13 = ((void*)0);
 struct ocfs2_local_alloc *VAR_14;

 if (VAR_8->local_alloc_bits == 0)
  goto bail;

 if (VAR_8->local_alloc_bits >= VAR_8->bitmap_cpg) {
  FUNC_6(VAR_3, "Requested local alloc window %d is larger "
       "than max possible %u. Using defaults.\n",
       VAR_8->local_alloc_bits, (VAR_8->bitmap_cpg - 1));
  VAR_8->local_alloc_bits =
   FUNC_12(VAR_8->sb,
          FUNC_9(VAR_8));
 }


 VAR_13 = FUNC_8(VAR_8, VAR_1,
         VAR_8->slot_num);
 if (!VAR_13) {
  VAR_9 = -VAR_0;
  FUNC_7(VAR_9);
  goto bail;
 }

 VAR_9 = FUNC_13(VAR_13, &VAR_11,
          VAR_4);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto bail;
 }

 VAR_10 = (struct ocfs2_dinode *) VAR_11->b_data;
 VAR_14 = FUNC_1(VAR_10);

 if (!(FUNC_5(VAR_10->i_flags) &
     (VAR_7|VAR_5))) {
  FUNC_6(VAR_2, "Invalid local alloc inode, %llu\n",
       (unsigned long long)FUNC_0(VAR_13)->ip_blkno);
  VAR_9 = -VAR_0;
  goto bail;
 }

 if ((VAR_14->la_size == 0) ||
     (FUNC_4(VAR_14->la_size) > FUNC_11(VAR_13->i_sb))) {
  FUNC_6(VAR_2, "Local alloc size is invalid (la_size = %u)\n",
       FUNC_4(VAR_14->la_size));
  VAR_9 = -VAR_0;
  goto bail;
 }


 VAR_12 = FUNC_10(VAR_10);



 if (VAR_12
     || VAR_10->id1.bitmap1.i_used
     || VAR_10->id1.bitmap1.i_total
     || VAR_14->la_bm_off) {
  FUNC_6(VAR_2, "inconsistent detected, clean journal with"
       " unrecovered local alloc, please run fsck.ocfs2!\n"
       "found = %u, set = %u, taken = %u, off = %u\n",
       VAR_12, FUNC_5(VAR_10->id1.bitmap1.i_used),
       FUNC_5(VAR_10->id1.bitmap1.i_total),
       FUNC_1(VAR_10)->la_bm_off);

  VAR_9 = -VAR_0;
  goto bail;
 }

 VAR_8->local_alloc_bh = VAR_11;
 VAR_8->local_alloc_state = VAR_6;

bail:
 if (VAR_9 < 0)
  FUNC_2(VAR_11);
 FUNC_3(VAR_13);

 FUNC_14(VAR_8->local_alloc_bits);

 if (VAR_9)
  FUNC_7(VAR_9);
 return VAR_9;
}
