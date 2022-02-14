
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_live_connection {int oc_version_lksb; } ;
struct ocfs2_cluster_connection {struct ocfs2_live_connection* cc_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_cluster_connection*,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_cluster_connection *VAR_1, int VAR_2,
  int VAR_3)
{
 struct ocfs2_live_connection *VAR_4 = VAR_1->cc_private;
 return FUNC_0(VAR_1, VAR_2, VAR_3,
   &VAR_4->oc_version_lksb, VAR_0);
}
