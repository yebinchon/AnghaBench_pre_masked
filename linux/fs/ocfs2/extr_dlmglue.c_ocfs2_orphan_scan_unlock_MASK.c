
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_lock_res {int l_lksb; } ;
struct TYPE_2__ {struct ocfs2_lock_res os_lockres; } ;
struct ocfs2_super {TYPE_1__ osb_orphan_scan; } ;
struct ocfs2_orphan_scan_lvb {int lvb_os_seqno; int lvb_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int ) ;
 struct ocfs2_orphan_scan_lvb* FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 (struct ocfs2_super*) ;

void FUNC_5(struct ocfs2_super *VAR_2, u32 VAR_3)
{
 struct ocfs2_lock_res *VAR_4;
 struct ocfs2_orphan_scan_lvb *VAR_5;

 if (!FUNC_3(VAR_2) && !FUNC_4(VAR_2)) {
  VAR_4 = &VAR_2->osb_orphan_scan.os_lockres;
  VAR_5 = FUNC_2(&VAR_4->l_lksb);
  VAR_5->lvb_version = VAR_1;
  VAR_5->lvb_os_seqno = FUNC_0(VAR_3);
  FUNC_1(VAR_2, VAR_4, VAR_0);
 }
}
