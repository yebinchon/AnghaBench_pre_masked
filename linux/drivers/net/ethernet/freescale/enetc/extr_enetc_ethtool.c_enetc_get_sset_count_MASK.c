
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enetc_ndev_priv {int num_tx_rings; int num_rx_rings; int si; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, int VAR_7)
{
 struct enetc_ndev_priv *VAR_8 = FUNC_2(VAR_6);

 if (VAR_7 == VAR_1)
  return FUNC_0(VAR_3) +
   FUNC_0(VAR_5) * VAR_8->num_tx_rings +
   FUNC_0(VAR_4) * VAR_8->num_rx_rings +
   (FUNC_1(VAR_8->si) ?
   FUNC_0(VAR_2) : 0);

 return -VAR_0;
}
