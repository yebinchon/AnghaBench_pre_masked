
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_debug_root; struct ocfs2_dlm_debug* osb_dlm_debug; } ;
struct ocfs2_dlm_debug {int d_filter_secs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,struct ocfs2_super*,int *) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_3)
{
 struct ocfs2_dlm_debug *VAR_4 = VAR_3->osb_dlm_debug;

 FUNC_0("locking_state", VAR_0|VAR_1,
       VAR_3->osb_debug_root, VAR_3, &VAR_2);

 FUNC_1("locking_filter", 0600, VAR_3->osb_debug_root,
      &VAR_4->d_filter_secs);
}
