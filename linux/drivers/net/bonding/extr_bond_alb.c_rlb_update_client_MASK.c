
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_3__* dev; } ;
struct rlb_client_info {scalar_t__ vlan_id; TYPE_2__* slave; int mac_dst; int ip_src; int ip_dst; } ;
struct TYPE_7__ {int dev_addr; } ;
struct TYPE_6__ {TYPE_3__* dev; TYPE_1__* bond; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_1 (int ,int ,int ,TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_6(struct rlb_client_info *VAR_4)
{
 int VAR_5;

 if (!VAR_4->slave || !FUNC_4(VAR_4->mac_dst))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct sk_buff *VAR_6;

  VAR_6 = FUNC_1(VAR_0, VAR_2,
     VAR_4->ip_dst,
     VAR_4->slave->dev,
     VAR_4->ip_src,
     VAR_4->mac_dst,
     VAR_4->slave->dev->dev_addr,
     VAR_4->mac_dst);
  if (!VAR_6) {
   FUNC_5(VAR_4->slave->bond->dev,
      VAR_4->slave->dev,
      "failed to create an ARP packet\n");
   continue;
  }

  VAR_6->dev = VAR_4->slave->dev;

  if (VAR_4->vlan_id) {
   FUNC_0(VAR_6, FUNC_3(VAR_1),
            VAR_4->vlan_id);
  }

  FUNC_2(VAR_6);
 }
}
