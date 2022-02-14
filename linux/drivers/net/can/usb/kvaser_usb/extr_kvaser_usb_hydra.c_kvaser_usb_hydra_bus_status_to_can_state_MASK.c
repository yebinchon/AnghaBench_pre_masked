
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvaser_usb_net_priv {int netdev; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(const struct kvaser_usb_net_priv *VAR_7,
      u8 VAR_8,
      const struct can_berr_counter *VAR_9,
      enum can_state *VAR_10)
{
 if (VAR_8 & VAR_4) {
  *VAR_10 = VAR_0;
 } else if (VAR_8 & VAR_6) {
  *VAR_10 = VAR_2;
 } else if (VAR_8 == VAR_5) {
  if (VAR_9->txerr >= 128 || VAR_9->rxerr >= 128) {
   FUNC_0(VAR_7->netdev,
        "ERR_ACTIVE but err tx=%u or rx=%u >=128\n",
        VAR_9->txerr, VAR_9->rxerr);
   *VAR_10 = VAR_2;
  } else if (VAR_9->txerr >= 96 || VAR_9->rxerr >= 96) {
   *VAR_10 = VAR_3;
  } else {
   *VAR_10 = VAR_1;
  }
 }
}
