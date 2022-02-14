
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_status; } ;
struct ocfs2_dlm_lksb {TYPE_3__* lksb_conn; TYPE_1__ lksb_fsdlm; } ;
struct TYPE_6__ {TYPE_2__* cc_proto; } ;
struct TYPE_5__ {int (* lp_lock_ast ) (struct ocfs2_dlm_lksb*) ;int (* lp_unlock_ast ) (struct ocfs2_dlm_lksb*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_dlm_lksb*,int ) ;
 int FUNC_1 (struct ocfs2_dlm_lksb*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct ocfs2_dlm_lksb *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->lksb_fsdlm.sb_status;
 if (VAR_4 == -VAR_1 || VAR_4 == -VAR_0)
  VAR_3->lksb_conn->cc_proto->lp_unlock_ast(VAR_3, 0);
 else
  VAR_3->lksb_conn->cc_proto->lp_lock_ast(VAR_3);
}
