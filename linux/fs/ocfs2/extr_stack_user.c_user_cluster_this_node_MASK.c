
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_live_connection {scalar_t__ oc_type; int oc_this_node; } ;
struct ocfs2_cluster_connection {struct ocfs2_live_connection* cc_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct ocfs2_cluster_connection *VAR_3,
      unsigned int *VAR_4)
{
 int VAR_5;
 struct ocfs2_live_connection *VAR_6 = VAR_3->cc_private;

 if (VAR_6->oc_type == VAR_2)
  VAR_5 = FUNC_1();
 else if (VAR_6->oc_type == VAR_1)
  VAR_5 = FUNC_0(&VAR_6->oc_this_node);
 else
  VAR_5 = -VAR_0;

 if (VAR_5 < 0)
  return VAR_5;

 *VAR_4 = VAR_5;
 return 0;
}
