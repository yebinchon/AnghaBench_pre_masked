
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int maxfrsize; } ;
struct bfa_port_attr_s {int speed_supported; int port_state; int cos_supported; TYPE_2__ pport_cfg; int speed; } ;
struct bfa_lport_attr_s {int port_type; } ;
struct bfa_fcs_lport_s {int num_rports; TYPE_5__* fabric; TYPE_6__* fcs; } ;
struct bfa_fcs_lport_fdmi_s {TYPE_1__* ms; } ;
struct TYPE_10__ {int symname; } ;
struct bfa_fcs_fdmi_port_attr_s {void* num_ports; void* port_state; int port_act_fc4_type; int port_fabric_name; int scos; void* port_type; TYPE_3__ port_sym_name; int port_name; int node_name; int host_name; int os_device_name; void* max_frm_size; void* curr_speed; void* supp_speed; int supp_fc4_types; } ;
struct bfa_fcs_driver_info_s {int host_machine_name; int os_device_name; } ;
struct TYPE_14__ {int symname; } ;
struct TYPE_13__ {int bfa; struct bfa_fcs_driver_info_s driver_info; } ;
struct TYPE_12__ {TYPE_4__* lps; } ;
struct TYPE_11__ {int pr_nwwn; } ;
struct TYPE_8__ {struct bfa_fcs_lport_s* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct bfa_port_attr_s*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,struct bfa_lport_attr_s*) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 TYPE_7__ FUNC_4 (struct bfa_fcs_lport_s*) ;
 int FUNC_5 (struct bfa_fcs_lport_s*) ;
 int FUNC_6 (TYPE_6__*,int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct bfa_fcs_fdmi_port_attr_s*,int ,int) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_lport_fdmi_s *VAR_6,
     struct bfa_fcs_fdmi_port_attr_s *VAR_7)
{
 struct bfa_fcs_lport_s *VAR_8 = VAR_6->ms->port;
 struct bfa_fcs_driver_info_s *VAR_9 = &VAR_8->fcs->driver_info;
 struct bfa_port_attr_s VAR_10;
 struct bfa_lport_attr_s VAR_11;

 FUNC_9(VAR_7, 0, sizeof(struct bfa_fcs_fdmi_port_attr_s));




 FUNC_0(VAR_8->fcs->bfa, &VAR_10);




 FUNC_8(VAR_5, VAR_7->supp_fc4_types);




 switch (VAR_10.speed_supported) {
 case 130:
  VAR_7->supp_speed =
   FUNC_7(VAR_1);
  break;

 case 131:
  VAR_7->supp_speed =
   FUNC_7(VAR_0);
  break;

 case 128:
  VAR_7->supp_speed =
   FUNC_7(VAR_3);
  break;

 case 129:
  VAR_7->supp_speed =
   FUNC_7(VAR_2);
  break;

 default:
  FUNC_6(VAR_8->fcs, VAR_10.speed_supported);
 }




 VAR_7->curr_speed = FUNC_7(
    FUNC_1(VAR_10.speed));




 VAR_7->max_frm_size = FUNC_7(VAR_10.pport_cfg.maxfrsize);




 FUNC_10(VAR_7->os_device_name, VAR_9->os_device_name,
  sizeof(VAR_7->os_device_name));




 FUNC_10(VAR_7->host_name, VAR_9->host_machine_name,
  sizeof(VAR_7->host_name));

 VAR_7->node_name = FUNC_3(VAR_8);
 VAR_7->port_name = FUNC_5(VAR_8);

 FUNC_10(VAR_7->port_sym_name.symname,
  FUNC_4(VAR_8).symname, VAR_4);
 FUNC_2(VAR_8, &VAR_11);
 VAR_7->port_type = FUNC_7(VAR_11.port_type);
 VAR_7->scos = VAR_10.cos_supported;
 VAR_7->port_fabric_name = VAR_8->fabric->lps->pr_nwwn;
 FUNC_8(VAR_5, VAR_7->port_act_fc4_type);
 VAR_7->port_state = FUNC_7(VAR_10.port_state);
 VAR_7->num_ports = FUNC_7(VAR_8->num_rports);
}
