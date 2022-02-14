
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_rec {int r_refcount; int r_clusters; int r_cpos; } ;
struct ocfs2_cow_context {scalar_t__ get_clusters; int * meta_ac; int * data_ac; int inode; TYPE_2__* post_refcount; int dealloc; int ref_root_bh; int data_et; scalar_t__ extra_credits; TYPE_1__* ref_tree; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {int (* func ) (int ,int *,int ) ;int para; scalar_t__ credits; } ;
struct TYPE_3__ {struct ocfs2_caching_info rf_ci; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_5 (int *,struct ocfs2_caching_info*,int ,unsigned int,unsigned int,int *,int *,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 unsigned int FUNC_9 (unsigned int,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int *,unsigned int,unsigned int,unsigned int,unsigned int,int *,int *) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (struct super_block*,int ,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ocfs2_caching_info*,int ,unsigned int,unsigned int,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 int FUNC_16 (struct super_block*,unsigned int,unsigned int,int *,struct ocfs2_caching_info*,int ,int **,int **,int*) ;
 int FUNC_17 (int *,struct ocfs2_cow_context*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int * FUNC_18 (struct ocfs2_super*,int) ;
 int FUNC_19 (int ,int *,int ) ;
 int FUNC_20 (unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_21(struct super_block *VAR_1,
     struct ocfs2_cow_context *VAR_2,
     u32 VAR_3, u32 VAR_4,
     u32 VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 struct ocfs2_super *VAR_15 = FUNC_2(VAR_1);
 handle_t *VAR_16;
 struct buffer_head *VAR_17 = ((void*)0);
 struct ocfs2_caching_info *VAR_18 = &VAR_2->ref_tree->rf_ci;
 struct ocfs2_refcount_rec VAR_19;

 FUNC_20(VAR_3, VAR_4,
        VAR_5, VAR_6);

 VAR_7 = FUNC_16(VAR_1, VAR_4, VAR_5,
          &VAR_2->data_et,
          VAR_18,
          VAR_2->ref_root_bh,
          &VAR_2->meta_ac,
          &VAR_2->data_ac, &VAR_10);
 if (VAR_7) {
  FUNC_10(VAR_7);
  return VAR_7;
 }

 if (VAR_2->post_refcount)
  VAR_10 += VAR_2->post_refcount->credits;

 VAR_10 += VAR_2->extra_credits;
 VAR_16 = FUNC_18(VAR_15, VAR_10);
 if (FUNC_1(VAR_16)) {
  VAR_7 = FUNC_3(VAR_16);
  FUNC_10(VAR_7);
  goto out;
 }

 VAR_13 = VAR_5;

 while (VAR_5) {
  VAR_7 = FUNC_15(VAR_18, VAR_2->ref_root_bh,
          VAR_4, VAR_5,
          &VAR_19, &VAR_9, &VAR_17);
  if (VAR_7) {
   FUNC_10(VAR_7);
   goto out_commit;
  }

  FUNC_0(!VAR_19.r_refcount);
  VAR_14 = FUNC_9((u64)VAR_4 + VAR_5,
         FUNC_8(VAR_19.r_cpos) +
         FUNC_7(VAR_19.r_clusters)) - VAR_4;
  if (FUNC_7(VAR_19.r_refcount) == 1) {
   VAR_8 = 0;
   VAR_7 = FUNC_11(VAR_16,
             &VAR_2->data_et,
             VAR_3, VAR_4,
             VAR_14, VAR_6,
             VAR_2->meta_ac,
             &VAR_2->dealloc);
   if (VAR_7) {
    FUNC_10(VAR_7);
    goto out_commit;
   }
  } else {
   VAR_8 = 1;

   VAR_7 = FUNC_4(VAR_16,
           VAR_2->data_ac,
           1, VAR_14,
           &VAR_11, &VAR_12);
   if (VAR_7) {
    FUNC_10(VAR_7);
    goto out_commit;
   }

   VAR_7 = FUNC_17(VAR_16, VAR_2,
           VAR_3, VAR_4, VAR_11,
           VAR_12, VAR_6);
   if (VAR_7) {
    FUNC_10(VAR_7);
    goto out_commit;
   }
   VAR_14 = VAR_12;
  }

  VAR_7 = FUNC_5(VAR_16, VAR_18,
      VAR_2->ref_root_bh,
      VAR_4, VAR_14,
      VAR_2->meta_ac,
      &VAR_2->dealloc, VAR_8);
  if (VAR_7) {
   FUNC_10(VAR_7);
   goto out_commit;
  }

  VAR_3 += VAR_14;
  VAR_4 += VAR_14;
  VAR_5 -= VAR_14;
  FUNC_6(VAR_17);
  VAR_17 = ((void*)0);
 }


 if (VAR_2->post_refcount && VAR_2->post_refcount->func) {
  VAR_7 = VAR_2->post_refcount->func(VAR_2->inode, VAR_16,
      VAR_2->post_refcount->para);
  if (VAR_7) {
   FUNC_10(VAR_7);
   goto out_commit;
  }
 }





 if (VAR_2->get_clusters == VAR_0) {
  VAR_7 = FUNC_13(VAR_1, VAR_2->inode, VAR_3,
            VAR_13);
  if (VAR_7)
   FUNC_10(VAR_7);
 }

out_commit:
 FUNC_12(VAR_15, VAR_16);

out:
 if (VAR_2->data_ac) {
  FUNC_14(VAR_2->data_ac);
  VAR_2->data_ac = ((void*)0);
 }
 if (VAR_2->meta_ac) {
  FUNC_14(VAR_2->meta_ac);
  VAR_2->meta_ac = ((void*)0);
 }
 FUNC_6(VAR_17);

 return VAR_7;
}
