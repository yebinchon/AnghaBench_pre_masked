
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_dlm_lksb {int * lksb_conn; } ;
struct ocfs2_cluster_connection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* dlm_unlock ) (struct ocfs2_cluster_connection*,struct ocfs2_dlm_lksb*,int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct ocfs2_cluster_connection*,struct ocfs2_dlm_lksb*,int ) ;

int FUNC_2(struct ocfs2_cluster_connection *VAR_1,
       struct ocfs2_dlm_lksb *VAR_2,
       u32 VAR_3)
{
 FUNC_0(VAR_2->lksb_conn == ((void*)0));

 return VAR_0->sp_ops->dlm_unlock(VAR_1, VAR_2, VAR_3);
}
