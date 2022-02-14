
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_register {int word0; int member_0; } ;
struct TYPE_4__ {int STATUSregaddr; } ;
struct TYPE_6__ {TYPE_1__ if_type2; } ;
struct TYPE_5__ {TYPE_3__ u; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

int
FUNC_3(struct lpfc_hba *VAR_6)
{
 struct lpfc_register VAR_7 = {0};
 int VAR_8;

 FUNC_2(100);
 FUNC_1(VAR_6->sli4_hba.u.if_type2.STATUSregaddr,
     &VAR_7.word0);


 if (!FUNC_0(VAR_5, &VAR_7) &&
     !FUNC_0(VAR_3, &VAR_7))
  return -VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_2(10);
  FUNC_1(VAR_6->sli4_hba.u.if_type2.STATUSregaddr,
      &VAR_7.word0);
  if (!FUNC_0(VAR_3, &VAR_7))
   continue;
  if (!FUNC_0(VAR_5, &VAR_7))
   continue;
  if (!FUNC_0(VAR_4, &VAR_7))
   continue;
  break;
 }

 if (VAR_8 < VAR_2)
  return 0;
 else
  return -VAR_0;
}
