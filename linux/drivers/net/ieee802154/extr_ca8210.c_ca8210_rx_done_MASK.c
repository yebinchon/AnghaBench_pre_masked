
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct work_priv_container {int work; struct ca8210_priv* priv; } ;
struct cas_control {int* tx_in_buf; struct ca8210_priv* priv; } ;
struct ca8210_priv {int ca8210_is_awake; TYPE_1__* spi; int mlme_workqueue; int hw; int sync_up; int sync_exchange_complete; scalar_t__ sync_command_response; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int*,unsigned int) ;
 int FUNC_2 (int*,unsigned int,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 struct work_priv_container* FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__,int*,unsigned int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct cas_control *VAR_7)
{
 u8 *VAR_8;
 unsigned int VAR_9;
 struct work_priv_container *VAR_10;
 struct ca8210_priv *VAR_11 = VAR_7->priv;

 VAR_8 = VAR_7->tx_in_buf;
 VAR_9 = VAR_8[1] + 2;
 if (VAR_9 > VAR_0) {
  FUNC_4(
   &VAR_11->spi->dev,
   "Received packet len (%u) erroneously long\n",
   VAR_9
  );
  goto finish;
 }

 if (VAR_8[0] & VAR_5) {
  if (VAR_11->sync_command_response) {
   FUNC_9(VAR_11->sync_command_response, VAR_8, VAR_9);
   FUNC_3(&VAR_11->sync_exchange_complete);
  } else {
   if (&FUNC_2)
    FUNC_2(VAR_8, VAR_9, VAR_11->spi);
   VAR_11->sync_up++;
  }
 } else {
  if (&FUNC_2)
   FUNC_2(VAR_8, VAR_9, VAR_11->spi);
 }

 FUNC_1(VAR_11->hw, VAR_8, VAR_9);
 if (VAR_8[0] == VAR_4) {
  if (VAR_8[3] == VAR_2) {
   FUNC_5(
    &VAR_11->spi->dev,
    "Waiting for transaction overflow to stabilise...\n");
   FUNC_10(2000);
   FUNC_5(
    &VAR_11->spi->dev,
    "Resetting MAC...\n");

   VAR_10 = FUNC_8(sizeof(*VAR_10),
       VAR_1);
   if (!VAR_10)
    goto finish;
   FUNC_0(
    &VAR_10->work,
    VAR_6
   );
   VAR_10->priv = VAR_11;
   FUNC_11(VAR_11->mlme_workqueue, &VAR_10->work);
  }
 } else if (VAR_8[0] == VAR_3) {
  FUNC_6(
   &VAR_11->spi->dev,
   "Wakeup indication received, reason:\n"
  );
  switch (VAR_8[2]) {
  case 0:
   FUNC_6(
    &VAR_11->spi->dev,
    "Transceiver woken up from Power Up / System Reset\n"
   );
   break;
  case 1:
   FUNC_6(
    &VAR_11->spi->dev,
    "Watchdog Timer Time-Out\n"
   );
   break;
  case 2:
   FUNC_6(
    &VAR_11->spi->dev,
    "Transceiver woken up from Power-Off by Sleep Timer Time-Out\n");
   break;
  case 3:
   FUNC_6(
    &VAR_11->spi->dev,
    "Transceiver woken up from Power-Off by GPIO Activity\n"
   );
   break;
  case 4:
   FUNC_6(
    &VAR_11->spi->dev,
    "Transceiver woken up from Standby by Sleep Timer Time-Out\n"
   );
   break;
  case 5:
   FUNC_6(
    &VAR_11->spi->dev,
    "Transceiver woken up from Standby by GPIO Activity\n"
   );
   break;
  case 6:
   FUNC_6(
    &VAR_11->spi->dev,
    "Sleep-Timer Time-Out in Active Mode\n"
   );
   break;
  default:
   FUNC_7(&VAR_11->spi->dev, "Wakeup reason unknown\n");
   break;
  }
  FUNC_3(&VAR_11->ca8210_is_awake);
 }

finish:;
}
