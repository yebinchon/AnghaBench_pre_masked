
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_push_geneve {int length; int opt_data; int type; int class; scalar_t__ reserved; TYPE_1__ head; } ;
struct nfp_fl_payload {int * action_data; } ;
struct netlink_ext_ack {int dummy; } ;
struct ip_tunnel_info {int options_len; } ;
struct geneve_opt {int length; int opt_data; int type; int opt_class; } ;
struct flow_action_entry {scalar_t__ tunnel; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int * FUNC_1 (struct ip_tunnel_info*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nfp_fl_payload *VAR_6, int *VAR_7,
      const struct flow_action_entry *VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 struct ip_tunnel_info *VAR_10 = (struct ip_tunnel_info *)VAR_8->tunnel;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u8 *VAR_15 = FUNC_1(VAR_10);






 VAR_12 = 0;
 VAR_14 = 0;
 VAR_11 = VAR_10->options_len;
 while (VAR_11 > 0) {
  struct geneve_opt *VAR_16 = (struct geneve_opt *)VAR_15;

  VAR_12++;
  if (VAR_12 > VAR_5) {
   FUNC_0(VAR_9, "unsupported offload: maximum allowed number of geneve options exceeded");
   return -VAR_0;
  }

  VAR_14 += sizeof(struct nfp_fl_push_geneve) +
          VAR_16->length * 4;
  if (VAR_14 > VAR_4) {
   FUNC_0(VAR_9, "unsupported offload: maximum allowed action list size exceeded at push geneve options");
   return -VAR_0;
  }

  VAR_11 -= sizeof(struct geneve_opt) + VAR_16->length * 4;
  VAR_15 += sizeof(struct geneve_opt) + VAR_16->length * 4;
 }

 if (*VAR_7 + VAR_14 > VAR_3) {
  FUNC_0(VAR_9, "unsupported offload: maximum allowed action list size exceeded at push geneve options");
  return -VAR_0;
 }

 VAR_13 = *VAR_7;
 *VAR_7 += VAR_14;
 VAR_15 = FUNC_1(VAR_10);
 while (VAR_12) {
  struct geneve_opt *VAR_17 = (struct geneve_opt *)VAR_15;
  struct nfp_fl_push_geneve *VAR_18;
  size_t VAR_19, VAR_20;

  VAR_12--;
  VAR_19 = sizeof(struct nfp_fl_push_geneve) + VAR_17->length * 4;
  VAR_14 -= VAR_19;
  VAR_20 = VAR_13 + VAR_14;

  VAR_18 = (struct nfp_fl_push_geneve *)&VAR_6->action_data[VAR_20];
  VAR_18->head.jump_id = VAR_1;
  VAR_18->head.len_lw = VAR_19 >> VAR_2;
  VAR_18->reserved = 0;
  VAR_18->class = VAR_17->opt_class;
  VAR_18->type = VAR_17->type;
  VAR_18->length = VAR_17->length;
  FUNC_2(&VAR_18->opt_data, VAR_17->opt_data, VAR_17->length * 4);

  VAR_15 += sizeof(struct geneve_opt) + VAR_17->length * 4;
 }

 return 0;
}
