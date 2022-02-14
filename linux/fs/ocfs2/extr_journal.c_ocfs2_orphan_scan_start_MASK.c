
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_orphan_scan {int os_orphan_scan_work; int os_state; int os_scantime; } ;
struct ocfs2_super {int ocfs2_wq; struct ocfs2_orphan_scan osb_orphan_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int ) ;

void FUNC_6(struct ocfs2_super *VAR_2)
{
 struct ocfs2_orphan_scan *VAR_3;

 VAR_3 = &VAR_2->osb_orphan_scan;
 VAR_3->os_scantime = FUNC_1();
 if (FUNC_2(VAR_2) || FUNC_3(VAR_2))
  FUNC_0(&VAR_3->os_state, VAR_1);
 else {
  FUNC_0(&VAR_3->os_state, VAR_0);
  FUNC_5(VAR_2->ocfs2_wq, &VAR_3->os_orphan_scan_work,
       FUNC_4());
 }
}
