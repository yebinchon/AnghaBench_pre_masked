
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_orphan_scan {int os_orphan_scan_work; int os_lock; scalar_t__ os_seqno; scalar_t__ os_count; struct ocfs2_super* os_osb; } ;
struct ocfs2_super {struct ocfs2_orphan_scan osb_orphan_scan; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct ocfs2_super *VAR_1)
{
 struct ocfs2_orphan_scan *VAR_2;

 VAR_2 = &VAR_1->osb_orphan_scan;
 VAR_2->os_osb = VAR_1;
 VAR_2->os_count = 0;
 VAR_2->os_seqno = 0;
 FUNC_1(&VAR_2->os_lock);
 FUNC_0(&VAR_2->os_orphan_scan_work, VAR_0);
}
