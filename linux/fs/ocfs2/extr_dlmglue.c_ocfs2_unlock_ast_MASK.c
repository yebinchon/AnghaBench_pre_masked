
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_unlock_action; int l_flags; int l_lock; int l_event; int l_level; int l_action; int l_name; } ;
struct ocfs2_dlm_lksb {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct ocfs2_lock_res*) ;
 struct ocfs2_lock_res* FUNC_4 (struct ocfs2_dlm_lksb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_dlm_lksb *VAR_7, int VAR_8)
{
 struct ocfs2_lock_res *VAR_9 = FUNC_4(VAR_7);
 unsigned long VAR_10;

 FUNC_2(VAR_1, "UNLOCK AST fired for lockres %s, action = %d\n",
      VAR_9->l_name, VAR_9->l_unlock_action);

 FUNC_6(&VAR_9->l_lock, VAR_10);
 if (VAR_8) {
  FUNC_2(VAR_2, "Dlm passes error %d for lock %s, "
       "unlock_action %d\n", VAR_8, VAR_9->l_name,
       VAR_9->l_unlock_action);
  FUNC_7(&VAR_9->l_lock, VAR_10);
  return;
 }

 switch(VAR_9->l_unlock_action) {
 case 129:
  FUNC_2(0, "Cancel convert success for %s\n", VAR_9->l_name);
  VAR_9->l_action = VAR_3;


  if (VAR_9->l_flags & VAR_4)
   FUNC_5(FUNC_3(VAR_9));
  break;
 case 128:
  VAR_9->l_level = VAR_0;
  break;
 default:
  FUNC_0();
 }

 FUNC_1(VAR_9, VAR_5);
 VAR_9->l_unlock_action = VAR_6;
 FUNC_8(&VAR_9->l_event);
 FUNC_7(&VAR_9->l_lock, VAR_10);
}
