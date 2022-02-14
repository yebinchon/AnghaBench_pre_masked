
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdio_mmc_card {int mp_end_port; int mp_data_port_mask; int max_ports; scalar_t__ curr_wr_port; struct mwifiex_sdio_card_reg* reg; } ;
struct mwifiex_sdio_card_reg {int data_port_mask; scalar_t__ start_wr_port; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mwifiex_adapter *VAR_1, u16 VAR_2)
{
 struct sdio_mmc_card *VAR_3 = VAR_1->card;
 const struct mwifiex_sdio_card_reg *VAR_4 = VAR_3->reg;
 int VAR_5;

 VAR_3->mp_end_port = VAR_2;

 VAR_3->mp_data_port_mask = VAR_4->data_port_mask;

 if (VAR_4->start_wr_port) {
  for (VAR_5 = 1; VAR_5 <= VAR_3->max_ports - VAR_3->mp_end_port; VAR_5++)
   VAR_3->mp_data_port_mask &=
     ~(1 << (VAR_3->max_ports - VAR_5));
 }

 VAR_3->curr_wr_port = VAR_4->start_wr_port;

 FUNC_0(VAR_1, VAR_0,
      "cmd: mp_end_port %d, data port mask 0x%x\n",
      VAR_2, VAR_3->mp_data_port_mask);
}
