
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ intr_mode; TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int VAR_5 ;
 int FUNC_10 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_6, int VAR_7,
       bool VAR_8)
{
 int VAR_9;
 uint32_t VAR_10;

 if (FUNC_0(VAR_5, &VAR_6->sli4_hba.sli_intf) >=
     VAR_4) {




  VAR_9 = FUNC_7(VAR_6);
  if (VAR_9)
   return VAR_9;
 }


 if (VAR_8)
  FUNC_4(VAR_6, VAR_1, VAR_2,
    "2887 Reset Needed: Attempting Port "
    "Recovery...\n");
 FUNC_2(VAR_6, VAR_7);
 FUNC_9(VAR_6);
 FUNC_1(VAR_6);

 FUNC_5(VAR_6);
 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_6, VAR_1, VAR_2,
    "6309 Failed to restart board\n");
  return VAR_9;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_6->intr_mode);
 if (VAR_10 == VAR_3) {
  FUNC_4(VAR_6, VAR_1, VAR_2,
    "3175 Failed to enable interrupt\n");
  return -VAR_0;
 }
 VAR_6->intr_mode = VAR_10;
 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 == 0)
  FUNC_10(VAR_6);

 return VAR_9;
}
