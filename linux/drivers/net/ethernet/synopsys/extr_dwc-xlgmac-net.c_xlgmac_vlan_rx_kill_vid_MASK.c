
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xlgmac_hw_ops {int (* update_vlan_hash_table ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {int active_vlans; struct xlgmac_hw_ops hw_ops; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ) ;
 struct xlgmac_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
       __be16 VAR_1,
       u16 VAR_2)
{
 struct xlgmac_pdata *VAR_3 = FUNC_1(VAR_0);
 struct xlgmac_hw_ops *VAR_4 = &VAR_3->hw_ops;

 FUNC_0(VAR_2, VAR_3->active_vlans);
 VAR_4->update_vlan_hash_table(VAR_3);

 return 0;
}
