
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_5__ {int mem; } ;
struct wl1271 {int quirks; int fw_mem_block_size; int fwlog_end; int ba_rx_session_count_max; int max_channels_5; int sched_scan_templ_id_5; int sched_scan_templ_id_2_4; int scan_templ_id_5; int scan_templ_id_2_4; TYPE_3__ chip; void* mr_fw_name; void* sr_fw_name; int plt_fw_name; TYPE_2__* ops; TYPE_1__ conf; } ;
struct TYPE_8__ {int mem_wl127x; } ;
struct TYPE_6__ {void* prepare_read; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
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
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 void* VAR_38 ;
 TYPE_4__ VAR_39 ;
 int FUNC_3 (struct wl1271*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_40)
{
 int VAR_41 = 0;

 switch (VAR_40->chip.id) {
 case 131:
  FUNC_2("chip id 0x%x (1271 PG10) support is obsolete",
          VAR_40->chip.id);

  VAR_40->quirks |= VAR_34 |
         VAR_33 |
         VAR_36 |
         VAR_35 |
         VAR_32;
  VAR_40->sr_fw_name = VAR_8;
  VAR_40->mr_fw_name = VAR_7;
  FUNC_0(&VAR_40->conf.mem, &VAR_39.mem_wl127x,
         sizeof(VAR_40->conf.mem));


  VAR_40->ops->prepare_read = VAR_38;

  FUNC_3(VAR_40, VAR_6,
         VAR_10, VAR_12,
         VAR_17, VAR_14,
         VAR_9, VAR_11,
         VAR_16, VAR_13);
  break;

 case 130:
  FUNC_1(VAR_4, "chip id 0x%x (1271 PG20)",
        VAR_40->chip.id);

  VAR_40->quirks |= VAR_34 |
         VAR_33 |
         VAR_36 |
         VAR_35 |
         VAR_32;
  VAR_40->plt_fw_name = VAR_15;
  VAR_40->sr_fw_name = VAR_8;
  VAR_40->mr_fw_name = VAR_7;
  FUNC_0(&VAR_40->conf.mem, &VAR_39.mem_wl127x,
         sizeof(VAR_40->conf.mem));


  VAR_40->ops->prepare_read = VAR_38;

  FUNC_3(VAR_40, VAR_6,
         VAR_10, VAR_12,
         VAR_17, VAR_14,
         VAR_9, VAR_11,
         VAR_16, VAR_13);
  break;

 case 128:
  FUNC_1(VAR_4, "chip id 0x%x (1283 PG20)",
        VAR_40->chip.id);
  VAR_40->plt_fw_name = VAR_27;
  VAR_40->sr_fw_name = VAR_20;
  VAR_40->mr_fw_name = VAR_19;


  VAR_40->quirks |= VAR_37 |
         VAR_33 |
         VAR_36 |
         VAR_35 |
         VAR_32;

  FUNC_3(VAR_40, VAR_18,
         VAR_22, VAR_24,
         VAR_29, VAR_26,
         VAR_21, VAR_23,
         VAR_28, VAR_25);
  break;
 case 129:
 default:
  FUNC_2("unsupported chip id: 0x%x", VAR_40->chip.id);
  VAR_41 = -VAR_5;
  goto out;
 }

 VAR_40->fw_mem_block_size = 256;
 VAR_40->fwlog_end = 0x2000000;


 VAR_40->scan_templ_id_2_4 = VAR_0;
 VAR_40->scan_templ_id_5 = VAR_1;
 VAR_40->sched_scan_templ_id_2_4 = VAR_2;
 VAR_40->sched_scan_templ_id_5 = VAR_3;
 VAR_40->max_channels_5 = VAR_30;
 VAR_40->ba_rx_session_count_max = VAR_31;
out:
 return VAR_41;
}
