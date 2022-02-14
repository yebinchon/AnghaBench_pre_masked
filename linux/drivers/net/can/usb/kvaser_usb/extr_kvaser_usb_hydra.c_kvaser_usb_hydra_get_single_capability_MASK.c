
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int sysdbg_he; } ;
struct kvaser_usb_dev_card_data {int ctrlmode_supported; int capabilities; TYPE_3__ hydra; } ;
struct kvaser_usb {int nchannels; TYPE_5__* intf; struct kvaser_usb_dev_card_data card_data; } ;
struct TYPE_9__ {int mask; int value; int cap_cmd; int status; } ;
struct TYPE_7__ {int cap_cmd; } ;
struct TYPE_6__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_4__ cap_res; TYPE_2__ cap_req; TYPE_1__ header; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 struct kvaser_cmd* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct kvaser_cmd*) ;
 int FUNC_5 (struct kvaser_cmd*) ;
 int FUNC_6 (struct kvaser_usb*) ;
 int FUNC_7 (struct kvaser_cmd*,int ) ;
 int FUNC_8 (struct kvaser_cmd*,int ) ;
 int FUNC_9 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;
 int FUNC_10 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct kvaser_usb *VAR_8,
        u16 VAR_9, u16 *VAR_10)
{
 struct kvaser_usb_dev_card_data *VAR_11 = &VAR_8->card_data;
 struct kvaser_cmd *VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u16 VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_3(1, sizeof(struct kvaser_cmd), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->header.cmd_no = VAR_2;
 VAR_12->cap_req.cap_cmd = FUNC_1(VAR_9);

 FUNC_7(VAR_12, VAR_11->hydra.sysdbg_he);
 FUNC_8
    (VAR_12, FUNC_6(VAR_8));

 VAR_16 = FUNC_10(VAR_8, VAR_12, FUNC_5(VAR_12));
 if (VAR_16)
  goto end;

 VAR_16 = FUNC_9(VAR_8, VAR_3, VAR_12);
 if (VAR_16)
  goto end;

 *VAR_10 = FUNC_11(VAR_12->cap_res.status);

 if (*VAR_10 != VAR_7)
  goto end;

 VAR_15 = FUNC_11(VAR_12->cap_res.cap_cmd);
 switch (VAR_15) {
 case 129:
 case 130:
 case 128:
  VAR_13 = FUNC_12(VAR_12->cap_res.value);
  VAR_14 = FUNC_12(VAR_12->cap_res.mask);
  break;
 default:
  FUNC_2(&VAR_8->intf->dev, "Unknown capability command %u\n",
    VAR_15);
  break;
 }

 for (VAR_17 = 0; VAR_17 < VAR_8->nchannels; VAR_17++) {
  if (FUNC_0(VAR_17) & (VAR_13 & VAR_14)) {
   switch (VAR_15) {
   case 129:
    VAR_11->ctrlmode_supported |=
      VAR_0;
    break;
   case 130:
    VAR_11->capabilities |=
      VAR_6;
    break;
   case 128:
    VAR_11->ctrlmode_supported |=
      VAR_1;
    break;
   }
  }
 }

end:
 FUNC_4(VAR_12);

 return VAR_16;
}
