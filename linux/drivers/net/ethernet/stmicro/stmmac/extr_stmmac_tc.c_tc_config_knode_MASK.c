
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_cls_u32_offload {int dummy; } ;
struct stmmac_priv {int tc_entries_max; int tc_entries; TYPE_1__* hw; } ;
struct TYPE_2__ {int pcsr; } ;


 int FUNC_0 (struct stmmac_priv*,int ,int ,int ) ;
 int FUNC_1 (struct stmmac_priv*,struct tc_cls_u32_offload*) ;
 int FUNC_2 (struct stmmac_priv*,struct tc_cls_u32_offload*) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_0,
      struct tc_cls_u32_offload *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->hw->pcsr, VAR_0->tc_entries,
   VAR_0->tc_entries_max);
 if (VAR_2)
  goto err_unfill;

 return 0;

err_unfill:
 FUNC_2(VAR_0, VAR_1);
 return VAR_2;
}
