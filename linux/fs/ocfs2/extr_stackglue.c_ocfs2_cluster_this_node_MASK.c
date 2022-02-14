
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_cluster_connection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* this_node ) (struct ocfs2_cluster_connection*,unsigned int*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct ocfs2_cluster_connection*,unsigned int*) ;

int FUNC_1(struct ocfs2_cluster_connection *VAR_1,
       unsigned int *VAR_2)
{
 return VAR_0->sp_ops->this_node(VAR_1, VAR_2);
}
