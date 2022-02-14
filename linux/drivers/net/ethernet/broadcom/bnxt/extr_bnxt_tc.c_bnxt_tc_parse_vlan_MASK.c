
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; int vid; } ;
struct flow_action_entry {int id; TYPE_1__ vlan; } ;
struct bnxt_tc_actions {int push_vlan_tpid; int push_vlan_tci; int flags; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_3,
         struct bnxt_tc_actions *VAR_4,
         const struct flow_action_entry *VAR_5)
{
 switch (VAR_5->id) {
 case 129:
  VAR_4->flags |= VAR_0;
  break;
 case 128:
  VAR_4->flags |= VAR_1;
  VAR_4->push_vlan_tci = FUNC_0(VAR_5->vlan.vid);
  VAR_4->push_vlan_tpid = VAR_5->vlan.proto;
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
