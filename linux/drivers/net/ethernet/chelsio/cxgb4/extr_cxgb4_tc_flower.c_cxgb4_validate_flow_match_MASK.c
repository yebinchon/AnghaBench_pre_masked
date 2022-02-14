
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {struct flow_dissector* dissector; } ;
struct flow_rule {TYPE_1__ match; } ;
struct flow_match_ip {TYPE_4__* mask; } ;
struct flow_match_basic {TYPE_3__* mask; TYPE_2__* key; } ;
struct flow_dissector {int used_keys; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_8__ {scalar_t__ ttl; } ;
struct TYPE_7__ {int n_proto; } ;
struct TYPE_6__ {int n_proto; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_basic*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_ip*) ;
 scalar_t__ FUNC_4 (struct flow_rule*,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_12,
         struct flow_cls_offload *VAR_13)
{
 struct flow_rule *VAR_14 = FUNC_1(VAR_13);
 struct flow_dissector *VAR_15 = VAR_14->match.dissector;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;

 if (VAR_15->used_keys &
     ~(FUNC_0(VAR_5) |
       FUNC_0(VAR_4) |
       FUNC_0(VAR_8) |
       FUNC_0(VAR_9) |
       FUNC_0(VAR_10) |
       FUNC_0(VAR_6) |
       FUNC_0(VAR_11) |
       FUNC_0(VAR_7))) {
  FUNC_6(VAR_12, "Unsupported key used: 0x%x\n",
       VAR_15->used_keys);
  return -VAR_1;
 }

 if (FUNC_4(VAR_14, VAR_4)) {
  struct flow_match_basic VAR_18;

  FUNC_2(VAR_14, &VAR_18);
  VAR_17 = FUNC_7(VAR_18.key->n_proto);
  VAR_16 = FUNC_7(VAR_18.mask->n_proto);
 }

 if (FUNC_4(VAR_14, VAR_7)) {
  u16 VAR_19 = VAR_17 & VAR_16;
  struct flow_match_ip VAR_20;

  if (VAR_19 != VAR_2 && VAR_19 != VAR_3) {
   FUNC_5(VAR_12, "IP Key supported only with IPv4/v6");
   return -VAR_0;
  }

  FUNC_3(VAR_14, &VAR_20);
  if (VAR_20.mask->ttl) {
   FUNC_6(VAR_12, "ttl match unsupported for offload");
   return -VAR_1;
  }
 }

 return 0;
}
