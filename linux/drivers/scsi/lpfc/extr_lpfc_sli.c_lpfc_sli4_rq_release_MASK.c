
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_queue {scalar_t__ type; int hba_index; int entry_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_queue *VAR_2, struct lpfc_queue *VAR_3)
{

 if (FUNC_0(!VAR_2) || FUNC_0(!VAR_3))
  return 0;

 if ((VAR_2->type != VAR_1) || (VAR_3->type != VAR_0))
  return 0;
 VAR_2->hba_index = ((VAR_2->hba_index + 1) % VAR_2->entry_count);
 VAR_3->hba_index = ((VAR_3->hba_index + 1) % VAR_3->entry_count);
 return 1;
}
