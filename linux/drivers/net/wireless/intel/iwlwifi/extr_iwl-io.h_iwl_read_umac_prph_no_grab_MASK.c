
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ umac_prph_offset; } ;


 scalar_t__ FUNC_0 (struct iwl_trans*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0, VAR_1 +
         VAR_0->trans_cfg->umac_prph_offset);
}
