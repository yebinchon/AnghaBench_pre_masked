
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_ndev_priv {int num_rx_rings; int num_tx_rings; TYPE_1__* si; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_ndev_priv *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_rx_rings; VAR_5++) {
  FUNC_0(&VAR_4->si->hw, VAR_5,
          VAR_0, VAR_1);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_rings; VAR_5++) {
  FUNC_1(&VAR_4->si->hw, VAR_5,
          VAR_2, VAR_3);
 }
}
