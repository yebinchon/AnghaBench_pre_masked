
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {scalar_t__ chan_tx; scalar_t__ chan_rx; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_1,
         struct mmc_data *VAR_2)
{
 if (VAR_2->flags & VAR_0) {
  if (VAR_1->chan_rx)
   FUNC_0(VAR_1);
 } else {
  if (VAR_1->chan_tx)
   FUNC_1(VAR_1);
 }
}
