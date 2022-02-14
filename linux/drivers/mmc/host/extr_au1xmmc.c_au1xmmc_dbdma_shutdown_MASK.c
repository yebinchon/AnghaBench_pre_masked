
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xmmc_host {int flags; int rx_chan; int tx_chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct au1xmmc_host *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  VAR_1->flags &= ~VAR_0;
  FUNC_0(VAR_1->tx_chan);
  FUNC_0(VAR_1->rx_chan);
 }
}
