
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vlan_ethhdr {int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; } ;
struct hns3_enet_ring {TYPE_1__* tqp; } ;
struct TYPE_6__ {TYPE_2__* netdev; } ;
struct hnae3_handle {scalar_t__ port_base_vlan_state; TYPE_3__ kinfo; } ;
struct TYPE_5__ {int features; } ;
struct TYPE_4__ {struct hnae3_handle* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 void* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hns3_enet_ring *VAR_9,
        struct sk_buff *VAR_10)
{
 struct hnae3_handle *VAR_11 = VAR_9->tqp->handle;
 struct vlan_ethhdr *VAR_12;
 int VAR_13;

 if (!(VAR_10->protocol == FUNC_1(VAR_1) ||
       FUNC_3(VAR_10)))
  return 0;




 if (FUNC_5(FUNC_4(VAR_10) &&
       VAR_11->port_base_vlan_state ==
       VAR_3))
  return -VAR_0;

 if (VAR_10->protocol == FUNC_1(VAR_1) &&
     !(VAR_11->kinfo.netdev->features & VAR_6)) {




  VAR_10->protocol = FUNC_6(VAR_10);
  return 0;
 }

 if (FUNC_3(VAR_10)) {



  if (VAR_10->protocol == FUNC_1(VAR_1) &&
      VAR_11->port_base_vlan_state ==
      VAR_2)
   VAR_13 = VAR_5;
  else
   VAR_13 = VAR_4;

  VAR_10->protocol = FUNC_6(VAR_10);
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_10, 0);
 if (FUNC_5(VAR_13 < 0))
  return VAR_13;

 VAR_12 = (struct vlan_ethhdr *)VAR_10->data;
 VAR_12->h_vlan_TCI |= FUNC_0((VAR_10->priority << VAR_8)
      & VAR_7);

 VAR_10->protocol = FUNC_6(VAR_10);
 return 0;
}
