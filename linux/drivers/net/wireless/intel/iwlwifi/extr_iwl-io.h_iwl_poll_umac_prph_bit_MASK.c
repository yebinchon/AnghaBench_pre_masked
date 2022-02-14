
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ umac_prph_offset; } ;


 int FUNC_0 (struct iwl_trans*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_1(struct iwl_trans *VAR_0, u32 VAR_1,
      u32 VAR_2, u32 VAR_3, int VAR_4)
{
 return FUNC_0(VAR_0, VAR_1 +
     VAR_0->trans_cfg->umac_prph_offset,
     VAR_2, VAR_3, VAR_4);
}
