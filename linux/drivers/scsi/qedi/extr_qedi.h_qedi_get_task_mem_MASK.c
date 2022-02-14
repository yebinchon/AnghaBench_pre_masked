
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qed_iscsi_tid {void** blocks; size_t num_tids_per_block; size_t size; } ;



__attribute__((used)) static inline void *FUNC_0(struct qed_iscsi_tid *VAR_0, u32 VAR_1)
{
 return (VAR_0->blocks[VAR_1 / VAR_0->num_tids_per_block] +
  (VAR_1 % VAR_0->num_tids_per_block) * VAR_0->size);
}
