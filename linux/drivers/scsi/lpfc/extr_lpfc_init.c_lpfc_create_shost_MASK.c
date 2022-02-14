
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int fdmi_port_mask; int fdmi_hba_mask; int load_flag; } ;
struct lpfc_hba {scalar_t__ cfg_fdmi_on; scalar_t__ cfg_enable_SmartSAN; TYPE_1__* pcidev; int cfg_enable_fc4_type; int * targetport; int * txrdy_payload_pool; scalar_t__ nvmet_support; struct lpfc_vport* pport; int brd_no; int sdev_cnt; int fc_arbtov; int fc_altov; int fc_ratov; int fc_edtov; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*,int *,int ,int,int ) ;
 struct lpfc_vport* FUNC_2 (struct lpfc_hba*,int ,int *) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (TYPE_1__*,struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_15)
{
 struct lpfc_vport *VAR_16;
 struct Scsi_Host *VAR_17;


 VAR_15->fc_edtov = VAR_4;
 VAR_15->fc_ratov = VAR_5;
 VAR_15->fc_altov = VAR_2;
 VAR_15->fc_arbtov = VAR_3;

 FUNC_0(&VAR_15->sdev_cnt, 0);
 VAR_16 = FUNC_2(VAR_15, VAR_15->brd_no, &VAR_15->pcidev->dev);
 if (!VAR_16)
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_16);
 VAR_15->pport = VAR_16;

 if (VAR_15->nvmet_support) {

  if (VAR_15->txrdy_payload_pool == ((void*)0)) {
   VAR_15->txrdy_payload_pool = FUNC_1(
    "txrdy_pool", &VAR_15->pcidev->dev,
    VAR_14, 16, 0);
   if (VAR_15->txrdy_payload_pool) {
    VAR_15->targetport = ((void*)0);
    VAR_15->cfg_enable_fc4_type = VAR_9;
    FUNC_4(VAR_15, VAR_6,
      VAR_7 | VAR_8,
      "6076 NVME Target Found\n");
   }
  }
 }

 FUNC_3(VAR_16);

 FUNC_6(VAR_15->pcidev, VAR_17);





 VAR_16->load_flag |= VAR_1;
 if (VAR_15->cfg_enable_SmartSAN ||
     (VAR_15->cfg_fdmi_on == VAR_13)) {


  VAR_16->fdmi_hba_mask = VAR_10;
  if (VAR_15->cfg_enable_SmartSAN)
   VAR_16->fdmi_port_mask = VAR_12;
  else
   VAR_16->fdmi_port_mask = VAR_11;
 }
 return 0;
}
