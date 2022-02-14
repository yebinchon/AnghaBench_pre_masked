
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_push_vlan {int vlan_tci; int vlan_tpid; scalar_t__ reserved; TYPE_2__ head; } ;
struct TYPE_3__ {int vid; int prio; int proto; } ;
struct flow_action_entry {TYPE_1__ vlan; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_fl_push_vlan *VAR_4,
   const struct flow_action_entry *VAR_5)
{
 size_t VAR_6 = sizeof(struct nfp_fl_push_vlan);
 u16 VAR_7;

 VAR_4->head.jump_id = VAR_0;
 VAR_4->head.len_lw = VAR_6 >> VAR_1;
 VAR_4->reserved = 0;
 VAR_4->vlan_tpid = VAR_5->vlan.proto;

 VAR_7 =
  FUNC_0(VAR_2, VAR_5->vlan.prio) |
  FUNC_0(VAR_3, VAR_5->vlan.vid);
 VAR_4->vlan_tci = FUNC_1(VAR_7);
}
