
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_debug_list; int l_name; } ;
struct ocfs2_dlm_debug {int d_lockres_tracking; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_lock_res *VAR_1,
           struct ocfs2_dlm_debug *VAR_2)
{
 FUNC_1(0, "Add tracking for lockres %s\n", VAR_1->l_name);

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_1->l_debug_list, &VAR_2->d_lockres_tracking);
 FUNC_3(&VAR_0);
}
