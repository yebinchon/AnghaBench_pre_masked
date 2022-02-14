
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {scalar_t__ chan_tx; scalar_t__ chan_rx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tmio_mmc_host*,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_0)
{
 FUNC_1(VAR_0, 0);

 if (VAR_0->chan_rx)
  FUNC_0(VAR_0->chan_rx);
 if (VAR_0->chan_tx)
  FUNC_0(VAR_0->chan_tx);

 FUNC_1(VAR_0, 1);
}
