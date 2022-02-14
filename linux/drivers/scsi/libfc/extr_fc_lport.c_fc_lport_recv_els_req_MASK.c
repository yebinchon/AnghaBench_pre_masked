
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disc_recv_req ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {int lp_mutex; TYPE_1__ tt; int point_to_multipoint; int link_up; } ;
struct fc_frame {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_4 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_5 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_6 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_7 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_12(struct fc_lport *VAR_1,
      struct fc_frame *VAR_2)
{
 FUNC_9(&VAR_1->lp_mutex);






 if (!VAR_1->link_up)
  FUNC_0(VAR_2);
 else {



  switch (FUNC_1(VAR_2)) {
  case 132:
   if (!VAR_1->point_to_multipoint)
    FUNC_4(VAR_1, VAR_2);
   else
    FUNC_8(VAR_1, VAR_2);
   break;
  case 131:
   if (FUNC_2(VAR_2) == VAR_0)
    FUNC_5(VAR_1, VAR_2);
   else
    FUNC_8(VAR_1, VAR_2);
   break;
  case 128:
   VAR_1->tt.disc_recv_req(VAR_1, VAR_2);
   break;
  case 133:
   FUNC_3(VAR_1, VAR_2);
   break;
  case 130:
   FUNC_6(VAR_1, VAR_2);
   break;
  case 129:
   FUNC_7(VAR_1, VAR_2);
   break;
  default:
   FUNC_8(VAR_1, VAR_2);
   break;
  }
 }
 FUNC_10(&VAR_1->lp_mutex);
}
