
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_xri_cnt; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int *) ;
 int FUNC_3 (struct lpfc_hba*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_2)
{
 FUNC_0(VAR_1);
 int VAR_3, VAR_4 = 0;


 FUNC_2(VAR_2, &VAR_1);


 if (!FUNC_1(&VAR_1)) {
  VAR_3 = FUNC_3(
   VAR_2, &VAR_1, VAR_2->sli4_hba.io_xri_cnt);

  if (VAR_3 == 0)
   VAR_4 = -VAR_0;
 }
 return VAR_4;
}
