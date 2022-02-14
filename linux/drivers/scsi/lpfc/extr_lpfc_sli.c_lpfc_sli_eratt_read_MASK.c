
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int work_hs; int work_ha; int hba_flag; int HCregaddr; int HAregaddr; } ;


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
 scalar_t__ FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_12)
{
 uint32_t VAR_13;


 if (FUNC_0(VAR_12->HAregaddr, &VAR_13))
  goto unplug_err;

 if (VAR_13 & VAR_1) {

  if (FUNC_1(VAR_12))
   goto unplug_err;


  if ((VAR_3 & VAR_12->work_hs) &&
      ((VAR_4 | VAR_5 | VAR_6 | VAR_7 |
        VAR_8 | VAR_9 | VAR_10) & VAR_12->work_hs)) {
   VAR_12->hba_flag |= VAR_0;

   FUNC_3(0, VAR_12->HCregaddr);
   FUNC_2(VAR_12->HCregaddr);
  }


  VAR_12->work_ha |= VAR_1;

  VAR_12->hba_flag |= VAR_2;
  return 1;
 }
 return 0;

unplug_err:

 VAR_12->work_hs |= VAR_11;

 VAR_12->work_ha |= VAR_1;

 VAR_12->hba_flag |= VAR_2;
 return 1;
}
