
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1251 {int dummy; } ;
struct acx_fw_gen_frame_rates {void* tx_mgt_frame_mod; void* tx_mgt_frame_rate; void* tx_ctrl_frame_mod; void* tx_ctrl_frame_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_fw_gen_frame_rates*) ;
 struct acx_fw_gen_frame_rates* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_fw_gen_frame_rates*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5, u8 VAR_6,
      u8 VAR_7, u8 VAR_8)
{
 struct acx_fw_gen_frame_rates *VAR_9;
 int VAR_10;

 FUNC_3(VAR_1, "acx frame rates");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->tx_ctrl_frame_rate = VAR_5;
 VAR_9->tx_ctrl_frame_mod = VAR_6;
 VAR_9->tx_mgt_frame_rate = VAR_7;
 VAR_9->tx_mgt_frame_mod = VAR_8;

 VAR_10 = FUNC_2(VAR_4, VAR_0,
       VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_4("Failed to set FW rates and modulation");
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
