
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct wl1271 {int quirks; int fw_mem_block_size; int fwlog_end; int ba_rx_session_count_max; int max_channels_5; int sched_scan_templ_id_5; int sched_scan_templ_id_2_4; int scan_templ_id_5; int scan_templ_id_2_4; TYPE_1__ chip; void* plt_fw_name; void* sr_fw_name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct wl1271*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_20)
{
 int VAR_21 = 0;

 switch (VAR_20->chip.id) {
 case 128:
  FUNC_0(VAR_4, "chip id 0x%x (185x PG20)",
     VAR_20->chip.id);
  VAR_20->sr_fw_name = VAR_7;

  VAR_20->plt_fw_name = VAR_7;
  VAR_20->quirks |= VAR_17 |
         VAR_18 |
         VAR_15 |
         VAR_19 |
         VAR_16 |
         VAR_14;

  FUNC_2(VAR_20, VAR_6,
          VAR_8, VAR_9,
          VAR_13, VAR_11,

          0, 0, 0, 0);
  break;
 case 129:
  FUNC_1("chip id 0x%x (185x PG10) is deprecated",
          VAR_20->chip.id);
  VAR_21 = -VAR_5;
  goto out;

 default:
  FUNC_1("unsupported chip id: 0x%x", VAR_20->chip.id);
  VAR_21 = -VAR_5;
  goto out;
 }

 VAR_20->fw_mem_block_size = 272;
 VAR_20->fwlog_end = 0x40000000;

 VAR_20->scan_templ_id_2_4 = VAR_0;
 VAR_20->scan_templ_id_5 = VAR_1;
 VAR_20->sched_scan_templ_id_2_4 = VAR_2;
 VAR_20->sched_scan_templ_id_5 = VAR_3;
 VAR_20->max_channels_5 = VAR_10;
 VAR_20->ba_rx_session_count_max = VAR_12;
out:
 return VAR_21;
}
