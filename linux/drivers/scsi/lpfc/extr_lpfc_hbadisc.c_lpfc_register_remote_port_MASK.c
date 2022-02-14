
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ cfg_enable_fc4_type; int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_8__ {int wwn; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_6__ {int wwn; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct lpfc_nodelist {int nlp_type; int nlp_sid; int nlp_DID; int vport; int nlp_class_sup; int nlp_maxframe; struct fc_rport* rport; int nlp_flag; TYPE_4__ nlp_portname; TYPE_2__ nlp_nodename; } ;
struct lpfc_hba {TYPE_5__* pcidev; } ;
struct fc_rport_identifiers {int roles; int port_id; void* port_name; void* node_name; } ;
struct fc_rport {int scsi_target_id; struct lpfc_rport_data* dd_data; int supported_classes; int maxframe_size; int dev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {int dev; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int *,char*) ;
 struct fc_rport* FUNC_1 (struct Scsi_Host*,int ,struct fc_rport_identifiers*) ;
 int FUNC_2 (struct fc_rport*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpfc_vport*,int ,char*,int ,int ,int) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (int ,int ,int ,char*,int ,struct fc_rport*,int ) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct lpfc_vport *VAR_18, struct lpfc_nodelist *VAR_19)
{
 struct Scsi_Host *VAR_20 = FUNC_8(VAR_18);
 struct fc_rport *VAR_21;
 struct lpfc_rport_data *VAR_22;
 struct fc_rport_identifiers VAR_23;
 struct lpfc_hba *VAR_24 = VAR_18->phba;

 if (VAR_18->cfg_enable_fc4_type == VAR_11)
  return;


 VAR_23.node_name = FUNC_10(VAR_19->nlp_nodename.u.wwn);
 VAR_23.port_name = FUNC_10(VAR_19->nlp_portname.u.wwn);
 VAR_23.port_id = VAR_19->nlp_DID;
 VAR_23.roles = VAR_5;
 VAR_21 = VAR_19->rport;
 if (VAR_21) {
  VAR_22 = VAR_21->dd_data;

  VAR_19->rport = ((void*)0);
  if (VAR_22) {
   if (VAR_22->pnode == VAR_19)
    FUNC_6(VAR_19);
   VAR_22->pnode = ((void*)0);
  }

  FUNC_9(&VAR_21->dev);
 }

 FUNC_4(VAR_18, VAR_10,
  "rport add:       did:x%x flg:x%x type x%x",
  VAR_19->nlp_DID, VAR_19->nlp_flag, VAR_19->nlp_type);


 if (VAR_18->load_flag & VAR_6)
  return;

 VAR_19->rport = VAR_21 = FUNC_1(VAR_20, 0, &VAR_23);
 if (!VAR_21 || !FUNC_3(&VAR_21->dev)) {
  FUNC_0(VAR_8, &VAR_24->pcidev->dev,
      "Warning: fc_remote_port_add failed\n");
  return;
 }


 VAR_21->maxframe_size = VAR_19->nlp_maxframe;
 VAR_21->supported_classes = VAR_19->nlp_class_sup;
 VAR_22 = VAR_21->dd_data;
 VAR_22->pnode = FUNC_5(VAR_19);

 if (VAR_19->nlp_type & VAR_14)
  VAR_23.roles |= VAR_1;
 if (VAR_19->nlp_type & VAR_13)
  VAR_23.roles |= VAR_0;
 if (VAR_19->nlp_type & VAR_16)
  VAR_23.roles |= VAR_3;
 if (VAR_19->nlp_type & VAR_17)
  VAR_23.roles |= VAR_4;
 if (VAR_19->nlp_type & VAR_15)
  VAR_23.roles |= VAR_2;

 if (VAR_23.roles != VAR_5)
  FUNC_2(VAR_21, VAR_23.roles);

 FUNC_7(VAR_19->vport, VAR_7, VAR_9,
    "3183 rport register x%06x, rport x%px role x%x\n",
    VAR_19->nlp_DID, VAR_21, VAR_23.roles);

 if ((VAR_21->scsi_target_id != -1) &&
     (VAR_21->scsi_target_id < VAR_12)) {
  VAR_19->nlp_sid = VAR_21->scsi_target_id;
 }
 return;
}
