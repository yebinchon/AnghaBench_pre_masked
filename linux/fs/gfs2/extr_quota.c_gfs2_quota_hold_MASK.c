
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_quota_data {int dummy; } ;
struct TYPE_6__ {int i_gid; int i_uid; } ;
struct gfs2_inode {TYPE_2__* i_qadata; TYPE_3__ i_inode; int i_flags; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_5__ {int qa_qd_num; struct gfs2_quota_data** qa_qd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct gfs2_sbd*,int) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct gfs2_sbd*,int ,struct gfs2_quota_data**) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct gfs2_inode *VAR_5, kuid_t VAR_6, kgid_t VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_5->i_inode);
 struct gfs2_quota_data **VAR_9;
 int VAR_10;

 if (VAR_8->sd_args.ar_quota == VAR_1)
  return 0;

 if (VAR_5->i_qadata == ((void*)0)) {
  VAR_10 = FUNC_3(VAR_5);
  if (VAR_10)
   return VAR_10;
 }

 VAR_9 = VAR_5->i_qadata->qa_qd;

 if (FUNC_1(VAR_8, !VAR_5->i_qadata->qa_qd_num) ||
     FUNC_1(VAR_8, !FUNC_8(VAR_2, &VAR_5->i_flags)))
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_8, FUNC_6(VAR_5->i_inode.i_uid), VAR_9);
 if (VAR_10)
  goto out;
 VAR_5->i_qadata->qa_qd_num++;
 VAR_9++;

 VAR_10 = FUNC_7(VAR_8, FUNC_5(VAR_5->i_inode.i_gid), VAR_9);
 if (VAR_10)
  goto out;
 VAR_5->i_qadata->qa_qd_num++;
 VAR_9++;

 if (!FUNC_9(VAR_6, VAR_4) &&
     !FUNC_9(VAR_6, VAR_5->i_inode.i_uid)) {
  VAR_10 = FUNC_7(VAR_8, FUNC_6(VAR_6), VAR_9);
  if (VAR_10)
   goto out;
  VAR_5->i_qadata->qa_qd_num++;
  VAR_9++;
 }

 if (!FUNC_4(VAR_7, VAR_3) &&
     !FUNC_4(VAR_7, VAR_5->i_inode.i_gid)) {
  VAR_10 = FUNC_7(VAR_8, FUNC_5(VAR_7), VAR_9);
  if (VAR_10)
   goto out;
  VAR_5->i_qadata->qa_qd_num++;
  VAR_9++;
 }

out:
 if (VAR_10)
  FUNC_2(VAR_5);
 return VAR_10;
}
