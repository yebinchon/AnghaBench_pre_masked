
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_quota_data {int dummy; } ;
struct gfs2_inode {TYPE_2__* i_qadata; int i_flags; int i_inode; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_4__ {size_t qa_qd_num; int * qa_qd_ghs; struct gfs2_quota_data** qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_quota_data*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gfs2_inode*,int ,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct gfs2_quota_data**,size_t,int,int ,int *) ;
 int VAR_4 ;

int FUNC_8(struct gfs2_inode *VAR_5, kuid_t VAR_6, kgid_t VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_5->i_inode);
 struct gfs2_quota_data *VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 if (FUNC_1(VAR_0) ||
     VAR_8->sd_args.ar_quota != VAR_1)
  return 0;

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;

 FUNC_7(VAR_5->i_qadata->qa_qd, VAR_5->i_qadata->qa_qd_num,
      sizeof(struct gfs2_quota_data *), VAR_4, ((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_5->i_qadata->qa_qd_num; VAR_10++) {
  VAR_9 = VAR_5->i_qadata->qa_qd[VAR_10];
  VAR_11 = FUNC_2(VAR_9, VAR_3, &VAR_5->i_qadata->qa_qd_ghs[VAR_10]);
  if (VAR_11)
   break;
 }

 if (!VAR_11)
  FUNC_6(VAR_2, &VAR_5->i_flags);
 else {
  while (VAR_10--)
   FUNC_3(&VAR_5->i_qadata->qa_qd_ghs[VAR_10]);
  FUNC_5(VAR_5);
 }

 return VAR_11;
}
