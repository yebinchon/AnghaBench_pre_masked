
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdio_mmc_card {int mp_wr_bitmap; int mp_data_port_mask; int curr_wr_port; int mp_end_port; scalar_t__ has_control_mask; struct mwifiex_sdio_card_reg* reg; } ;
struct mwifiex_sdio_card_reg {int start_wr_port; } ;
struct mwifiex_adapter {int data_sent; struct sdio_mmc_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_4, u32 *VAR_5)
{
 struct sdio_mmc_card *VAR_6 = VAR_4->card;
 const struct mwifiex_sdio_card_reg *VAR_7 = VAR_6->reg;
 u32 VAR_8 = VAR_6->mp_wr_bitmap;

 FUNC_0(VAR_4, VAR_1,
      "data: mp_wr_bitmap=0x%08x\n", VAR_8);

 if (!(VAR_8 & VAR_6->mp_data_port_mask)) {
  VAR_4->data_sent = 1;
  return -VAR_2;
 }

 if (VAR_6->mp_wr_bitmap & (1 << VAR_6->curr_wr_port)) {
  VAR_6->mp_wr_bitmap &= (u32) (~(1 << VAR_6->curr_wr_port));
  *VAR_5 = VAR_6->curr_wr_port;
  if (++VAR_6->curr_wr_port == VAR_6->mp_end_port)
   VAR_6->curr_wr_port = VAR_7->start_wr_port;
 } else {
  VAR_4->data_sent = 1;
  return -VAR_2;
 }

 if ((VAR_6->has_control_mask) && (*VAR_5 == VAR_0)) {
  FUNC_0(VAR_4, VAR_3,
       "invalid data port=%d cur port=%d mp_wr_bitmap=0x%08x -> 0x%08x\n",
       *VAR_5, VAR_6->curr_wr_port, VAR_8,
       VAR_6->mp_wr_bitmap);
  return -1;
 }

 FUNC_0(VAR_4, VAR_1,
      "data: port=%d mp_wr_bitmap=0x%08x -> 0x%08x\n",
      *VAR_5, VAR_8, VAR_6->mp_wr_bitmap);

 return 0;
}
