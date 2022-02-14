
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_mmc_card {int mp_rd_bitmap; int curr_rd_port; int max_ports; scalar_t__ has_control_mask; scalar_t__ supports_sdio_new_mode; struct mwifiex_sdio_card_reg* reg; } ;
struct mwifiex_sdio_card_reg {int data_port_mask; int start_rd_port; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_3, u8 *VAR_4)
{
 struct sdio_mmc_card *VAR_5 = VAR_3->card;
 const struct mwifiex_sdio_card_reg *VAR_6 = VAR_5->reg;
 u32 VAR_7 = VAR_5->mp_rd_bitmap;

 FUNC_0(VAR_3, VAR_2,
      "data: mp_rd_bitmap=0x%08x\n", VAR_7);

 if (VAR_5->supports_sdio_new_mode) {
  if (!(VAR_7 & VAR_6->data_port_mask))
   return -1;
 } else {
  if (!(VAR_7 & (VAR_1 | VAR_6->data_port_mask)))
   return -1;
 }

 if ((VAR_5->has_control_mask) &&
     (VAR_5->mp_rd_bitmap & VAR_1)) {
  VAR_5->mp_rd_bitmap &= (u32) (~VAR_1);
  *VAR_4 = VAR_0;
  FUNC_0(VAR_3, VAR_2,
       "data: port=%d mp_rd_bitmap=0x%08x\n",
       *VAR_4, VAR_5->mp_rd_bitmap);
  return 0;
 }

 if (!(VAR_5->mp_rd_bitmap & (1 << VAR_5->curr_rd_port)))
  return -1;


 VAR_5->mp_rd_bitmap &= (u32)(~(1 << VAR_5->curr_rd_port));
 *VAR_4 = VAR_5->curr_rd_port;

 if (++VAR_5->curr_rd_port == VAR_5->max_ports)
  VAR_5->curr_rd_port = VAR_6->start_rd_port;

 FUNC_0(VAR_3, VAR_2,
      "data: port=%d mp_rd_bitmap=0x%08x -> 0x%08x\n",
      *VAR_4, VAR_7, VAR_5->mp_rd_bitmap);

 return 0;
}
