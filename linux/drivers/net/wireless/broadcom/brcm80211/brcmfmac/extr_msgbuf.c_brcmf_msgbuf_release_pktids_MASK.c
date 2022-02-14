
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_msgbuf {scalar_t__ tx_pktids; TYPE_2__* drvr; scalar_t__ rx_pktids; } ;
struct TYPE_4__ {TYPE_1__* bus_if; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct brcmf_msgbuf *VAR_0)
{
 if (VAR_0->rx_pktids)
  FUNC_0(VAR_0->drvr->bus_if->dev,
        VAR_0->rx_pktids);
 if (VAR_0->tx_pktids)
  FUNC_0(VAR_0->drvr->bus_if->dev,
        VAR_0->tx_pktids);
}
