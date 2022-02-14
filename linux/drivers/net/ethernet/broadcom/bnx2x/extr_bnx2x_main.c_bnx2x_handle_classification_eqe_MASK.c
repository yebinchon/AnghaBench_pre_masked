
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int echo; } ;
struct TYPE_6__ {TYPE_1__ eth_event; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
union event_ring_elem {TYPE_3__ message; } ;
typedef int u32 ;
struct bnx2x_vlan_mac_obj {int (* complete ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union event_ring_elem*,unsigned long*) ;} ;
struct bnx2x {TYPE_4__* sp_objs; struct bnx2x_vlan_mac_obj iscsi_l2_mac_obj; } ;
struct TYPE_8__ {struct bnx2x_vlan_mac_obj vlan_obj; struct bnx2x_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (char*,int) ;



 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,union event_ring_elem*,unsigned long*) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_4,
         union event_ring_elem *VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 u32 VAR_8 = FUNC_6(VAR_5->message.data.eth_event.echo);
 u32 VAR_9 = VAR_8 & VAR_1;
 struct bnx2x_vlan_mac_obj *VAR_10;


 FUNC_4(VAR_3, &VAR_6);

 switch (VAR_8 >> VAR_2) {
 case 130:
  FUNC_3(VAR_0, "Got SETUP_MAC completions\n");
  if (FUNC_2(VAR_4) && (VAR_9 == FUNC_1(VAR_4)))
   VAR_10 = &VAR_4->iscsi_l2_mac_obj;
  else
   VAR_10 = &VAR_4->sp_objs[VAR_9].mac_obj;

  break;
 case 128:
  FUNC_3(VAR_0, "Got SETUP_VLAN completions\n");
  VAR_10 = &VAR_4->sp_objs[VAR_9].vlan_obj;
  break;
 case 129:
  FUNC_3(VAR_0, "Got SETUP_MCAST completions\n");



  FUNC_5(VAR_4);
  return;
 default:
  FUNC_0("Unsupported classification command: 0x%x\n", VAR_8);
  return;
 }

 VAR_7 = VAR_10->complete(VAR_4, VAR_10, VAR_5, &VAR_6);

 if (VAR_7 < 0)
  FUNC_0("Failed to schedule new commands: %d\n", VAR_7);
 else if (VAR_7 > 0)
  FUNC_3(VAR_0, "Scheduled next pending commands...\n");
}
