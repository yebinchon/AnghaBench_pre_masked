
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int (* lpfc_sli_brdready ) (struct lpfc_hba*,int ) ;} ;


 int FUNC_0 (struct lpfc_hba*,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_0, uint32_t VAR_1)
{
 return VAR_0->lpfc_sli_brdready(VAR_0, VAR_1);
}
