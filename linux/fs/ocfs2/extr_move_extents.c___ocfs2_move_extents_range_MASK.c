
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int s_clustersize_bits; int sb; } ;
struct ocfs2_move_extents_context {int auto_defrag; int clusters_moved; int new_phys_cpos; int dealloc; int et; int refcount_loc; struct ocfs2_move_extents* range; struct inode* inode; } ;
struct ocfs2_move_extents {int me_len; int me_start; int me_threshold; void* me_new_offset; void* me_moved_len; int me_flags; int me_goal; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int*,int*,int,int*) ;
 int FUNC_9 (int ,int) ;
 void* FUNC_10 (int ,int) ;
 int FUNC_11 (struct ocfs2_move_extents_context*,int,int,int*,int) ;
 int FUNC_12 (struct inode*,int,int*,int*,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,struct buffer_head*) ;
 int FUNC_15 (struct ocfs2_move_extents_context*,int,int,int*,int,int) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 int FUNC_17 (struct ocfs2_super*,int) ;

__attribute__((used)) static int FUNC_18(struct buffer_head *VAR_2,
    struct ocfs2_move_extents_context *VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

 struct inode *VAR_16 = VAR_3->inode;
 struct ocfs2_dinode *VAR_17 = (struct ocfs2_dinode *)VAR_2->b_data;
 struct ocfs2_move_extents *VAR_18 = VAR_3->range;
 struct ocfs2_super *VAR_19 = FUNC_2(VAR_16->i_sb);

 if ((FUNC_3(VAR_16) == 0) || (VAR_18->me_len == 0))
  return 0;

 if (FUNC_1(VAR_16)->ip_dyn_features & VAR_0)
  return 0;

 VAR_3->refcount_loc = FUNC_4(VAR_17->i_refcount_loc);

 FUNC_14(&VAR_3->et, FUNC_0(VAR_16), VAR_2);
 FUNC_13(&VAR_3->dealloc);







 VAR_6 = VAR_3->auto_defrag;






 VAR_10 = FUNC_9(VAR_19->sb, VAR_18->me_start);
 VAR_11 = (VAR_18->me_start + VAR_18->me_len) >>
      VAR_19->s_clustersize_bits;
 if (VAR_11 >= VAR_10)
  VAR_11 -= VAR_10;
 else
  VAR_11 = 0;

 if (VAR_6) {
  VAR_14 = VAR_18->me_threshold >> VAR_19->s_clustersize_bits;
  if (VAR_14 <= 1)
   goto done;
 } else
  VAR_15 = FUNC_7(VAR_16->i_sb,
        VAR_18->me_goal);

 FUNC_5(0, "Inode: %llu, start: %llu, len: %llu, cstart: %u, clen: %u, "
      "thresh: %u\n",
      (unsigned long long)FUNC_1(VAR_16)->ip_blkno,
      (unsigned long long)VAR_18->me_start,
      (unsigned long long)VAR_18->me_len,
      VAR_10, VAR_11, VAR_14);

 VAR_8 = VAR_10;
 while (VAR_11) {
  VAR_4 = FUNC_12(VAR_16, VAR_8, &VAR_9, &VAR_12,
      &VAR_5);
  if (VAR_4) {
   FUNC_6(VAR_4);
   goto out;
  }

  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;







  if (!VAR_9) {
   if (VAR_6)
    VAR_13 = 0;

   goto next;
  }

  if (VAR_6) {
   FUNC_8(&VAR_12, &VAR_13,
           VAR_14, &VAR_7);



   if (VAR_7) {
    VAR_7 = 0;
    goto next;
   }

   FUNC_5(0, "#Defrag: cpos: %u, phys_cpos: %u, "
        "alloc_size: %u, len_defraged: %u\n",
        VAR_8, VAR_9, VAR_12, VAR_13);

   VAR_4 = FUNC_11(VAR_3, VAR_8, VAR_9,
        &VAR_12, VAR_5);
  } else {
   VAR_4 = FUNC_15(VAR_3, VAR_8, VAR_9,
      &VAR_15, VAR_12,
      VAR_5);

   VAR_15 += VAR_12;
  }

  if (VAR_4 < 0) {
   FUNC_6(VAR_4);
   goto out;
  }

  VAR_3->clusters_moved += VAR_12;
next:
  VAR_8 += VAR_12;
  VAR_11 -= VAR_12;
 }

done:
 VAR_18->me_flags |= VAR_1;

out:
 VAR_18->me_moved_len = FUNC_10(VAR_19->sb,
            VAR_3->clusters_moved);
 VAR_18->me_new_offset = FUNC_10(VAR_19->sb,
             VAR_3->new_phys_cpos);

 FUNC_17(VAR_19, 1);
 FUNC_16(VAR_19, &VAR_3->dealloc);

 return VAR_4;
}
