
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_altmode {int dummy; } ;
struct pd_mode_data {int altmodes; TYPE_1__* altmode_desc; } ;
struct tcpm_port {struct typec_altmode** partner_altmode; int partner; struct pd_mode_data mode_data; } ;
struct TYPE_2__ {int svid; } ;


 int FUNC_0 (struct tcpm_port*,char*,int ) ;
 struct typec_altmode* FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct tcpm_port *VAR_0)
{
 struct pd_mode_data *VAR_1 = &VAR_0->mode_data;
 struct typec_altmode *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->altmodes; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0->partner,
      &VAR_1->altmode_desc[VAR_3]);
  if (!VAR_2)
   FUNC_0(VAR_0, "Failed to register partner SVID 0x%04x",
     VAR_1->altmode_desc[VAR_3].svid);
  VAR_0->partner_altmode[VAR_3] = VAR_2;
 }
}
