
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
 int VAR_1 ;
 int VAR_2 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sh_eth_private*) ;
 int FUNC_2 (struct sh_eth_private*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
      __be16 VAR_4, u16 VAR_5)
{
 struct sh_eth_private *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_1(VAR_6);

 if (FUNC_3(!VAR_6->cd->tsu))
  return -VAR_0;


 if (!VAR_5)
  return 0;

 VAR_6->vlan_num_ids++;




 if (VAR_6->vlan_num_ids > 1) {

  FUNC_2(VAR_6, 0, VAR_7);
  return 0;
 }

 FUNC_2(VAR_6, VAR_1 | (VAR_5 & VAR_2),
    VAR_7);

 return 0;
}
