
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int temp_event_data ;
struct temp_event {scalar_t__ data; int event_code; int event_type; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_sli {int sli_flag; } ;
struct lpfc_hba {int hba_flag; int work_hs; int * work_status; int hbalock; int over_temp_state; struct lpfc_vport* pport; scalar_t__ MBslimaddr; int cfg_enable_hba_reset; int pcidev; struct lpfc_sli sli; } ;
struct Scsi_Host {int dummy; } ;
typedef int event_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_16 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int,char*,int) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,int ) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*,int,int,int ,...) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*) ;
 scalar_t__ FUNC_13 (int ) ;
 unsigned long FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(struct lpfc_hba *VAR_17)
{
 struct lpfc_vport *VAR_18 = VAR_17->pport;
 struct lpfc_sli *VAR_19 = &VAR_17->sli;
 uint32_t VAR_20;
 unsigned long VAR_21;
 struct temp_event VAR_22;
 struct Scsi_Host *VAR_23;




 if (FUNC_13(VAR_17->pcidev)) {
  FUNC_15(&VAR_17->hbalock);
  VAR_17->hba_flag &= ~VAR_0;
  FUNC_16(&VAR_17->hbalock);
  return;
 }


 if (!VAR_17->cfg_enable_hba_reset)
  return;


 FUNC_2(VAR_17);

 if (VAR_17->hba_flag & VAR_0)
  FUNC_3(VAR_17);

 if ((VAR_17->work_hs & VAR_5) || (VAR_17->work_hs & VAR_6)) {
  if (VAR_17->work_hs & VAR_5)

   FUNC_8(VAR_17, VAR_8, VAR_10,
     "1301 Re-establishing Link "
     "Data: x%x x%x x%x\n",
     VAR_17->work_hs, VAR_17->work_status[0],
     VAR_17->work_status[1]);
  if (VAR_17->work_hs & VAR_6)

   FUNC_8(VAR_17, VAR_8, VAR_10,
     "2861 Host Authentication device "
     "zeroization Data:x%x x%x x%x\n",
     VAR_17->work_hs, VAR_17->work_status[0],
     VAR_17->work_status[1]);

  FUNC_15(&VAR_17->hbalock);
  VAR_19->sli_flag &= ~VAR_13;
  FUNC_16(&VAR_17->hbalock);







  FUNC_10(VAR_17);





  FUNC_6(VAR_17, VAR_12);
  FUNC_4(VAR_17);
  FUNC_11(VAR_17);
  if (FUNC_7(VAR_17) == 0) {
   FUNC_12(VAR_17);
   return;
  }
  FUNC_12(VAR_17);
 } else if (VAR_17->work_hs & VAR_4) {
  VAR_21 = FUNC_14(VAR_17->MBslimaddr + VAR_16);
  VAR_22.event_type = VAR_2;
  VAR_22.event_code = VAR_11;
  VAR_22.data = (uint32_t)VAR_21;

  FUNC_8(VAR_17, VAR_7, VAR_9,
    "0406 Adapter maximum temperature exceeded "
    "(%ld), taking this port offline "
    "Data: x%x x%x x%x\n",
    VAR_21, VAR_17->work_hs,
    VAR_17->work_status[0], VAR_17->work_status[1]);

  VAR_23 = FUNC_9(VAR_17->pport);
  FUNC_1(VAR_23, FUNC_0(),
       sizeof(VAR_22),
       (char *) &VAR_22,
       VAR_15
       | VAR_14);

  FUNC_15(&VAR_17->hbalock);
  VAR_17->over_temp_state = VAR_3;
  FUNC_16(&VAR_17->hbalock);
  FUNC_5(VAR_17);

 } else {




  FUNC_8(VAR_17, VAR_7, VAR_9,
    "0457 Adapter Hardware Error "
    "Data: x%x x%x x%x\n",
    VAR_17->work_hs,
    VAR_17->work_status[0], VAR_17->work_status[1]);

  VAR_20 = VAR_1;
  VAR_23 = FUNC_9(VAR_18);
  FUNC_1(VAR_23, FUNC_0(),
    sizeof(VAR_20), (char *) &VAR_20,
    VAR_15 | VAR_14);

  FUNC_5(VAR_17);
 }
 return;
}
