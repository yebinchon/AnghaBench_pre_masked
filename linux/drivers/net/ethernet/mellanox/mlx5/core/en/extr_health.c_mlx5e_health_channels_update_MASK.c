
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {scalar_t__ rx_reporter; scalar_t__ tx_reporter; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct mlx5e_priv *VAR_1)
{
 if (VAR_1->tx_reporter)
  FUNC_0(VAR_1->tx_reporter,
           VAR_0);
 if (VAR_1->rx_reporter)
  FUNC_0(VAR_1->rx_reporter,
           VAR_0);
}
