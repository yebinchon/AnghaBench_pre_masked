
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_dlm_lksb {struct ocfs2_cluster_connection* lksb_conn; } ;
struct ocfs2_cluster_connection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* dlm_lock ) (struct ocfs2_cluster_connection*,int,struct ocfs2_dlm_lksb*,int ,void*,unsigned int) ;} ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct ocfs2_cluster_connection*,int,struct ocfs2_dlm_lksb*,int ,void*,unsigned int) ;

int FUNC_2(struct ocfs2_cluster_connection *VAR_1,
     int VAR_2,
     struct ocfs2_dlm_lksb *VAR_3,
     u32 VAR_4,
     void *VAR_5,
     unsigned int VAR_6)
{
 if (!VAR_3->lksb_conn)
  VAR_3->lksb_conn = VAR_1;
 else
  FUNC_0(VAR_3->lksb_conn != VAR_1);
 return VAR_0->sp_ops->dlm_lock(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
}
