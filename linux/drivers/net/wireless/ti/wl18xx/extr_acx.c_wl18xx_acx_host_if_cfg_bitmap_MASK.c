
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl18xx_acx_host_config_bitmap {void* length_field_size; void* extra_mem_blocks; void* host_sdio_block_size; void* host_cfg_bitmap; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wl18xx_acx_host_config_bitmap*) ;
 struct wl18xx_acx_host_config_bitmap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl18xx_acx_host_config_bitmap*,int) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, u32 VAR_5,
      u32 VAR_6, u32 VAR_7,
      u32 VAR_8)
{
 struct wl18xx_acx_host_config_bitmap *VAR_9;
 int VAR_10;

 FUNC_4(VAR_1, "acx cfg bitmap %d blk %d spare %d field %d",
       VAR_5, VAR_6, VAR_7,
       VAR_8);

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9->host_cfg_bitmap = FUNC_0(VAR_5);
 VAR_9->host_sdio_block_size = FUNC_0(VAR_6);
 VAR_9->extra_mem_blocks = FUNC_0(VAR_7);
 VAR_9->length_field_size = FUNC_0(VAR_8);

 VAR_10 = FUNC_3(VAR_4, VAR_0,
       VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_5("wl1271 bitmap config opt failed: %d", VAR_10);
  goto out;
 }

out:
 FUNC_1(VAR_9);

 return VAR_10;
}
