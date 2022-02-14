
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dummy; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;


 int FUNC_0 (struct stmmac_priv*,struct flow_cls_offload*) ;
 int FUNC_1 (struct stmmac_priv*,struct flow_cls_offload*) ;

__attribute__((used)) static int FUNC_2(struct stmmac_priv *VAR_1,
   struct flow_cls_offload *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->command) {
 case 128:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return VAR_3;
}
