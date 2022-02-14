
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_3__ {struct lpfc_fcf_pri* fcf_pri; } ;
struct lpfc_hba {int hbalock; TYPE_1__ fcf; } ;
struct TYPE_4__ {int flag; } ;
struct lpfc_fcf_pri {TYPE_2__ fcf_rec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lpfc_hba *VAR_1, uint16_t VAR_2)
{
 struct lpfc_fcf_pri *VAR_3;
 VAR_3 = &VAR_1->fcf.fcf_pri[VAR_2];
 FUNC_0(&VAR_1->hbalock);
 VAR_3->fcf_rec.flag |= VAR_0;
 FUNC_1(&VAR_1->hbalock);
}
