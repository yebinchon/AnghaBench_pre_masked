
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_live_connection {int oc_sync_wait; } ;
struct ocfs2_cluster_connection {struct ocfs2_live_connection* cc_private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ocfs2_cluster_connection *VAR_1 = VAR_0;
 struct ocfs2_live_connection *VAR_2 = VAR_1->cc_private;
 FUNC_0(&VAR_2->oc_sync_wait);
}
