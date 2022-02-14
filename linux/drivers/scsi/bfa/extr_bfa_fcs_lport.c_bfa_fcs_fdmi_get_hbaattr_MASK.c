
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* symname; } ;
struct TYPE_12__ {TYPE_3__ node_sym_name; } ;
struct bfa_fcs_lport_s {TYPE_8__* fabric; TYPE_6__* fcs; TYPE_4__ port_cfg; } ;
struct bfa_fcs_lport_fdmi_s {TYPE_1__* ms; } ;
struct bfa_fcs_fdmi_port_attr_s {int max_frm_size; } ;
struct TYPE_10__ {int symname; } ;
struct bfa_fcs_fdmi_hba_attr_s {char* option_rom_ver; int bios_ver; int fabric_name; int num_ports; int vendor_info; TYPE_2__ node_sym_name; int max_ct_pyld; int os_name; int driver_version; int fw_version; int hw_version; int model_desc; int model; int serial_num; int manufacturer; } ;
struct bfa_fcs_driver_info_s {char* host_os_name; char* host_os_patch; scalar_t__ version; } ;
struct TYPE_16__ {TYPE_7__* lps; } ;
struct TYPE_15__ {int pr_nwwn; } ;
struct TYPE_14__ {TYPE_5__* bfa; struct bfa_fcs_driver_info_s driver_info; } ;
struct TYPE_13__ {int ioc; } ;
struct TYPE_9__ {struct bfa_fcs_lport_s* port; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_fcs_lport_fdmi_s*,struct bfa_fcs_fdmi_port_attr_s*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct bfa_fcs_fdmi_hba_attr_s*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_13(struct bfa_fcs_lport_fdmi_s *VAR_3,
    struct bfa_fcs_fdmi_hba_attr_s *VAR_4)
{
 struct bfa_fcs_lport_s *VAR_5 = VAR_3->ms->port;
 struct bfa_fcs_driver_info_s *VAR_6 = &VAR_5->fcs->driver_info;
 struct bfa_fcs_fdmi_port_attr_s VAR_7;

 FUNC_9(VAR_4, 0, sizeof(struct bfa_fcs_fdmi_hba_attr_s));

 FUNC_2(&VAR_5->fcs->bfa->ioc,
     VAR_4->manufacturer);
 FUNC_5(&VAR_5->fcs->bfa->ioc,
     VAR_4->serial_num);
 FUNC_3(&VAR_5->fcs->bfa->ioc,
     VAR_4->model);
 FUNC_3(&VAR_5->fcs->bfa->ioc,
     VAR_4->model_desc);
 FUNC_7(&VAR_5->fcs->bfa->ioc,
     VAR_4->hw_version);
 FUNC_4(&VAR_5->fcs->bfa->ioc,
     VAR_4->option_rom_ver);
 FUNC_1(&VAR_5->fcs->bfa->ioc,
     VAR_4->fw_version);

 FUNC_12(VAR_4->driver_version, (char *)VAR_6->version,
  sizeof(VAR_4->driver_version));

 FUNC_12(VAR_4->os_name, VAR_6->host_os_name,
  sizeof(VAR_4->os_name));





 if (VAR_6->host_os_patch[0] != '\0') {
  FUNC_11(VAR_4->os_name, VAR_0,
   sizeof(VAR_4->os_name));
  FUNC_11(VAR_4->os_name, VAR_6->host_os_patch,
    sizeof(VAR_4->os_name));
 }


 FUNC_0(VAR_3, &VAR_7);
 VAR_4->max_ct_pyld = VAR_7.max_frm_size;

 FUNC_12(VAR_4->node_sym_name.symname,
  VAR_5->port_cfg.node_sym_name.symname, VAR_1);
 FUNC_10(VAR_4->vendor_info, "QLogic");
 VAR_4->num_ports =
  FUNC_8(FUNC_6(&VAR_5->fcs->bfa->ioc));
 VAR_4->fabric_name = VAR_5->fabric->lps->pr_nwwn;
 FUNC_12(VAR_4->bios_ver, VAR_4->option_rom_ver, VAR_2);

}
