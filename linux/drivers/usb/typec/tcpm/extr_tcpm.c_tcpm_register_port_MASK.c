
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct typec_altmode_desc {scalar_t__ svid; } ;
struct typec_altmode {int * ops; } ;
struct TYPE_5__ {int revision; int pd_revision; int type; int port_type_set; int try_role; int vconn_set; int pr_set; int dr_set; int fwnode; int prefer_role; } ;
struct TYPE_4__ {int * identity; } ;
struct tcpm_port {int wq; struct typec_altmode* role_sw; int lock; struct typec_altmode** port_altmode; struct typec_altmode* typec_port; TYPE_2__ typec_caps; struct device* dev; int port_type; int partner_ident; TYPE_1__ partner_desc; int try_role; int pps_complete; int swap_complete; int tx_complete; int pd_event_lock; int event_work; int vdm_state_machine; int state_machine; int swap_lock; struct tcpc_dev* tcpc; } ;
struct tcpc_dev {TYPE_3__* config; int fwnode; int pd_transmit; int set_roles; int set_pd_rx; int set_vbus; int set_vconn; int set_polarity; int get_cc; int set_cc; int get_vbus; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct typec_altmode_desc* alt_modes; int try_role_hw; } ;


 int FUNC_0 (struct typec_altmode**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tcpm_port* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct typec_altmode*) ;
 int FUNC_5 (struct typec_altmode*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;
 struct tcpm_port* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct tcpm_port*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_4 ;
 int FUNC_16 (struct tcpm_port*,TYPE_3__*) ;
 int FUNC_17 (struct tcpm_port*) ;
 int FUNC_18 (struct tcpm_port*) ;
 int VAR_5 ;
 int FUNC_19 (struct tcpm_port*,int ) ;
 int FUNC_20 (struct tcpm_port*) ;
 int FUNC_21 (struct tcpm_port*,char*,int ,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (struct typec_altmode*,struct tcpm_port*) ;
 struct typec_altmode* FUNC_23 (struct typec_altmode*,struct typec_altmode_desc const*) ;
 struct typec_altmode* FUNC_24 (struct device*,TYPE_2__*) ;
 struct typec_altmode* FUNC_25 (struct device*) ;
 int FUNC_26 (struct typec_altmode*) ;
 int VAR_12 ;

struct tcpm_port *FUNC_27(struct device *VAR_13, struct tcpc_dev *VAR_14)
{
 struct tcpm_port *VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_13 || !VAR_14 ||
     !VAR_14->get_vbus || !VAR_14->set_cc || !VAR_14->get_cc ||
     !VAR_14->set_polarity || !VAR_14->set_vconn || !VAR_14->set_vbus ||
     !VAR_14->set_pd_rx || !VAR_14->set_roles || !VAR_14->pd_transmit)
  return FUNC_1(-VAR_0);

 VAR_15 = FUNC_9(VAR_13, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_1(-VAR_1);

 VAR_15->dev = VAR_13;
 VAR_15->tcpc = VAR_14;

 FUNC_12(&VAR_15->lock);
 FUNC_12(&VAR_15->swap_lock);

 VAR_15->wq = FUNC_6(FUNC_8(VAR_13));
 if (!VAR_15->wq)
  return FUNC_1(-VAR_1);
 FUNC_2(&VAR_15->state_machine, VAR_9);
 FUNC_2(&VAR_15->vdm_state_machine, VAR_12);
 FUNC_3(&VAR_15->event_work, VAR_6);

 FUNC_15(&VAR_15->pd_event_lock);

 FUNC_11(&VAR_15->tx_complete);
 FUNC_11(&VAR_15->swap_complete);
 FUNC_11(&VAR_15->pps_complete);
 FUNC_18(VAR_15);

 VAR_17 = FUNC_19(VAR_15, VAR_14->fwnode);
 if ((VAR_17 < 0) && VAR_14->config)
  VAR_17 = FUNC_16(VAR_15, VAR_14->config);
 if (VAR_17 < 0)
  goto out_destroy_wq;

 if (!VAR_14->config || !VAR_14->config->try_role_hw)
  VAR_15->try_role = VAR_15->typec_caps.prefer_role;
 else
  VAR_15->try_role = VAR_3;

 VAR_15->typec_caps.fwnode = VAR_14->fwnode;
 VAR_15->typec_caps.revision = 0x0120;
 VAR_15->typec_caps.pd_revision = 0x0300;
 VAR_15->typec_caps.dr_set = VAR_5;
 VAR_15->typec_caps.pr_set = VAR_8;
 VAR_15->typec_caps.vconn_set = VAR_11;
 VAR_15->typec_caps.try_role = VAR_10;
 VAR_15->typec_caps.port_type_set = VAR_7;

 VAR_15->partner_desc.identity = &VAR_15->partner_ident;
 VAR_15->port_type = VAR_15->typec_caps.type;

 VAR_15->role_sw = FUNC_25(VAR_15->dev);
 if (FUNC_4(VAR_15->role_sw)) {
  VAR_17 = FUNC_5(VAR_15->role_sw);
  goto out_destroy_wq;
 }

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17)
  goto out_role_sw_put;

 VAR_15->typec_port = FUNC_24(VAR_15->dev, &VAR_15->typec_caps);
 if (FUNC_4(VAR_15->typec_port)) {
  VAR_17 = FUNC_5(VAR_15->typec_port);
  goto out_role_sw_put;
 }

 if (VAR_14->config && VAR_14->config->alt_modes) {
  const struct typec_altmode_desc *VAR_18 = VAR_14->config->alt_modes;

  VAR_16 = 0;
  while (VAR_18->svid && VAR_16 < FUNC_0(VAR_15->port_altmode)) {
   struct typec_altmode *VAR_19;

   VAR_19 = FUNC_23(VAR_15->typec_port,
         VAR_18);
   if (FUNC_4(VAR_19)) {
    FUNC_21(VAR_15,
      "%s: failed to register port alternate mode 0x%x",
      FUNC_8(VAR_13), VAR_18->svid);
    break;
   }
   FUNC_22(VAR_19, VAR_15);
   VAR_19->ops = &VAR_4;
   VAR_15->port_altmode[VAR_16] = VAR_19;
   VAR_16++;
   VAR_18++;
  }
 }

 FUNC_13(&VAR_15->lock);
 FUNC_20(VAR_15);
 FUNC_14(&VAR_15->lock);

 FUNC_21(VAR_15, "%s: registered", FUNC_8(VAR_13));
 return VAR_15;

out_role_sw_put:
 FUNC_26(VAR_15->role_sw);
out_destroy_wq:
 FUNC_17(VAR_15);
 FUNC_7(VAR_15->wq);
 return FUNC_1(VAR_17);
}
