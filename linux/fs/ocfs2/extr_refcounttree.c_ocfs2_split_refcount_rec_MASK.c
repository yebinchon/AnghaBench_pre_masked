
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_refcount_rec {scalar_t__ r_cpos; void* r_refcount; void* r_clusters; } ;
struct ocfs2_refcount_list {struct ocfs2_refcount_rec* rl_recs; int rl_used; int rl_count; } ;
struct ocfs2_refcount_block {struct ocfs2_refcount_list rf_records; void* rf_flags; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (scalar_t__*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ocfs2_refcount_rec*,struct ocfs2_refcount_rec*,int) ;
 int FUNC_9 (struct ocfs2_refcount_rec*,struct ocfs2_refcount_rec*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*) ;
 int FUNC_12 (struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,int,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 int FUNC_13 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (struct ocfs2_refcount_block*,int) ;
 int FUNC_16 (scalar_t__,int,int,scalar_t__,int,int) ;
 int FUNC_17 (unsigned long long,int,unsigned long long,int,int) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_2,
        struct ocfs2_caching_info *VAR_3,
        struct buffer_head *VAR_4,
        struct buffer_head *VAR_5,
        struct ocfs2_refcount_rec *VAR_6,
        int VAR_7, int VAR_8,
        struct ocfs2_alloc_context *VAR_9,
        struct ocfs2_cached_dealloc_ctxt *VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;
 struct ocfs2_refcount_block *VAR_14 =
   (struct ocfs2_refcount_block *)VAR_5->b_data;
 struct ocfs2_refcount_list *VAR_15 = &VAR_14->rf_records;
 struct ocfs2_refcount_rec *VAR_16 = &VAR_15->rl_recs[VAR_7];
 struct ocfs2_refcount_rec *VAR_17 = ((void*)0);
 struct buffer_head *VAR_18 = ((void*)0);

 FUNC_0(FUNC_5(VAR_14->rf_flags) & VAR_1);

 FUNC_16(FUNC_7(VAR_16->r_cpos),
  FUNC_5(VAR_16->r_clusters),
  FUNC_5(VAR_16->r_refcount),
  FUNC_7(VAR_6->r_cpos),
  FUNC_5(VAR_6->r_clusters),
  FUNC_5(VAR_6->r_refcount));






 if (!VAR_6->r_refcount &&
     (VAR_6->r_cpos == VAR_16->r_cpos ||
      FUNC_7(VAR_6->r_cpos) +
      FUNC_5(VAR_6->r_clusters) ==
      FUNC_7(VAR_16->r_cpos) + FUNC_5(VAR_16->r_clusters)))
  VAR_12 = 0;
 else
  VAR_12 = 1;





 if (VAR_6->r_refcount &&
     (VAR_6->r_cpos != VAR_16->r_cpos &&
      FUNC_7(VAR_6->r_cpos) +
      FUNC_5(VAR_6->r_clusters) !=
      FUNC_7(VAR_16->r_cpos) + FUNC_5(VAR_16->r_clusters)))
  VAR_12++;


 if (FUNC_4(VAR_15->rl_used) + VAR_12 >
      FUNC_4(VAR_15->rl_count)) {
  struct ocfs2_refcount_rec VAR_19;
  u64 VAR_20 = FUNC_7(VAR_16->r_cpos);
  VAR_13 = FUNC_5(VAR_16->r_clusters);
  VAR_11 = FUNC_11(VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_9);
  if (VAR_11) {
   FUNC_10(VAR_11);
   goto out;
  }





  VAR_11 = FUNC_12(VAR_3, VAR_4,
          VAR_20, VAR_13, &VAR_19, &VAR_7,
          &VAR_18);
  if (VAR_11) {
   FUNC_10(VAR_11);
   goto out;
  }

  VAR_5 = VAR_18;
  VAR_14 = (struct ocfs2_refcount_block *)VAR_5->b_data;
  VAR_15 = &VAR_14->rf_records;
  VAR_16 = &VAR_15->rl_recs[VAR_7];
 }

 VAR_11 = FUNC_13(VAR_2, VAR_3, VAR_5,
          VAR_0);
 if (VAR_11) {
  FUNC_10(VAR_11);
  goto out;
 }






 if (VAR_7 != FUNC_4(VAR_15->rl_used) - 1)
  FUNC_9(&VAR_15->rl_recs[VAR_7 + 1 + VAR_12],
   &VAR_15->rl_recs[VAR_7 + 1],
   (FUNC_4(VAR_15->rl_used) - VAR_7 - 1) *
    sizeof(struct ocfs2_refcount_rec));

 VAR_13 = (FUNC_7(VAR_16->r_cpos) +
       FUNC_5(VAR_16->r_clusters)) -
       (FUNC_7(VAR_6->r_cpos) +
       FUNC_5(VAR_6->r_clusters));





 if (VAR_13) {
  VAR_17 = &VAR_15->rl_recs[VAR_7 + VAR_12];

  FUNC_8(VAR_17, VAR_16, sizeof(struct ocfs2_refcount_rec));
  FUNC_6(&VAR_17->r_cpos,
        FUNC_5(VAR_17->r_clusters) - VAR_13);
  VAR_17->r_clusters = FUNC_2(VAR_13);
 }
 if (VAR_6->r_cpos != VAR_16->r_cpos && VAR_17 != VAR_16) {
  VAR_13 = FUNC_7(VAR_6->r_cpos) -
        FUNC_7(VAR_16->r_cpos);
  VAR_16->r_clusters = FUNC_2(VAR_13);
  VAR_7++;
 }

 FUNC_3(&VAR_15->rl_used, VAR_12);

 if (VAR_6->r_refcount) {
  VAR_15->rl_recs[VAR_7] = *VAR_6;
  FUNC_17(
   (unsigned long long)VAR_5->b_blocknr, VAR_7,
   (unsigned long long)FUNC_7(VAR_6->r_cpos),
   FUNC_5(VAR_6->r_clusters),
   FUNC_5(VAR_6->r_refcount));

  if (VAR_8)
   FUNC_15(VAR_14, VAR_7);
 }

 FUNC_14(VAR_2, VAR_5);

out:
 FUNC_1(VAR_18);
 return VAR_11;
}
