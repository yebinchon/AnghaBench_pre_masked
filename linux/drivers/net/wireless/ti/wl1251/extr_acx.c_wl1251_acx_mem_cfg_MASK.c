
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int priority; int num_descs; scalar_t__ dma_address; } ;
struct TYPE_4__ {int rx_mem_block_num; int tx_min_mem_block_num; int num_tx_queues; int num_ssid_profiles; void* debug_buffer_size; int host_if_options; void* num_stations; } ;
struct wl1251_acx_config_memory {TYPE_3__* tx_queue_config; TYPE_2__ rx_queue_config; TYPE_1__ mem_config; } ;
struct wl1251 {int dummy; } ;
struct TYPE_6__ {int attributes; int num_descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251_acx_config_memory*) ;
 struct wl1251_acx_config_memory* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1251*,int ,struct wl1251_acx_config_memory*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1251 *VAR_12)
{
 struct wl1251_acx_config_memory *VAR_13;
 int VAR_14, VAR_15;

 FUNC_4(VAR_3, "acx mem cfg");

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_8);
 if (!VAR_13)
  return -VAR_7;


 VAR_13->mem_config.num_stations = FUNC_0(VAR_4);
 VAR_13->mem_config.rx_mem_block_num = 35;
 VAR_13->mem_config.tx_min_mem_block_num = 64;
 VAR_13->mem_config.num_tx_queues = VAR_10;
 VAR_13->mem_config.host_if_options = VAR_9;
 VAR_13->mem_config.num_ssid_profiles = 1;
 VAR_13->mem_config.debug_buffer_size =
  FUNC_0(VAR_11);


 VAR_13->rx_queue_config.dma_address = 0;
 VAR_13->rx_queue_config.num_descs = VAR_1;
 VAR_13->rx_queue_config.priority = VAR_5;
 VAR_13->rx_queue_config.type = VAR_6;


 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_13->tx_queue_config[VAR_15].num_descs = VAR_2;
  VAR_13->tx_queue_config[VAR_15].attributes = VAR_15;
 }

 VAR_14 = FUNC_3(VAR_12, VAR_0, VAR_13,
       sizeof(*VAR_13));
 if (VAR_14 < 0) {
  FUNC_5("wl1251 mem config failed: %d", VAR_14);
  goto out;
 }

out:
 FUNC_1(VAR_13);
 return VAR_14;
}
