
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dlm_lksb {TYPE_2__* lksb_conn; } ;
struct TYPE_4__ {TYPE_1__* cc_proto; } ;
struct TYPE_3__ {int (* lp_lock_ast ) (struct ocfs2_dlm_lksb*) ;} ;


 int FUNC_0 (struct ocfs2_dlm_lksb*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ocfs2_dlm_lksb *VAR_1 = VAR_0;

 VAR_1->lksb_conn->cc_proto->lp_lock_ast(VAR_1);
}
