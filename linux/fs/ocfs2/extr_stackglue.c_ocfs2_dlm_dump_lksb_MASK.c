
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dlm_lksb {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* dump_lksb ) (struct ocfs2_dlm_lksb*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct ocfs2_dlm_lksb*) ;

void FUNC_1(struct ocfs2_dlm_lksb *VAR_1)
{
 VAR_0->sp_ops->dump_lksb(VAR_1);
}
