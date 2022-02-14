
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_2__ sd_args; } ;
struct gfs2_quota_data {int qd_id; } ;
struct gfs2_inode {int i_diskflags; TYPE_1__* i_qadata; int i_inode; } ;
typedef int s64 ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_3__ {size_t qa_qd_num; struct gfs2_quota_data** qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_quota_data*,int ) ;
 scalar_t__ FUNC_2 (struct gfs2_sbd*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

void FUNC_6(struct gfs2_inode *VAR_2, s64 VAR_3,
         kuid_t VAR_4, kgid_t VAR_5)
{
 struct gfs2_quota_data *VAR_6;
 u32 VAR_7;
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_2->i_inode);

 if (VAR_8->sd_args.ar_quota != VAR_1 ||
     FUNC_2(VAR_8, VAR_3))
  return;
 if (VAR_2->i_diskflags & VAR_0)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2->i_qadata->qa_qd_num; VAR_7++) {
  VAR_6 = VAR_2->i_qadata->qa_qd[VAR_7];

  if (FUNC_5(VAR_6->qd_id, FUNC_4(VAR_4)) ||
      FUNC_5(VAR_6->qd_id, FUNC_3(VAR_5))) {
   FUNC_1(VAR_6, VAR_3);
  }
 }
}
