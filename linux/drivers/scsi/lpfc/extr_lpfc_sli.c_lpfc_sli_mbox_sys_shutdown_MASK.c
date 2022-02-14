
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int sli_flag; scalar_t__ mbox_active; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_3 (struct lpfc_hba*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,unsigned long) ;

void
FUNC_9(struct lpfc_hba *VAR_5, int VAR_6)
{
 struct lpfc_sli *VAR_7 = &VAR_5->sli;
 unsigned long VAR_8;

 if (VAR_6 == VAR_1) {

  FUNC_5(100);
  FUNC_3(VAR_5);
  return;
 }
 VAR_8 = FUNC_4(VAR_0 * 1000) + VAR_4;


 FUNC_0();

 FUNC_6(&VAR_5->hbalock);
 VAR_7->sli_flag |= VAR_3;

 if (VAR_7->sli_flag & VAR_2) {



  if (VAR_5->sli.mbox_active)
   VAR_8 = FUNC_4(FUNC_2(VAR_5,
      VAR_5->sli.mbox_active) *
      1000) + VAR_4;
  FUNC_7(&VAR_5->hbalock);


  FUNC_1();

  while (VAR_5->sli.mbox_active) {

   FUNC_5(2);
   if (FUNC_8(VAR_4, VAR_8))



    break;
  }
 } else {
  FUNC_7(&VAR_5->hbalock);


  FUNC_1();
 }

 FUNC_3(VAR_5);
}
