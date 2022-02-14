
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int echo; } ;
struct TYPE_7__ {TYPE_1__ eth_event; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
union event_ring_elem {TYPE_3__ message; } ;
typedef int u32 ;
struct TYPE_9__ {int (* complete ) (struct bnx2x*,TYPE_4__*,union event_ring_elem*,unsigned long*) ;} ;
struct TYPE_10__ {int (* complete ) (struct bnx2x*,TYPE_5__*,union event_ring_elem*,unsigned long*) ;} ;
struct bnx2x_vf_queue {TYPE_4__ vlan_obj; TYPE_5__ mac_obj; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,TYPE_5__*,union event_ring_elem*,unsigned long*) ;
 int FUNC_5 (struct bnx2x*,TYPE_4__*,union event_ring_elem*,unsigned long*) ;

__attribute__((used)) static
void FUNC_6(struct bnx2x *VAR_3,
     struct bnx2x_vf_queue *VAR_4,
     union event_ring_elem *VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 u32 VAR_8 = FUNC_2(VAR_5->message.data.eth_event.echo);


 FUNC_3(VAR_2, &VAR_6);

 switch (VAR_8 >> VAR_1) {
 case 129:
  VAR_7 = VAR_4->mac_obj.complete(VAR_3, &VAR_4->mac_obj, VAR_5,
        &VAR_6);
  break;
 case 128:
  VAR_7 = VAR_4->vlan_obj.complete(VAR_3, &VAR_4->vlan_obj, VAR_5,
         &VAR_6);
  break;
 default:
  FUNC_0("Unsupported classification command: 0x%x\n", VAR_8);
  return;
 }
 if (VAR_7 < 0)
  FUNC_0("Failed to schedule new commands: %d\n", VAR_7);
 else if (VAR_7 > 0)
  FUNC_1(VAR_0, "Scheduled next pending commands...\n");
}
