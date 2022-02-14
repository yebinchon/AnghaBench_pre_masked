
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_lock_res {int l_lksb; } ;
struct TYPE_2__ {scalar_t__ os_seqno; struct ocfs2_lock_res os_lockres; } ;
struct ocfs2_super {TYPE_1__ osb_orphan_scan; } ;
struct ocfs2_orphan_scan_lvb {scalar_t__ lvb_version; int lvb_os_seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int ,int ) ;
 struct ocfs2_orphan_scan_lvb* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct ocfs2_super *VAR_3, u32 *VAR_4)
{
 struct ocfs2_lock_res *VAR_5;
 struct ocfs2_orphan_scan_lvb *VAR_6;
 int VAR_7 = 0;

 if (FUNC_4(VAR_3))
  return -VAR_1;

 if (FUNC_5(VAR_3))
  return 0;

 VAR_5 = &VAR_3->osb_orphan_scan.os_lockres;
 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_0, 0, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_2(&VAR_5->l_lksb);
 if (FUNC_3(&VAR_5->l_lksb) &&
     VAR_6->lvb_version == VAR_2)
  *VAR_4 = FUNC_0(VAR_6->lvb_os_seqno);
 else
  *VAR_4 = VAR_3->osb_orphan_scan.os_seqno + 1;

 return VAR_7;
}
