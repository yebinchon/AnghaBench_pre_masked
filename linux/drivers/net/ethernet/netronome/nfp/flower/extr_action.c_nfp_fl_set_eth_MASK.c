
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int len_lw; int jump_id; } ;
struct nfp_fl_set_eth {TYPE_2__ head; int reserved; int * eth_addr_mask; int * eth_addr_val; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {int mask; int val; } ;
struct flow_action_entry {TYPE_1__ mangle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int *,int *) ;

__attribute__((used)) static int
FUNC_3(const struct flow_action_entry *VAR_4, u32 VAR_5,
        struct nfp_fl_set_eth *VAR_6, struct netlink_ext_ack *VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_5 + 4 > VAR_1 * 2) {
  FUNC_0(VAR_7, "unsupported offload: invalid pedit ethernet action");
  return -VAR_0;
 }

 VAR_9 = ~VAR_4->mangle.mask;
 VAR_8 = VAR_4->mangle.val;

 if (VAR_8 & ~VAR_9) {
  FUNC_0(VAR_7, "unsupported offload: invalid pedit ethernet action");
  return -VAR_0;
 }

 FUNC_2(VAR_8, VAR_9, &VAR_6->eth_addr_val[VAR_5],
       &VAR_6->eth_addr_mask[VAR_5]);

 VAR_6->reserved = FUNC_1(0);
 VAR_6->head.jump_id = VAR_2;
 VAR_6->head.len_lw = sizeof(*VAR_6) >> VAR_3;

 return 0;
}
