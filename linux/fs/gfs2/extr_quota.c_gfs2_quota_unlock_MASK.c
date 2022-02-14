
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int qd_flags; int qd_change_sync; } ;
struct gfs2_inode {TYPE_1__* i_qadata; int i_flags; int i_inode; } ;
struct TYPE_2__ {size_t qa_qd_num; int * qa_qd_ghs; struct gfs2_quota_data** qa_qd; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct gfs2_quota_data*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned int,struct gfs2_quota_data**) ;
 int FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_quota_data*) ;
 int FUNC_8 (struct gfs2_sbd*,struct gfs2_quota_data*,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct gfs2_quota_data*) ;
 int FUNC_10 (struct gfs2_quota_data*) ;
 int FUNC_11 (struct gfs2_quota_data*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

void FUNC_15(struct gfs2_inode *VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_0(&VAR_3->i_inode);
 struct gfs2_quota_data *VAR_5[4];
 unsigned int VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 if (!FUNC_14(VAR_0, &VAR_3->i_flags))
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_3->i_qadata->qa_qd_num; VAR_7++) {
  struct gfs2_quota_data *VAR_9;
  int VAR_10;

  VAR_9 = VAR_3->i_qadata->qa_qd[VAR_7];
  VAR_10 = FUNC_7(VAR_9);

  FUNC_5(&VAR_3->i_qadata->qa_qd_ghs[VAR_7]);
  if (!VAR_10)
   continue;

  FUNC_12(&VAR_2);
  VAR_8 = FUNC_8(VAR_4, VAR_9, ((void*)0));
  FUNC_13(&VAR_2);

  if (!VAR_8)
   continue;

  FUNC_4(VAR_4, VAR_9->qd_change_sync);
  if (FUNC_1(VAR_9)) {
   FUNC_2(VAR_1, &VAR_9->qd_flags);
   FUNC_11(VAR_9);
   FUNC_9(VAR_9);
   continue;
  }

  VAR_5[VAR_6++] = VAR_9;
 }

 if (VAR_6) {
  FUNC_3(VAR_6, VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_10(VAR_5[VAR_7]);
 }

out:
 FUNC_6(VAR_3);
}
