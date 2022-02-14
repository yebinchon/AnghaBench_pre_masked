
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_cluster_connection {int * cc_private; int * cc_lockspace; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_cluster_connection*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cluster_connection *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->cc_lockspace, 2);
 VAR_0->cc_lockspace = ((void*)0);
 FUNC_1(VAR_0->cc_private);
 VAR_0->cc_private = ((void*)0);
 return 0;
}
