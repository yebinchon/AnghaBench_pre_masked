
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accessory; int usb_pd; } ;
struct tcpm_port {int connected; TYPE_1__ partner_desc; int typec_port; int partner; int pd_capable; int partner_ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (struct tcpm_port*) ;
 scalar_t__ FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct tcpm_port *VAR_3)
{
 if (!VAR_3->connected) {

  FUNC_0(&VAR_3->partner_ident, 0, sizeof(VAR_3->partner_ident));
  VAR_3->partner_desc.usb_pd = VAR_3->pd_capable;
  if (FUNC_2(VAR_3))
   VAR_3->partner_desc.accessory = VAR_1;
  else if (FUNC_1(VAR_3))
   VAR_3->partner_desc.accessory = VAR_0;
  else
   VAR_3->partner_desc.accessory = VAR_2;
  VAR_3->partner = FUNC_3(VAR_3->typec_port,
             &VAR_3->partner_desc);
  VAR_3->connected = 1;
 }
}
