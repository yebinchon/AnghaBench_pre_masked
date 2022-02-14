
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int dummy; } ;
struct stmmac_flow_entry {int ip_proto; } ;
struct TYPE_3__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_basic {TYPE_2__* key; } ;
struct flow_dissector {int dummy; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int ip_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct flow_dissector*,int ) ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_basic*) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_2,
        struct flow_cls_offload *VAR_3,
        struct stmmac_flow_entry *VAR_4)
{
 struct flow_rule *VAR_5 = FUNC_1(VAR_3);
 struct flow_dissector *VAR_6 = VAR_5->match.dissector;
 struct flow_match_basic VAR_7;


 if (!FUNC_0(VAR_6, VAR_1))
  return -VAR_0;

 FUNC_2(VAR_5, &VAR_7);
 VAR_4->ip_proto = VAR_7.key->ip_proto;
 return 0;
}
