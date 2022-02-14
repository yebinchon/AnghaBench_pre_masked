
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct lan78xx_priv {int* vlan_table; int set_vlan; } ;
struct lan78xx_net {scalar_t__* data; } ;
typedef int __be16 ;


 struct lan78xx_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
        __be16 VAR_1, u16 VAR_2)
{
 struct lan78xx_net *VAR_3 = FUNC_0(VAR_0);
 struct lan78xx_priv *VAR_4 = (struct lan78xx_priv *)(VAR_3->data[0]);
 u16 VAR_5;
 u16 VAR_6;

 VAR_6 = (VAR_2 >> 5) & 0x7F;
 VAR_5 = VAR_2 & 0x1F;

 VAR_4->vlan_table[VAR_6] &= ~(1 << VAR_5);


 FUNC_1(&VAR_4->set_vlan);

 return 0;
}
