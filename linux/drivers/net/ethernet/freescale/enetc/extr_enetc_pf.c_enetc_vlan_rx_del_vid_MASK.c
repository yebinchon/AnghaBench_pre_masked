
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct enetc_pf {int active_vlans; } ;
struct enetc_ndev_priv {int si; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct enetc_pf*,int ) ;
 struct enetc_pf* FUNC_2 (int ) ;
 int FUNC_3 (struct enetc_pf*,int) ;
 int FUNC_4 (struct enetc_pf*) ;
 struct enetc_ndev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct enetc_ndev_priv *VAR_3 = FUNC_5(VAR_0);
 struct enetc_pf *VAR_4 = FUNC_2(VAR_3->si);

 FUNC_0(VAR_2, VAR_4->active_vlans);
 FUNC_3(VAR_4, 1);

 if (!FUNC_4(VAR_4))
  FUNC_1(VAR_4, 0);

 return 0;
}
