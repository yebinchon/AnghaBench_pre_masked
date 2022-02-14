
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sh_eth_private {int vlan_num_ids; TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int tsu; } ;


 int VAR_0 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sh_eth_private*) ;
 int FUNC_2 (struct sh_eth_private*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
       __be16 VAR_2, u16 VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_1(VAR_4);

 if (FUNC_3(!VAR_4->cd->tsu))
  return -VAR_0;


 if (!VAR_3)
  return 0;

 VAR_4->vlan_num_ids--;
 FUNC_2(VAR_4, 0, VAR_5);

 return 0;
}
