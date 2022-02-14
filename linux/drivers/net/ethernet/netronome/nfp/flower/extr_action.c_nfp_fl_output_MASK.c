
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct nfp_flower_priv {int flower_ext_feats; } ;
struct TYPE_6__ {void* shortcut; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct nfp_fl_payload {TYPE_3__ meta; TYPE_2__ pre_tun_rule; } ;
struct TYPE_4__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_output {void* port; void* flags; TYPE_1__ head; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_action_entry {struct net_device* dev; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 scalar_t__ FUNC_6 (struct nfp_app*,struct net_device*) ;
 int FUNC_7 (struct nfp_app*,struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int
FUNC_10(struct nfp_app *VAR_9, struct nfp_fl_output *VAR_10,
       const struct flow_action_entry *VAR_11,
       struct nfp_fl_payload *VAR_12,
       bool VAR_13, struct net_device *VAR_14,
       enum nfp_flower_tun_type VAR_15, int *VAR_16,
       bool VAR_17, struct netlink_ext_ack *VAR_18)
{
 size_t VAR_19 = sizeof(struct nfp_fl_output);
 struct nfp_flower_priv *VAR_20 = VAR_9->priv;
 struct net_device *VAR_21;
 u16 VAR_22;

 VAR_10->head.jump_id = VAR_1;
 VAR_10->head.len_lw = VAR_19 >> VAR_5;

 VAR_21 = VAR_11->dev;
 if (!VAR_21) {
  FUNC_0(VAR_18, "unsupported offload: invalid egress interface for mirred action");
  return -VAR_0;
 }

 VAR_22 = VAR_13 ? VAR_6 : 0;

 if (VAR_15) {

  if (!FUNC_5(VAR_21, VAR_15)) {
   FUNC_0(VAR_18, "unsupported offload: egress interface does not match the required tunnel type");
   return -VAR_0;
  }

  if (*VAR_16) {
   FUNC_0(VAR_18, "unsupported offload: cannot offload more than one tunnel mirred output per filter");
   return -VAR_0;
  }
  (*VAR_16)++;

  VAR_10->flags = FUNC_1(VAR_22 |
         VAR_7);
  VAR_10->port = FUNC_2(VAR_8 | VAR_15);
 } else if (FUNC_4(VAR_21) &&
     VAR_20->flower_ext_feats & VAR_2) {
  int VAR_23;

  VAR_10->flags = FUNC_1(VAR_22);
  VAR_23 = FUNC_7(VAR_9, VAR_21);
  if (VAR_23 < 0) {
   FUNC_0(VAR_18, "invalid entry: cannot find group id for LAG action");
   return VAR_23;
  }
  VAR_10->port = FUNC_2(VAR_4 | VAR_23);
 } else if (FUNC_6(VAR_9, VAR_21)) {
  if (!(VAR_20->flower_ext_feats & VAR_3)) {
   FUNC_0(VAR_18, "unsupported offload: pre-tunnel rules not supported in loaded firmware");
   return -VAR_0;
  }

  if (VAR_12->pre_tun_rule.dev || !VAR_17) {
   FUNC_0(VAR_18, "unsupported offload: pre-tunnel rules require single egress dev and ptype HOST action");
   return -VAR_0;
  }

  VAR_12->pre_tun_rule.dev = VAR_21;

  return 0;
 } else {

  VAR_10->flags = FUNC_1(VAR_22);

  if (FUNC_8(VAR_14)) {

   if (!FUNC_3(VAR_14, VAR_21)) {
    FUNC_0(VAR_18, "unsupported offload: ingress and egress interfaces are on different devices");
    return -VAR_0;
   }
  }

  if (!FUNC_8(VAR_21)) {
   FUNC_0(VAR_18, "unsupported offload: egress interface is not an nfp port");
   return -VAR_0;
  }

  VAR_10->port = FUNC_2(FUNC_9(VAR_21));
  if (!VAR_10->port) {
   FUNC_0(VAR_18, "unsupported offload: invalid port id for egress interface");
   return -VAR_0;
  }
 }
 VAR_12->meta.shortcut = VAR_10->port;

 return 0;
}
