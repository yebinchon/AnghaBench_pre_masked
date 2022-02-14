
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_nfs_sync_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;

int FUNC_4(struct ocfs2_super *VAR_4, int VAR_5)
{
 int VAR_6;
 struct ocfs2_lock_res *VAR_7 = &VAR_4->osb_nfs_sync_lockres;

 if (FUNC_2(VAR_4))
  return -VAR_0;

 if (FUNC_3(VAR_4))
  return 0;

 VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_5 ? VAR_1 : VAR_2,
        0, 0);
 if (VAR_6 < 0)
  FUNC_0(VAR_3, "lock on nfs sync lock failed %d\n", VAR_6);

 return VAR_6;
}
