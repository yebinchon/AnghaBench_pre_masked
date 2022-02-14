
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {TYPE_1__* bond; struct net_device* dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct bond_vlan_tag {int vlan_id; int vlan_proto; } ;
typedef int __be32 ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int,int ,int ,struct net_device*,int ,int *,int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,char*,int,int ,...) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct slave *VAR_2, int VAR_3, __be32 VAR_4,
     __be32 VAR_5, struct bond_vlan_tag *VAR_6)
{
 struct sk_buff *VAR_7;
 struct bond_vlan_tag *VAR_8 = VAR_6;
 struct net_device *VAR_9 = VAR_2->dev;
 struct net_device *VAR_10 = VAR_2->bond->dev;

 FUNC_5(VAR_10, VAR_9, "arp %d on slave: dst %pI4 src %pI4\n",
    VAR_3, VAR_4, &VAR_5);

 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_4, VAR_9, VAR_5,
    ((void*)0), VAR_9->dev_addr, ((void*)0));

 if (!VAR_7) {
  FUNC_3("ARP packet allocation failed\n");
  return;
 }

 if (!VAR_6 || VAR_6->vlan_proto == VAR_1)
  goto xmit;

 VAR_6++;


 while (VAR_6->vlan_proto != VAR_1) {
  if (!VAR_6->vlan_id) {
   VAR_6++;
   continue;
  }

  FUNC_5(VAR_10, VAR_9, "inner tag: proto %X vid %X\n",
     FUNC_4(VAR_8->vlan_proto), VAR_6->vlan_id);
  VAR_7 = FUNC_6(VAR_7, VAR_6->vlan_proto,
      VAR_6->vlan_id);
  if (!VAR_7) {
   FUNC_3("failed to insert inner VLAN tag\n");
   return;
  }

  VAR_6++;
 }

 if (VAR_8->vlan_id) {
  FUNC_5(VAR_10, VAR_9, "outer tag: proto %X vid %X\n",
     FUNC_4(VAR_8->vlan_proto), VAR_8->vlan_id);
  FUNC_0(VAR_7, VAR_8->vlan_proto,
           VAR_8->vlan_id);
 }

xmit:
 FUNC_2(VAR_7);
}
