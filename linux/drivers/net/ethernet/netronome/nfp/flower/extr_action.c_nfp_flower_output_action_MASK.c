
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_flower_priv {int flower_ext_feats; } ;
struct nfp_fl_payload {int * action_data; } ;
struct nfp_fl_output {int dummy; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_action_entry {int dummy; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct nfp_app*,struct nfp_fl_output*,struct flow_action_entry const*,struct nfp_fl_payload*,int,struct net_device*,int,int*,int,struct netlink_ext_ack*) ;
 int FUNC_2 (struct nfp_app*,struct flow_action_entry const*,struct nfp_fl_payload*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_3(struct nfp_app *VAR_3,
    const struct flow_action_entry *VAR_4,
    struct nfp_fl_payload *VAR_5, int *VAR_6,
    struct net_device *VAR_7, bool VAR_8,
    enum nfp_flower_tun_type *VAR_9, int *VAR_10,
    int *VAR_11, u32 *VAR_12, bool VAR_13,
    struct netlink_ext_ack *VAR_14)
{
 struct nfp_flower_priv *VAR_15 = VAR_3->priv;
 struct nfp_fl_output *VAR_16;
 int VAR_17, VAR_18;




 if (*VAR_12) {
  FUNC_0(VAR_14, "unsupported offload: set actions without updating checksums are not supported");
  return -VAR_0;
 }

 if (*VAR_6 + sizeof(struct nfp_fl_output) > VAR_2) {
  FUNC_0(VAR_14, "unsupported offload: mirred output increases action list size beyond the allowed maximum");
  return -VAR_0;
 }

 VAR_16 = (struct nfp_fl_output *)&VAR_5->action_data[*VAR_6];
 VAR_17 = FUNC_1(VAR_3, VAR_16, VAR_4, VAR_5, VAR_8, VAR_7, *VAR_9,
       VAR_10, VAR_13, VAR_14);
 if (VAR_17)
  return VAR_17;

 *VAR_6 += sizeof(struct nfp_fl_output);

 if (VAR_15->flower_ext_feats & VAR_1) {



  VAR_18 = FUNC_2(VAR_3, VAR_4, VAR_5, *VAR_6, VAR_14);
  if (VAR_18 < 0) {
   return VAR_18;
  } else if (VAR_18 > 0 && (!VAR_8 || *VAR_11)) {
   FUNC_0(VAR_14, "unsupported offload: LAG action has to be last action in action list");
   return -VAR_0;
  }

  *VAR_6 += VAR_18;
 }
 (*VAR_11)++;

 return 0;
}
