
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ocfs2_live_connection {int oc_our_slot; int oc_wait; int oc_this_node; } ;
struct ocfs2_cluster_connection {struct ocfs2_live_connection* cc_private; } ;
struct dlm_slot {int slot; int nodeid; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct dlm_slot *VAR_1,
  int VAR_2, int VAR_3,
  uint32_t VAR_4)
{
 struct ocfs2_cluster_connection *VAR_5 = VAR_0;
 struct ocfs2_live_connection *VAR_6 = VAR_5->cc_private;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  if (VAR_1[VAR_7].slot == VAR_3) {
   FUNC_0(&VAR_6->oc_this_node, VAR_1[VAR_7].nodeid);
   break;
  }

 VAR_6->oc_our_slot = VAR_3;
 FUNC_1(&VAR_6->oc_wait);
}
