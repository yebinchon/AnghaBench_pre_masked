
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_register {int word0; } ;
struct TYPE_2__ {int BMBXregaddr; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_register*) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct lpfc_hba*,int *) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_3, LPFC_MBOXQ_t *VAR_4)
{
 uint32_t VAR_5;
 unsigned long VAR_6;
 struct lpfc_register VAR_7;

 VAR_6 = FUNC_3(FUNC_1(VAR_3, VAR_4)
       * 1000) + VAR_1;

 do {
  VAR_7.word0 = FUNC_4(VAR_3->sli4_hba.BMBXregaddr);
  VAR_5 = FUNC_0(VAR_2, &VAR_7);
  if (!VAR_5)
   FUNC_2(2);

  if (FUNC_5(VAR_1, VAR_6))
   return VAR_0;
 } while (!VAR_5);

 return 0;
}
