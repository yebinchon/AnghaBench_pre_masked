
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_event; int l_lock; void* l_requested; void* l_level; int l_name; int l_namelen; } ;
struct ocfs2_dlm_lksb {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct user_lock_res*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct user_lock_res* FUNC_5 (struct ocfs2_dlm_lksb*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_dlm_lksb *VAR_8, int VAR_9)
{
 struct user_lock_res *VAR_10 = FUNC_5(VAR_8);

 FUNC_2(VAR_2, "UNLOCK AST fired for lockres %.*s, flags 0x%x\n",
      VAR_10->l_namelen, VAR_10->l_name, VAR_10->l_flags);

 if (VAR_9)
  FUNC_2(VAR_3, "dlm returns status %d\n", VAR_9);

 FUNC_3(&VAR_10->l_lock);



 if (VAR_10->l_flags & VAR_7
     && !(VAR_10->l_flags & VAR_6)) {
  VAR_10->l_level = VAR_1;
 } else if (VAR_9 == VAR_0) {



  FUNC_0(!(VAR_10->l_flags & VAR_6));
  VAR_10->l_flags &= ~VAR_6;
  goto out_noclear;
 } else {
  FUNC_0(!(VAR_10->l_flags & VAR_6));

  VAR_10->l_requested = VAR_1;


  VAR_10->l_flags &= ~VAR_6;


  if (VAR_10->l_flags & VAR_4)
   FUNC_1(VAR_10);
 }

 VAR_10->l_flags &= ~VAR_5;
out_noclear:
 FUNC_4(&VAR_10->l_lock);

 FUNC_6(&VAR_10->l_event);
}
