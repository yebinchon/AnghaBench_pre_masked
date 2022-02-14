
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_event; int l_lock; int l_type; int l_level; int l_name; } ;
struct ocfs2_dlm_lksb {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int,int ,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,int) ;
 struct ocfs2_super* FUNC_3 (struct ocfs2_lock_res*) ;
 struct ocfs2_lock_res* FUNC_4 (struct ocfs2_dlm_lksb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ocfs2_dlm_lksb *VAR_3, int VAR_4)
{
 struct ocfs2_lock_res *VAR_5 = FUNC_4(VAR_3);
 struct ocfs2_super *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_4 <= VAR_0);

 FUNC_1(VAR_1, "BAST fired for lockres %s, blocking %d, level %d, "
      "type %s\n", VAR_5->l_name, VAR_4, VAR_5->l_level,
      FUNC_5(VAR_5->l_type));





 if (VAR_5->l_flags & VAR_2)
  return;

 FUNC_8(&VAR_5->l_lock, VAR_8);
 VAR_7 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7)
  FUNC_6(VAR_6, VAR_5);
 FUNC_9(&VAR_5->l_lock, VAR_8);

 FUNC_10(&VAR_5->l_event);

 FUNC_7(VAR_6);
}
