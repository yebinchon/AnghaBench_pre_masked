
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;



__attribute__((used)) static const char *FUNC_0(struct xgbe_prv_data *VAR_0)
{
 if (VAR_0->tx_pause && VAR_0->rx_pause)
  return "rx/tx";
 else if (VAR_0->rx_pause)
  return "rx";
 else if (VAR_0->tx_pause)
  return "tx";
 else
  return "off";
}
