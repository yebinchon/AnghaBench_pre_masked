
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_lksb; int l_lock; scalar_t__ l_ex_holders; scalar_t__ l_ro_holders; int l_name; int l_namelen; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_cluster_connection* FUNC_0 (struct user_lock_res*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct ocfs2_cluster_connection*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,struct user_lock_res*) ;
 int FUNC_6 (struct user_lock_res*) ;

int FUNC_7(struct user_lock_res *VAR_6)
{
 int VAR_7 = -VAR_1;
 struct ocfs2_cluster_connection *VAR_8 =
  FUNC_0(VAR_6);

 FUNC_1(VAR_2, "lockres %.*s\n", VAR_6->l_namelen, VAR_6->l_name);

 FUNC_3(&VAR_6->l_lock);
 if (VAR_6->l_flags & VAR_5) {
  FUNC_4(&VAR_6->l_lock);
  return 0;
 }

 VAR_6->l_flags |= VAR_5;

 while (VAR_6->l_flags & VAR_4) {
  FUNC_4(&VAR_6->l_lock);

  FUNC_6(VAR_6);

  FUNC_3(&VAR_6->l_lock);
 }

 if (VAR_6->l_ro_holders || VAR_6->l_ex_holders) {
  FUNC_4(&VAR_6->l_lock);
  goto bail;
 }

 VAR_7 = 0;
 if (!(VAR_6->l_flags & VAR_3)) {
  FUNC_4(&VAR_6->l_lock);
  goto bail;
 }

 VAR_6->l_flags &= ~VAR_3;
 VAR_6->l_flags |= VAR_4;
 FUNC_4(&VAR_6->l_lock);

 VAR_7 = FUNC_2(VAR_8, &VAR_6->l_lksb, VAR_0);
 if (VAR_7) {
  FUNC_5("ocfs2_dlm_unlock", VAR_7, VAR_6);
  goto bail;
 }

 FUNC_6(VAR_6);

 VAR_7 = 0;
bail:
 return VAR_7;
}
