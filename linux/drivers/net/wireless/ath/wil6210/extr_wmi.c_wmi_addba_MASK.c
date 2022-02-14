
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_ring_ba_en_cmd {int ring_id; int agg_max_wsize; int amsdu; int ba_timeout; } ;
struct wil6210_priv {scalar_t__ amsdu_en; int fw_capabilities; scalar_t__ use_rx_hw_reordering; scalar_t__ use_enhanced_dma_hw; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,int,int,int ,int) ;
 int FUNC_3 (struct wil6210_priv*,int ,int,struct wmi_ring_ba_en_cmd*,int) ;

int FUNC_4(struct wil6210_priv *VAR_2, u8 VAR_3,
       u8 VAR_4, u8 VAR_5, u16 VAR_6)
{
 u8 VAR_7 = VAR_2->use_enhanced_dma_hw && VAR_2->use_rx_hw_reordering &&
  FUNC_1(VAR_0, VAR_2->fw_capabilities) &&
  VAR_2->amsdu_en;
 struct wmi_ring_ba_en_cmd VAR_8 = {
  .ring_id = VAR_4,
  .agg_max_wsize = VAR_5,
  .ba_timeout = FUNC_0(VAR_6),
  .amsdu = VAR_7,
 };

 FUNC_2(VAR_2, "addba: (ring %d size %d timeout %d amsdu %d)\n",
      VAR_4, VAR_5, VAR_6, VAR_7);

 return FUNC_3(VAR_2, VAR_1, VAR_3, &VAR_8, sizeof(VAR_8));
}
