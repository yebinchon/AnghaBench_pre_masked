
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
typedef int u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_ds_hs_cfg {void* gap; void* gpio; void* conditions; int is_invoke_hostcmd; } ;
struct TYPE_2__ {void* conditions; void* gap; void* gpio; } ;
struct mwifiex_adapter {TYPE_1__ hs_cfg; int work_flags; int pps_uapsd_mode; } ;


 int VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,int ,int const,int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct mwifiex_private *VAR_6, u16 VAR_7,
     int VAR_8, struct mwifiex_ds_hs_cfg *VAR_9)

{
 struct mwifiex_adapter *VAR_10 = VAR_6->adapter;
 int VAR_11 = 0;
 u32 VAR_12 = 0;

 if (!VAR_9)
  return -VAR_0;

 switch (VAR_7) {
 case 128:
  if (VAR_10->pps_uapsd_mode) {
   FUNC_2(VAR_10, VAR_3,
        "info: Host Sleep IOCTL\t"
        "is blocked in UAPSD/PPS mode\n");
   VAR_11 = -1;
   break;
  }
  if (VAR_9->is_invoke_hostcmd) {
   if (VAR_9->conditions == VAR_1) {
    if (!FUNC_4(VAR_4,
           &VAR_10->work_flags))

     break;

    VAR_12 = FUNC_1(VAR_10->hs_cfg
       .conditions);
    VAR_10->hs_cfg.conditions =
      FUNC_0(VAR_9->conditions);
   } else if (VAR_9->conditions) {
    VAR_10->hs_cfg.conditions =
      FUNC_0(VAR_9->conditions);
    VAR_10->hs_cfg.gpio = (u8)VAR_9->gpio;
    if (VAR_9->gap)
     VAR_10->hs_cfg.gap = (u8)VAR_9->gap;
   } else if (VAR_10->hs_cfg.conditions ==
       FUNC_0(VAR_1)) {


    VAR_11 = -1;
    break;
   }

   VAR_11 = FUNC_3(VAR_6,
        VAR_2,
        128, 0,
        &VAR_10->hs_cfg,
        VAR_8 == VAR_5);

   if (VAR_9->conditions == VAR_1)

    VAR_10->hs_cfg.conditions =
      FUNC_0(VAR_12);
  } else {
   VAR_10->hs_cfg.conditions =
      FUNC_0(VAR_9->conditions);
   VAR_10->hs_cfg.gpio = (u8)VAR_9->gpio;
   VAR_10->hs_cfg.gap = (u8)VAR_9->gap;
  }
  break;
 case 129:
  VAR_9->conditions = FUNC_1(VAR_10->hs_cfg.conditions);
  VAR_9->gpio = VAR_10->hs_cfg.gpio;
  VAR_9->gap = VAR_10->hs_cfg.gap;
  break;
 default:
  VAR_11 = -1;
  break;
 }

 return VAR_11;
}
