
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_rec {int r_refcount; } ;
struct ocfs2_refcount_list {int rl_used; struct ocfs2_refcount_rec* rl_recs; } ;
struct ocfs2_refcount_block {struct ocfs2_refcount_list rf_records; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_refcount_rec*,struct ocfs2_refcount_rec*,int) ;
 int FUNC_5 (struct ocfs2_refcount_rec*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct ocfs2_caching_info*) ;
 int FUNC_10 (struct ocfs2_refcount_block*,int) ;
 int FUNC_11 (unsigned long long,int,int ,int) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_1,
         struct ocfs2_caching_info *VAR_2,
         struct buffer_head *VAR_3,
         int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 struct ocfs2_refcount_block *VAR_8 =
   (struct ocfs2_refcount_block *)VAR_3->b_data;
 struct ocfs2_refcount_list *VAR_9 = &VAR_8->rf_records;
 struct ocfs2_refcount_rec *VAR_10 = &VAR_9->rl_recs[VAR_4];

 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3,
          VAR_0);
 if (VAR_7) {
  FUNC_6(VAR_7);
  goto out;
 }

 FUNC_11(
  (unsigned long long)FUNC_9(VAR_2),
  VAR_4, FUNC_3(VAR_10->r_refcount), VAR_6);
 FUNC_2(&VAR_10->r_refcount, VAR_6);

 if (!VAR_10->r_refcount) {
  if (VAR_4 != FUNC_1(VAR_9->rl_used) - 1) {
   FUNC_4(VAR_10, VAR_10 + 1,
    (FUNC_1(VAR_9->rl_used) - VAR_4 - 1) *
    sizeof(struct ocfs2_refcount_rec));
   FUNC_5(&VAR_9->rl_recs[FUNC_1(VAR_9->rl_used) - 1],
          0, sizeof(struct ocfs2_refcount_rec));
  }

  FUNC_0(&VAR_9->rl_used, -1);
 } else if (VAR_5)
  FUNC_10(VAR_8, VAR_4);

 FUNC_8(VAR_1, VAR_3);
out:
 return VAR_7;
}
