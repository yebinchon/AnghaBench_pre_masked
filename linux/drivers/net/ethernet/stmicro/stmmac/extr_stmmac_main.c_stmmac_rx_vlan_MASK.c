
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int features; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct vlan_ethhdr*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6, struct sk_buff *VAR_7)
{
 struct vlan_ethhdr *VAR_8;
 __be16 VAR_9;
 u16 VAR_10;

 VAR_8 = (struct vlan_ethhdr *)VAR_7->data;
 VAR_9 = VAR_8->h_vlan_proto;

 if ((VAR_9 == FUNC_1(VAR_2) &&
      VAR_6->features & VAR_3) ||
     (VAR_9 == FUNC_1(VAR_1) &&
      VAR_6->features & VAR_4)) {

  VAR_10 = FUNC_3(VAR_8->h_vlan_TCI);
  FUNC_2(VAR_7->data + VAR_5, VAR_8, VAR_0 * 2);
  FUNC_4(VAR_7, VAR_5);
  FUNC_0(VAR_7, VAR_9, VAR_10);
 }
}
