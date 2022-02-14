
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_refcount_rec {int r_refcount; int r_clusters; int r_cpos; } ;
struct TYPE_2__ {int rl_used; struct ocfs2_refcount_rec* rl_recs; } ;
struct ocfs2_refcount_block {TYPE_1__ rf_records; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,struct ocfs2_caching_info*,struct buffer_head*,int,int,int) ;
 scalar_t__ FUNC_8 (struct ocfs2_caching_info*) ;
 int FUNC_9 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_refcount_rec*,int,int,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_11 (unsigned long long,unsigned long long,unsigned int) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_0,
    struct ocfs2_caching_info *VAR_1,
    struct buffer_head *VAR_2,
    struct buffer_head *VAR_3,
    int VAR_4, u64 VAR_5, unsigned int VAR_6,
    struct ocfs2_alloc_context *VAR_7,
    struct ocfs2_cached_dealloc_ctxt *VAR_8)
{
 int VAR_9;
 struct ocfs2_refcount_block *VAR_10 =
   (struct ocfs2_refcount_block *)VAR_3->b_data;
 struct ocfs2_refcount_rec *VAR_11 = &VAR_10->rf_records.rl_recs[VAR_4];

 FUNC_0(VAR_5 < FUNC_5(VAR_11->r_cpos));
 FUNC_0(VAR_5 + VAR_6 >
        FUNC_5(VAR_11->r_cpos) + FUNC_4(VAR_11->r_clusters));

 FUNC_11(
  (unsigned long long)FUNC_8(VAR_1),
  (unsigned long long)VAR_5, VAR_6);

 if (VAR_5 == FUNC_5(VAR_11->r_cpos) &&
     VAR_6 == FUNC_4(VAR_11->r_clusters))
  VAR_9 = FUNC_7(VAR_0, VAR_1,
      VAR_3, VAR_4, 1, -1);
 else {
  struct ocfs2_refcount_rec VAR_12 = *VAR_11;
  VAR_12.r_cpos = FUNC_2(VAR_5);
  VAR_12.r_clusters = FUNC_1(VAR_6);

  FUNC_3(&VAR_12.r_refcount, -1);

  VAR_9 = FUNC_10(VAR_0, VAR_1,
            VAR_2, VAR_3,
            &VAR_12, VAR_4, 1,
            VAR_7, VAR_8);
 }

 if (VAR_9) {
  FUNC_6(VAR_9);
  goto out;
 }


 if (!VAR_10->rf_records.rl_used && VAR_3 != VAR_2) {
  VAR_9 = FUNC_9(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_7,
         VAR_8);
  if (VAR_9)
   FUNC_6(VAR_9);
 }

out:
 return VAR_9;
}
