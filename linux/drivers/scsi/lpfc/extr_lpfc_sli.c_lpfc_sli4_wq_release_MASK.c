
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_queue {int hba_index; int entry_count; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_queue *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;


 if (FUNC_0(!VAR_0))
  return 0;

 if (VAR_0->hba_index == VAR_1)
  return 0;
 do {
  VAR_0->hba_index = ((VAR_0->hba_index + 1) % VAR_0->entry_count);
  VAR_2++;
 } while (VAR_0->hba_index != VAR_1);
 return VAR_2;
}
