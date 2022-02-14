
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int hw; } ;
struct stmmac_flow_entry {int action; int ip_proto; int is_l4; int idx; } ;
struct TYPE_4__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_ports {TYPE_3__* mask; TYPE_2__* key; } ;
struct flow_dissector {int dummy; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_5__ {int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct flow_dissector*,int ) ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stmmac_priv*,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct stmmac_priv *VAR_3,
        struct flow_cls_offload *VAR_4,
        struct stmmac_flow_entry *VAR_5)
{
 struct flow_rule *VAR_6 = FUNC_1(VAR_4);
 struct flow_dissector *VAR_7 = VAR_6->match.dissector;
 bool VAR_8 = VAR_5->action & VAR_2;
 struct flow_match_ports VAR_9;
 u32 VAR_10;
 bool VAR_11;
 int VAR_12;


 if (!FUNC_0(VAR_7, VAR_1))
  return -VAR_0;

 switch (VAR_5->ip_proto) {
 case 129:
  VAR_11 = 0;
  break;
 case 128:
  VAR_11 = 1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_6, &VAR_9);

 VAR_10 = FUNC_3(VAR_9.key->src) & FUNC_3(VAR_9.mask->src);
 if (VAR_10) {
  VAR_12 = FUNC_4(VAR_3, VAR_3->hw, VAR_5->idx, 1,
           VAR_11, 1, VAR_8, VAR_10);
  if (VAR_12)
   return VAR_12;
 }

 VAR_10 = FUNC_3(VAR_9.key->dst) & FUNC_3(VAR_9.mask->dst);
 if (VAR_10) {
  VAR_12 = FUNC_4(VAR_3, VAR_3->hw, VAR_5->idx, 1,
           VAR_11, 0, VAR_8, VAR_10);
  if (VAR_12)
   return VAR_12;
 }

 VAR_5->is_l4 = 1;
 return 0;
}
