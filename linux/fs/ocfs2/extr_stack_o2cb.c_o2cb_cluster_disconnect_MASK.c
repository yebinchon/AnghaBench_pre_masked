
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_cluster_connection {struct dlm_ctxt* cc_lockspace; struct o2dlm_private* cc_private; } ;
struct o2dlm_private {int op_eviction_cb; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct o2dlm_private*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cluster_connection *VAR_0)
{
 struct dlm_ctxt *VAR_1 = VAR_0->cc_lockspace;
 struct o2dlm_private *VAR_2 = VAR_0->cc_private;

 FUNC_1(&VAR_2->op_eviction_cb);
 VAR_0->cc_private = ((void*)0);
 FUNC_2(VAR_2);

 FUNC_0(VAR_1);
 VAR_0->cc_lockspace = ((void*)0);

 return 0;
}
