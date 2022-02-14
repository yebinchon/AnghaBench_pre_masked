
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int jump_id; int len_lw; } ;
struct nfp_fl_set_tport {TYPE_1__ head; int reserved; int tp_port_mask; int tp_port_val; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int mask; int val; } ;
struct flow_action_entry {TYPE_2__ mangle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(const struct flow_action_entry *VAR_2, u32 VAR_3,
   struct nfp_fl_set_tport *VAR_4, int VAR_5,
   struct netlink_ext_ack *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_3) {
  FUNC_0(VAR_6, "unsupported offload: pedit on unsupported section of L4 header");
  return -VAR_0;
 }

 VAR_8 = ~VAR_2->mangle.mask;
 VAR_7 = VAR_2->mangle.val;

 if (VAR_7 & ~VAR_8) {
  FUNC_0(VAR_6, "unsupported offload: invalid pedit L4 action");
  return -VAR_0;
 }

 FUNC_2(VAR_7, VAR_8, VAR_4->tp_port_val,
       VAR_4->tp_port_mask);

 VAR_4->reserved = FUNC_1(0);
 VAR_4->head.jump_id = VAR_5;
 VAR_4->head.len_lw = sizeof(*VAR_4) >> VAR_1;

 return 0;
}
