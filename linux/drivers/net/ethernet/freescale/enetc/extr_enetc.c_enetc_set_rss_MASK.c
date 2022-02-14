
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {int num_rx_rings; TYPE_1__* si; } ;
struct enetc_hw {int dummy; } ;
struct TYPE_2__ {struct enetc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enetc_hw*,int ) ;
 int FUNC_1 (struct enetc_hw*,int ,int ) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 struct enetc_ndev_priv *VAR_5 = FUNC_2(VAR_3);
 struct enetc_hw *VAR_6 = &VAR_5->si->hw;
 u32 VAR_7;

 FUNC_1(VAR_6, VAR_2, VAR_5->num_rx_rings);

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 |= (VAR_4) ? VAR_1 : 0;
 FUNC_1(VAR_6, VAR_0, VAR_7);

 return 0;
}
