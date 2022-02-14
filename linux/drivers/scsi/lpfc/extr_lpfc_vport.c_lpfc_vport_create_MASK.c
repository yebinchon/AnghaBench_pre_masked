
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int portName; int nodeName; } ;
struct TYPE_9__ {int wwn; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_7__ {int wwn; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct lpfc_vport {int vpi; int fc_flag; scalar_t__ port_state; int fdmi_port_mask; int fdmi_hba_mask; int load_flag; struct fc_vport* fc_vport; int cfg_enable_fc4_type; int cfg_lun_queue_depth; TYPE_5__ fc_sparam; TYPE_4__ fc_nodename; TYPE_2__ fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_hba {int sli_rev; scalar_t__ cfg_fdmi_on; scalar_t__ link_state; scalar_t__ fc_topology; int link_flag; TYPE_6__* pport; scalar_t__ cfg_enable_SmartSAN; int max_vpi; scalar_t__ nvmet_support; int cfg_enable_npiv; } ;
struct fc_vport {scalar_t__ dd_data; int port_name; int node_name; int dev; struct Scsi_Host* shost; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_12__ {int fdmi_port_mask; int fdmi_hba_mask; int cfg_lun_queue_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 struct lpfc_vport* FUNC_4 (struct lpfc_hba*,int,int *) ;
 int FUNC_5 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_12 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_13 (struct lpfc_vport*) ;
 int FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_vport*) ;
 int FUNC_16 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_17 (struct lpfc_hba*,int *,char*) ;
 int FUNC_18 (struct lpfc_vport*,int ) ;
 int FUNC_19 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (int ,int ) ;

int
FUNC_22(struct fc_vport *VAR_24, bool VAR_25)
{
 struct lpfc_nodelist *VAR_26;
 struct Scsi_Host *VAR_27 = VAR_24->shost;
 struct lpfc_vport *VAR_28 = (struct lpfc_vport *) VAR_27->hostdata;
 struct lpfc_hba *VAR_29 = VAR_28->phba;
 struct lpfc_vport *VAR_30 = ((void*)0);
 int VAR_31;
 int VAR_32;
 int VAR_33 = VAR_20;
 int VAR_34;

 if ((VAR_29->sli_rev < 3) || !(VAR_29->cfg_enable_npiv)) {
  FUNC_11(VAR_29, VAR_9, VAR_11,
    "1808 Create VPORT failed: "
    "NPIV is not enabled: SLImode:%d\n",
    VAR_29->sli_rev);
  VAR_33 = VAR_21;
  goto error_out;
 }


 if (VAR_29->nvmet_support) {
  FUNC_11(VAR_29, VAR_9, VAR_11,
    "3189 Create VPORT failed: "
    "NPIV is not supported on NVME Target\n");
  VAR_33 = VAR_21;
  goto error_out;
 }

 VAR_32 = FUNC_3(VAR_29);
 if (VAR_32 == 0) {
  FUNC_11(VAR_29, VAR_9, VAR_11,
    "1809 Create VPORT failed: "
    "Max VPORTs (%d) exceeded\n",
    VAR_29->max_vpi);
  VAR_33 = VAR_22;
  goto error_out;
 }


 if ((VAR_31 = FUNC_8()) < 0) {
  FUNC_11(VAR_29, VAR_9, VAR_11,
    "1810 Create VPORT failed: Cannot get "
    "instance number\n");
  FUNC_7(VAR_29, VAR_32);
  VAR_33 = VAR_22;
  goto error_out;
 }

 VAR_30 = FUNC_4(VAR_29, VAR_31, &VAR_24->dev);
 if (!VAR_30) {
  FUNC_11(VAR_29, VAR_9, VAR_11,
    "1811 Create VPORT failed: vpi x%x\n", VAR_32);
  FUNC_7(VAR_29, VAR_32);
  VAR_33 = VAR_22;
  goto error_out;
 }

 VAR_30->vpi = VAR_32;
 FUNC_5(VAR_30);

 if ((VAR_34 = FUNC_19(VAR_29, VAR_30))) {
  if (VAR_34 == -VAR_0) {
   FUNC_12(VAR_30, VAR_9, VAR_11,
      "1831 Create VPORT Interrupted.\n");
   VAR_33 = VAR_20;
  } else {
   FUNC_12(VAR_30, VAR_9, VAR_11,
      "1813 Create VPORT failed. "
      "Cannot get sparam\n");
   VAR_33 = VAR_22;
  }
  FUNC_7(VAR_29, VAR_32);
  FUNC_1(VAR_30);
  goto error_out;
 }

 FUNC_21(VAR_24->node_name, VAR_30->fc_nodename.u.wwn);
 FUNC_21(VAR_24->port_name, VAR_30->fc_portname.u.wwn);

 FUNC_20(&VAR_30->fc_sparam.portName, VAR_30->fc_portname.u.wwn, 8);
 FUNC_20(&VAR_30->fc_sparam.nodeName, VAR_30->fc_nodename.u.wwn, 8);

 if (!FUNC_17(VAR_29, &VAR_30->fc_sparam.nodeName, "WWNN") ||
     !FUNC_17(VAR_29, &VAR_30->fc_sparam.portName, "WWPN")) {
  FUNC_12(VAR_30, VAR_9, VAR_11,
     "1821 Create VPORT failed. "
     "Invalid WWN format\n");
  FUNC_7(VAR_29, VAR_32);
  FUNC_1(VAR_30);
  VAR_33 = VAR_21;
  goto error_out;
 }

 if (!FUNC_16(VAR_29, VAR_30)) {
  FUNC_12(VAR_30, VAR_9, VAR_11,
     "1823 Create VPORT failed. "
     "Duplicate WWN on HBA\n");
  FUNC_7(VAR_29, VAR_32);
  FUNC_1(VAR_30);
  VAR_33 = VAR_21;
  goto error_out;
 }


 FUNC_2(VAR_30);


 VAR_30->cfg_lun_queue_depth = VAR_29->pport->cfg_lun_queue_depth;


 VAR_30->cfg_enable_fc4_type = VAR_12;

 *(struct lpfc_vport **)VAR_24->dd_data = VAR_30;
 VAR_30->fc_vport = VAR_24;


 VAR_30->load_flag |= VAR_1;
 if (VAR_29->cfg_enable_SmartSAN ||
     (VAR_29->cfg_fdmi_on == VAR_14)) {

  VAR_30->fdmi_hba_mask = VAR_29->pport->fdmi_hba_mask;
  VAR_30->fdmi_port_mask = VAR_29->pport->fdmi_port_mask;
 }





 if ((VAR_29->sli_rev == VAR_16) &&
     (VAR_28->fc_flag & VAR_2)) {
  VAR_33 = FUNC_15(VAR_30);
  if (VAR_33) {
   FUNC_11(VAR_29, VAR_9, VAR_11,
     "1838 Failed to INIT_VPI on vpi %d "
     "status %d\n", VAR_32, VAR_33);
   VAR_33 = VAR_22;
   FUNC_7(VAR_29, VAR_32);
   goto error_out;
  }
 } else if (VAR_29->sli_rev == VAR_16) {




  VAR_30->fc_flag |= VAR_6;
  FUNC_18(VAR_30, VAR_5);
  VAR_33 = VAR_23;
  goto out;
 }

 if ((VAR_29->link_state < VAR_15) ||
     (VAR_28->port_state < VAR_13) ||
     (VAR_29->fc_topology == VAR_17)) {
  FUNC_18(VAR_30, VAR_5);
  VAR_33 = VAR_23;
  goto out;
 }

 if (VAR_25) {
  FUNC_18(VAR_30, VAR_3);
  VAR_33 = VAR_23;
  goto out;
 }




 VAR_26 = FUNC_6(VAR_29->pport, VAR_8);
 if (VAR_26 && FUNC_0(VAR_26) &&
     VAR_26->nlp_state == VAR_19) {
  if (VAR_29->link_flag & VAR_18) {
   FUNC_13(VAR_30);
   FUNC_10(VAR_30);
  } else {
   FUNC_18(VAR_30, VAR_7);
   FUNC_12(VAR_30, VAR_9, VAR_10,
      "0262 No NPIV Fabric support\n");
  }
 } else {
  FUNC_18(VAR_30, VAR_4);
 }
 VAR_33 = VAR_23;

out:
 FUNC_12(VAR_30, VAR_9, VAR_11,
   "1825 Vport Created.\n");
 FUNC_9(FUNC_14(VAR_30));
error_out:
 return VAR_33;
}
