
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct enetc_pf {int vlan_ht_filter; int active_vlans; } ;
struct enetc_ndev_priv {int si; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct enetc_pf*,int ) ;
 struct enetc_pf* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct enetc_pf*,int ) ;
 int FUNC_5 (struct enetc_pf*,int) ;
 int FUNC_6 (int ) ;
 struct enetc_ndev_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct enetc_ndev_priv *VAR_3 = FUNC_7(VAR_0);
 struct enetc_pf *VAR_4 = FUNC_3(VAR_3->si);
 int VAR_5;

 if (FUNC_4(VAR_4, 0))
  FUNC_2(VAR_4, 0);

 FUNC_0(VAR_2, VAR_4->active_vlans);

 VAR_5 = FUNC_6(VAR_2);
 if (!FUNC_1(VAR_5, VAR_4->vlan_ht_filter))
  FUNC_5(VAR_4, 0);

 return 0;
}
