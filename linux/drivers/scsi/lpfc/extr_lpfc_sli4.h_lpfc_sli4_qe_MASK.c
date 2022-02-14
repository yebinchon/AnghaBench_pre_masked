
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct lpfc_queue {void** q_pgs; size_t entry_cnt_per_pg; size_t entry_size; } ;



__attribute__((used)) static inline void *FUNC_0(struct lpfc_queue *VAR_0, uint16_t VAR_1)
{
 return VAR_0->q_pgs[VAR_1 / VAR_0->entry_cnt_per_pg] +
  (VAR_0->entry_size * (VAR_1 % VAR_0->entry_cnt_per_pg));
}
