
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_push_mpls {int lse; int ethtype; TYPE_1__ head; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int bos; int tc; int label; int ttl; int proto; } ;
struct flow_action_entry {TYPE_2__ mpls_push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_fl_push_mpls *VAR_9,
   const struct flow_action_entry *VAR_10,
   struct netlink_ext_ack *VAR_11)
{
 size_t VAR_12 = sizeof(struct nfp_fl_push_mpls);
 u32 VAR_13 = 0;

 VAR_9->head.jump_id = VAR_7;
 VAR_9->head.len_lw = VAR_12 >> VAR_8;


 if (VAR_10->mpls_push.bos != VAR_0) {
  VAR_13 |= VAR_10->mpls_push.bos << VAR_4;
 } else {
  FUNC_0(VAR_11, "unsupported offload: BOS field must explicitly be set for MPLS push");
  return -VAR_2;
 }


 if (VAR_10->mpls_push.tc != VAR_1)
  VAR_13 |= VAR_10->mpls_push.tc << VAR_5;


 VAR_13 |= VAR_10->mpls_push.label << VAR_3;
 VAR_13 |= VAR_10->mpls_push.ttl << VAR_6;
 VAR_9->ethtype = VAR_10->mpls_push.proto;
 VAR_9->lse = FUNC_1(VAR_13);

 return 0;
}
