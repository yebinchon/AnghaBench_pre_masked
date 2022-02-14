
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct kvaser_usb_dev_card_data {int ctrlmode_supported; int capabilities; } ;
struct kvaser_usb {int * cfg; TYPE_4__* intf; void* fw_version; struct kvaser_usb_dev_card_data card_data; } ;
struct TYPE_7__ {int sw_flags; int sw_version; } ;
struct TYPE_6__ {int use_ext_cmd; } ;
struct TYPE_5__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_3__ sw_detail_res; TYPE_2__ sw_detail_req; TYPE_1__ header; } ;
struct TYPE_8__ {int dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct kvaser_cmd* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_cmd*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct kvaser_usb*) ;
 int FUNC_6 (struct kvaser_cmd*,int ) ;
 int FUNC_7 (struct kvaser_cmd*,int ) ;
 int FUNC_8 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;
 int FUNC_9 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct kvaser_usb *VAR_19)
{
 struct kvaser_cmd *VAR_20;
 int VAR_21;
 u32 VAR_22;
 struct kvaser_usb_dev_card_data *VAR_23 = &VAR_19->card_data;

 VAR_20 = FUNC_2(1, sizeof(struct kvaser_cmd), VAR_6);
 if (!VAR_20)
  return -VAR_5;

 VAR_20->header.cmd_no = VAR_2;
 VAR_20->sw_detail_req.use_ext_cmd = 1;
 FUNC_6
    (VAR_20, VAR_9);

 FUNC_7
    (VAR_20, FUNC_5(VAR_19));

 VAR_21 = FUNC_9(VAR_19, VAR_20, FUNC_4(VAR_20));
 if (VAR_21)
  goto end;

 VAR_21 = FUNC_8(VAR_19, VAR_3,
     VAR_20);
 if (VAR_21)
  goto end;

 VAR_19->fw_version = FUNC_10(VAR_20->sw_detail_res.sw_version);
 VAR_22 = FUNC_10(VAR_20->sw_detail_res.sw_flags);

 if (VAR_22 & VAR_14) {
  FUNC_0(&VAR_19->intf->dev,
   "Bad firmware, device refuse to run!\n");
  VAR_21 = -VAR_4;
  goto end;
 }

 if (VAR_22 & VAR_15)
  FUNC_1(&VAR_19->intf->dev, "Beta firmware in use\n");

 if (VAR_22 & VAR_11)
  VAR_23->capabilities |= VAR_7;

 if (VAR_22 & VAR_12)
  VAR_23->capabilities |= VAR_8;

 if (VAR_22 & VAR_10)
  VAR_23->ctrlmode_supported |= VAR_0;

 if (VAR_22 & VAR_16)
  VAR_23->ctrlmode_supported |= VAR_1;

 if (VAR_22 & VAR_13)
  VAR_19->cfg = &VAR_18;
 else
  VAR_19->cfg = &VAR_17;

end:
 FUNC_3(VAR_20);

 return VAR_21;
}
