
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cls_u32_offload {int command; } ;
struct stmmac_priv {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct stmmac_priv*,struct tc_cls_u32_offload*) ;
 int FUNC_1 (struct stmmac_priv*,struct tc_cls_u32_offload*) ;
 int FUNC_2 (struct stmmac_priv*,struct tc_cls_u32_offload*) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_1,
       struct tc_cls_u32_offload *VAR_2)
{
 switch (VAR_2->command) {
 case 128:
  FUNC_2(VAR_1, VAR_2);

 case 129:
  return FUNC_0(VAR_1, VAR_2);
 case 130:
  return FUNC_1(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}
