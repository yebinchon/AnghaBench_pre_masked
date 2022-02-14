
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int) ;} ;
struct fc_lport {int r_a_tov; TYPE_1__ tt; int lp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_logo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_2 ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int FUNC_2 (struct fc_lport*,struct fc_frame*) ;
 int VAR_3 ;
 int FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_lport*,int ) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int) ;

__attribute__((used)) static void FUNC_8(struct fc_lport *VAR_4)
{
 struct fc_frame *VAR_5;
 struct fc_els_logo *VAR_6;

 FUNC_6(&VAR_4->lp_mutex);

 FUNC_0(VAR_4, "Entered LOGO state from %s state\n",
       FUNC_3(VAR_4));

 FUNC_4(VAR_4, VAR_2);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_6));
 if (!VAR_5) {
  FUNC_2(VAR_4, VAR_5);
  return;
 }

 if (!VAR_4->tt.elsct_send(VAR_4, VAR_1, VAR_5, VAR_0,
      VAR_3, VAR_4,
      2 * VAR_4->r_a_tov))
  FUNC_2(VAR_4, ((void*)0));
}
