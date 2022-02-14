
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int partner_type; scalar_t__ pwr_op_mode; } ;
struct ucsi_connector {struct typec_partner* partner; int num; TYPE_1__* ucsi; int port; TYPE_2__ status; } ;
struct typec_partner_desc {int usb_pd; int accessory; } ;
struct typec_partner {int dummy; } ;
typedef int desc ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct typec_partner*) ;
 int FUNC_1 (struct typec_partner*) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct typec_partner_desc*,int ,int) ;
 struct typec_partner* FUNC_4 (int ,struct typec_partner_desc*) ;

__attribute__((used)) static int FUNC_5(struct ucsi_connector *VAR_3)
{
 struct typec_partner_desc VAR_4;
 struct typec_partner *VAR_5;

 if (VAR_3->partner)
  return 0;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));

 switch (VAR_3->status.partner_type) {
 case 128:
  VAR_4.accessory = VAR_1;
  break;
 case 129:
  VAR_4.accessory = VAR_0;
  break;
 default:
  break;
 }

 VAR_4.usb_pd = VAR_3->status.pwr_op_mode == VAR_2;

 VAR_5 = FUNC_4(VAR_3->port, &VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_3->ucsi->dev,
   "con%d: failed to register partner (%ld)\n", VAR_3->num,
   FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 VAR_3->partner = VAR_5;

 return 0;
}
