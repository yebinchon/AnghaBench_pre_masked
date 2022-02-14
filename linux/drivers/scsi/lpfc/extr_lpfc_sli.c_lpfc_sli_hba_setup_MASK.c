
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {int cfg_sli_mode; int cfg_aer_support; int hba_flag; int sli_rev; int sli3_options; int max_vpi; int* vpi_ids; int link_state; int hbalock; TYPE_1__ sli; int * vpi_bmask; int iocb_rsp_size; int iocb_cmd_size; int pcidev; scalar_t__ fcp_embed_io; int cfg_enable_npiv; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_4 (struct lpfc_hba*,int) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct lpfc_hba *VAR_16)
{
 uint32_t VAR_17;
 int VAR_18 = 3, VAR_19;
 int VAR_20;

 switch (VAR_16->cfg_sli_mode) {
 case 2:
  if (VAR_16->cfg_enable_npiv) {
   FUNC_3(VAR_16, VAR_4, VAR_6 | VAR_7,
    "1824 NPIV enabled: Override sli_mode "
    "parameter (%d) to auto (0).\n",
    VAR_16->cfg_sli_mode);
   break;
  }
  VAR_18 = 2;
  break;
 case 0:
 case 3:
  break;
 default:
  FUNC_3(VAR_16, VAR_4, VAR_6 | VAR_7,
    "1819 Unrecognized sli_mode parameter: %d.\n",
    VAR_16->cfg_sli_mode);

  break;
 }
 VAR_16->fcp_embed_io = 0;

 VAR_17 = FUNC_4(VAR_16, VAR_18);

 if (VAR_17 && VAR_16->cfg_sli_mode == 3)
  FUNC_3(VAR_16, VAR_4, VAR_6 | VAR_7,
    "1820 Unable to select SLI-3.  "
    "Not supported by adapter.\n");
 if (VAR_17 && VAR_18 != 2)
  VAR_17 = FUNC_4(VAR_16, 2);
 else if (VAR_17 && VAR_18 == 2)
  VAR_17 = FUNC_4(VAR_16, 3);
 if (VAR_17)
  goto lpfc_sli_hba_setup_error;


 if (VAR_16->cfg_aer_support == 1 && !(VAR_16->hba_flag & VAR_3)) {
  VAR_17 = FUNC_7(VAR_16->pcidev);
  if (!VAR_17) {
   FUNC_3(VAR_16, VAR_5, VAR_6,
     "2709 This device supports "
     "Advanced Error Reporting (AER)\n");
   FUNC_8(&VAR_16->hbalock);
   VAR_16->hba_flag |= VAR_3;
   FUNC_9(&VAR_16->hbalock);
  } else {
   FUNC_3(VAR_16, VAR_5, VAR_6,
     "2708 This device does not support "
     "Advanced Error Reporting (AER): %d\n",
     VAR_17);
   VAR_16->cfg_aer_support = 0;
  }
 }

 if (VAR_16->sli_rev == 3) {
  VAR_16->iocb_cmd_size = VAR_14;
  VAR_16->iocb_rsp_size = VAR_15;
 } else {
  VAR_16->iocb_cmd_size = VAR_12;
  VAR_16->iocb_rsp_size = VAR_13;
  VAR_16->sli3_options = 0;
 }

 FUNC_3(VAR_16, VAR_5, VAR_6,
   "0444 Firmware in SLI %x mode. Max_vpi %d\n",
   VAR_16->sli_rev, VAR_16->max_vpi);
 VAR_17 = FUNC_6(VAR_16);

 if (VAR_17)
  goto lpfc_sli_hba_setup_error;


 if (VAR_16->sli_rev == VAR_11) {





  if ((VAR_16->vpi_bmask == ((void*)0)) && (VAR_16->vpi_ids == ((void*)0))) {
   VAR_20 = (VAR_16->max_vpi + VAR_0) / VAR_0;
   VAR_16->vpi_bmask = FUNC_0(VAR_20,
        sizeof(unsigned long),
        VAR_2);
   if (!VAR_16->vpi_bmask) {
    VAR_17 = -VAR_1;
    goto lpfc_sli_hba_setup_error;
   }

   VAR_16->vpi_ids = FUNC_0(VAR_16->max_vpi + 1,
      sizeof(uint16_t),
      VAR_2);
   if (!VAR_16->vpi_ids) {
    FUNC_1(VAR_16->vpi_bmask);
    VAR_17 = -VAR_1;
    goto lpfc_sli_hba_setup_error;
   }
   for (VAR_19 = 0; VAR_19 < VAR_16->max_vpi; VAR_19++)
    VAR_16->vpi_ids[VAR_19] = VAR_19;
  }
 }


 if (VAR_16->sli3_options & VAR_10) {
  VAR_17 = FUNC_5(VAR_16);
  if (VAR_17)
   goto lpfc_sli_hba_setup_error;
 }
 FUNC_8(&VAR_16->hbalock);
 VAR_16->sli.sli_flag |= VAR_9;
 FUNC_9(&VAR_16->hbalock);

 VAR_17 = FUNC_2(VAR_16);
 if (VAR_17)
  goto lpfc_sli_hba_setup_error;

 return VAR_17;

lpfc_sli_hba_setup_error:
 VAR_16->link_state = VAR_8;
 FUNC_3(VAR_16, VAR_4, VAR_6,
   "0445 Firmware initialization failed\n");
 return VAR_17;
}
