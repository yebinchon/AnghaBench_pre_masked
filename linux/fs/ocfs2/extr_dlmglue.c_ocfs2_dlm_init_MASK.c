
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int os_lockres; } ;
struct ocfs2_super {int * dc_task; struct ocfs2_cluster_connection* cconn; TYPE_1__ osb_orphan_scan; int osb_nfs_sync_lockres; int osb_rename_lockres; int osb_super_lockres; scalar_t__ node_num; int uuid_str; int osb_cluster_name; int osb_cluster_stack; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct ocfs2_super*,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int ,struct ocfs2_super*,struct ocfs2_cluster_connection**) ;
 int FUNC_7 (struct ocfs2_cluster_connection*,int ) ;
 int FUNC_8 (struct ocfs2_cluster_connection*,scalar_t__*) ;
 int FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (struct ocfs2_super*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (struct ocfs2_super*) ;
 int FUNC_12 (int *,struct ocfs2_super*) ;
 int FUNC_13 (int *,struct ocfs2_super*) ;
 int FUNC_14 (int *,struct ocfs2_super*) ;
 int FUNC_15 (int *,struct ocfs2_super*) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct ocfs2_super *VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_cluster_connection *VAR_6 = ((void*)0);

 if (FUNC_11(VAR_4)) {
  VAR_4->node_num = 0;
  goto local;
 }

 FUNC_9(VAR_4);


 VAR_4->dc_task = FUNC_2(VAR_3, VAR_4, "ocfs2dc-%s",
   VAR_4->uuid_str);
 if (FUNC_0(VAR_4->dc_task)) {
  VAR_5 = FUNC_1(VAR_4->dc_task);
  VAR_4->dc_task = ((void*)0);
  FUNC_5(VAR_5);
  goto bail;
 }


 VAR_5 = FUNC_6(VAR_4->osb_cluster_stack,
           VAR_4->osb_cluster_name,
           FUNC_16(VAR_4->osb_cluster_name),
           VAR_4->uuid_str,
           FUNC_16(VAR_4->uuid_str),
           &VAR_1, VAR_2, VAR_4,
           &VAR_6);
 if (VAR_5) {
  FUNC_5(VAR_5);
  goto bail;
 }

 VAR_5 = FUNC_8(VAR_6, &VAR_4->node_num);
 if (VAR_5 < 0) {
  FUNC_5(VAR_5);
  FUNC_4(VAR_0,
       "could not find this host's node number\n");
  FUNC_7(VAR_6, 0);
  goto bail;
 }

local:
 FUNC_15(&VAR_4->osb_super_lockres, VAR_4);
 FUNC_14(&VAR_4->osb_rename_lockres, VAR_4);
 FUNC_12(&VAR_4->osb_nfs_sync_lockres, VAR_4);
 FUNC_13(&VAR_4->osb_orphan_scan.os_lockres, VAR_4);

 VAR_4->cconn = VAR_6;
bail:
 if (VAR_5 < 0) {
  FUNC_10(VAR_4);
  if (VAR_4->dc_task)
   FUNC_3(VAR_4->dc_task);
 }

 return VAR_5;
}
