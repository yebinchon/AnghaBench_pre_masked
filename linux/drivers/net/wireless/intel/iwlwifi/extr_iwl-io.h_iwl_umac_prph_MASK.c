
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ umac_prph_offset; } ;



__attribute__((used)) static inline u32 FUNC_0(struct iwl_trans *VAR_0, u32 VAR_1)
{
 return VAR_1 + VAR_0->trans_cfg->umac_prph_offset;
}
