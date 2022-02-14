
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dlm_lksb {TYPE_2__* lksb_conn; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_4__ {TYPE_1__* cc_proto; } ;
struct TYPE_3__ {int (* lp_unlock_ast ) (struct ocfs2_dlm_lksb*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_dlm_lksb*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, enum dlm_status VAR_2)
{
 struct ocfs2_dlm_lksb *VAR_3 = VAR_1;
 int VAR_4 = FUNC_0(VAR_2);
 if (VAR_2 == VAR_0)
  return;

 VAR_3->lksb_conn->cc_proto->lp_unlock_ast(VAR_3, VAR_4);
}
