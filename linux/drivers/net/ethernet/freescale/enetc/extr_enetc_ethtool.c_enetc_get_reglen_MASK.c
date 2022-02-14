
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {int num_tx_rings; int num_rx_rings; TYPE_1__* si; } ;
struct enetc_hw {scalar_t__ port; } ;
struct TYPE_2__ {struct enetc_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct enetc_ndev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4)
{
 struct enetc_ndev_priv *VAR_5 = FUNC_1(VAR_4);
 struct enetc_hw *VAR_6 = &VAR_5->si->hw;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 VAR_7 += FUNC_0(VAR_3) * VAR_5->num_tx_rings;
 VAR_7 += FUNC_0(VAR_1) * VAR_5->num_rx_rings;

 if (VAR_6->port)
  VAR_7 += FUNC_0(VAR_0);

 VAR_7 *= sizeof(u32) * 2;

 return VAR_7;
}
