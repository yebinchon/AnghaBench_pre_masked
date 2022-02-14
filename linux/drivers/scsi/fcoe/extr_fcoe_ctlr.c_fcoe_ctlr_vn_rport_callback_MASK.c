
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fcoe_rport {int login_count; } ;
struct fcoe_ctlr {int ctlr_mutex; } ;
struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {TYPE_2__ ids; } ;
struct TYPE_3__ {struct fcoe_ctlr* priv; } ;
struct fc_lport {TYPE_1__ disc; } ;
typedef enum fc_rport_event { ____Placeholder_fc_rport_event } fc_rport_event ;


 int VAR_0 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,int ,...) ;




 int FUNC_1 (struct fc_rport_priv*) ;
 struct fcoe_rport* FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fc_lport *VAR_1,
     struct fc_rport_priv *VAR_2,
     enum fc_rport_event VAR_3)
{
 struct fcoe_ctlr *VAR_4 = VAR_1->disc.priv;
 struct fcoe_rport *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_4, "vn_rport_callback %x event %d\n",
   VAR_2->ids.port_id, VAR_3);

 FUNC_3(&VAR_4->ctlr_mutex);
 switch (VAR_3) {
 case 129:
  VAR_5->login_count = 0;
  break;
 case 130:
 case 131:
 case 128:
  VAR_5->login_count++;
  if (VAR_5->login_count > VAR_0) {
   FUNC_0(VAR_4,
     "rport FLOGI limited port_id %6.6x\n",
     VAR_2->ids.port_id);
   FUNC_1(VAR_2);
  }
  break;
 default:
  break;
 }
 FUNC_4(&VAR_4->ctlr_mutex);
}
