
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dlm_debug {scalar_t__ d_filter_secs; int d_lockres_tracking; int d_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ocfs2_dlm_debug* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

struct ocfs2_dlm_debug *FUNC_4(void)
{
 struct ocfs2_dlm_debug *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct ocfs2_dlm_debug), VAR_1);
 if (!VAR_2) {
  FUNC_3(-VAR_0);
  goto out;
 }

 FUNC_2(&VAR_2->d_refcnt);
 FUNC_0(&VAR_2->d_lockres_tracking);
 VAR_2->d_filter_secs = 0;
out:
 return VAR_2;
}
