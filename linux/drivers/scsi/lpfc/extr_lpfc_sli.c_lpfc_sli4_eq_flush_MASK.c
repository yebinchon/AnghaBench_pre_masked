
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_queue {int dummy; } ;
struct TYPE_2__ {int (* sli4_write_eq_db ) (struct lpfc_hba*,struct lpfc_queue*,scalar_t__,int ) ;} ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_eqe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_eqe*) ;
 struct lpfc_eqe* FUNC_1 (struct lpfc_queue*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_queue*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1, struct lpfc_queue *VAR_2)
{
 struct lpfc_eqe *VAR_3;
 uint32_t VAR_4 = 0;


 VAR_3 = FUNC_1(VAR_2);
 while (VAR_3) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_4++;
  VAR_3 = FUNC_1(VAR_2);
 }


 VAR_1->sli4_hba.sli4_write_eq_db(VAR_1, VAR_2, VAR_4, VAR_0);
}
