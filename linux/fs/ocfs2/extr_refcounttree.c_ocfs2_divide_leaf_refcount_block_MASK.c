
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_refcount_rec {int dummy; } ;
struct ocfs2_refcount_list {int rl_used; int * rl_recs; int rl_count; } ;
struct ocfs2_refcount_block {int rf_cpos; struct ocfs2_refcount_list rf_records; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_refcount_list*,int *,int*) ;
 int FUNC_8 (int **,int,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (unsigned long long,int,int) ;

__attribute__((used)) static int FUNC_10(struct buffer_head *VAR_3,
         struct buffer_head *VAR_4,
         u32 *VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;
 u32 VAR_9 = 0;
 struct ocfs2_refcount_block *VAR_10 =
   (struct ocfs2_refcount_block *)VAR_3->b_data;
 struct ocfs2_refcount_list *VAR_11 = &VAR_10->rf_records;
 struct ocfs2_refcount_block *VAR_12 =
   (struct ocfs2_refcount_block *)VAR_4->b_data;
 struct ocfs2_refcount_list *VAR_13 = &VAR_12->rf_records;

 FUNC_9(
  (unsigned long long)VAR_3->b_blocknr,
  FUNC_3(VAR_11->rl_count), FUNC_3(VAR_11->rl_used));
 FUNC_8(&VAR_11->rl_recs, FUNC_3(VAR_11->rl_used),
      sizeof(struct ocfs2_refcount_rec),
      VAR_1, VAR_2);

 VAR_8 = FUNC_7(VAR_11, &VAR_9, &VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_8);
  return VAR_8;
 }

 VAR_12->rf_cpos = FUNC_1(VAR_9);


 VAR_7 = FUNC_3(VAR_11->rl_used) - VAR_6;
 FUNC_4(VAR_13->rl_recs, &VAR_11->rl_recs[VAR_6],
        VAR_7 * sizeof(struct ocfs2_refcount_rec));


 FUNC_5(&VAR_11->rl_recs[VAR_6], 0,
        VAR_7 * sizeof(struct ocfs2_refcount_rec));


 FUNC_2(&VAR_11->rl_used, -VAR_7);
 VAR_13->rl_used = FUNC_0(VAR_7);

 FUNC_8(&VAR_11->rl_recs, FUNC_3(VAR_11->rl_used),
      sizeof(struct ocfs2_refcount_rec),
      VAR_0, VAR_2);

 FUNC_8(&VAR_13->rl_recs, FUNC_3(VAR_13->rl_used),
      sizeof(struct ocfs2_refcount_rec),
      VAR_0, VAR_2);

 *VAR_5 = VAR_9;
 return 0;
}
