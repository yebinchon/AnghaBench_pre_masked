
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_blocking; int l_event; int l_lock; int l_flags; int l_level; int l_name; int l_namelen; } ;
struct ocfs2_dlm_lksb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct user_lock_res*) ;
 int FUNC_1 (int ,char*,int ,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct user_lock_res* FUNC_4 (struct ocfs2_dlm_lksb*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_dlm_lksb *VAR_2, int VAR_3)
{
 struct user_lock_res *VAR_4 = FUNC_4(VAR_2);

 FUNC_1(VAR_0, "BAST fired for lockres %.*s, blocking %d, level %d\n",
      VAR_4->l_namelen, VAR_4->l_name, VAR_3, VAR_4->l_level);

 FUNC_2(&VAR_4->l_lock);
 VAR_4->l_flags |= VAR_1;
 if (VAR_3 > VAR_4->l_blocking)
  VAR_4->l_blocking = VAR_3;

 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->l_lock);

 FUNC_5(&VAR_4->l_event);
}
