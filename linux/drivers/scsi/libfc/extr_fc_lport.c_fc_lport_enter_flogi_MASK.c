
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int) ;} ;
struct fc_lport {int r_a_tov; int e_d_tov; scalar_t__ vport; TYPE_1__ tt; scalar_t__ port_id; scalar_t__ point_to_multipoint; int lp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_flogi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_3 ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int FUNC_2 (struct fc_lport*) ;
 void FUNC_3 (struct fc_lport*,struct fc_frame*) ;
 int VAR_4 ;
 int FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (struct fc_lport*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int) ;

__attribute__((used)) static void FUNC_8(struct fc_lport *VAR_5)
{
 struct fc_frame *VAR_6;

 FUNC_6(&VAR_5->lp_mutex);

 FUNC_0(VAR_5, "Entered FLOGI state from %s state\n",
       FUNC_4(VAR_5));

 FUNC_5(VAR_5, VAR_3);

 if (VAR_5->point_to_multipoint) {
  if (VAR_5->port_id)
   FUNC_2(VAR_5);
  return;
 }

 VAR_6 = FUNC_1(VAR_5, sizeof(struct fc_els_flogi));
 if (!VAR_6)
  return FUNC_3(VAR_5, VAR_6);

 if (!VAR_5->tt.elsct_send(VAR_5, VAR_2, VAR_6,
      VAR_5->vport ? VAR_0 : VAR_1,
      VAR_4, VAR_5,
      VAR_5->vport ? 2 * VAR_5->r_a_tov :
      VAR_5->e_d_tov))
  FUNC_3(VAR_5, ((void*)0));
}
