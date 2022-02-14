
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct nvmet_fc_tgt_assoc {int association_id; } ;



__attribute__((used)) static inline u64
FUNC_0(struct nvmet_fc_tgt_assoc *VAR_0, u16 VAR_1)
{
 return (VAR_0->association_id | VAR_1);
}
