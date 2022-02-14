
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_lockres; } ;
struct ocfs2_super {int * cconn; TYPE_1__ osb_orphan_scan; int osb_nfs_sync_lockres; int osb_rename_lockres; int osb_super_lockres; int * dc_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ocfs2_super *VAR_0,
   int VAR_1)
{
 FUNC_3(VAR_0);







 if (VAR_0->dc_task) {
  FUNC_0(VAR_0->dc_task);
  VAR_0->dc_task = ((void*)0);
 }

 FUNC_4(&VAR_0->osb_super_lockres);
 FUNC_4(&VAR_0->osb_rename_lockres);
 FUNC_4(&VAR_0->osb_nfs_sync_lockres);
 FUNC_4(&VAR_0->osb_orphan_scan.os_lockres);

 FUNC_1(VAR_0->cconn, VAR_1);
 VAR_0->cconn = ((void*)0);

 FUNC_2(VAR_0);
}
