
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_hba {int (* lpfc_sli_handle_slow_ring_event ) (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;} ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;

void
FUNC_1(struct lpfc_hba *VAR_0,
    struct lpfc_sli_ring *VAR_1, uint32_t VAR_2)
{
 VAR_0->lpfc_sli_handle_slow_ring_event(VAR_0, VAR_1, VAR_2);
}
