
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct kvaser_usb_dev_card_data_hydra {size_t* channel_to_he; size_t sysdbg_he; } ;
struct TYPE_4__ {struct kvaser_usb_dev_card_data_hydra hydra; } ;
struct kvaser_usb {TYPE_3__* intf; TYPE_1__ card_data; } ;
struct TYPE_5__ {size_t he_addr; } ;
struct kvaser_cmd {TYPE_2__ map_ch_res; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct kvaser_cmd const*) ;

__attribute__((used)) static int FUNC_3(struct kvaser_usb *VAR_1,
          const struct kvaser_cmd *VAR_2)
{
 u8 VAR_3, VAR_4;
 u16 VAR_5 = FUNC_2(VAR_2);
 struct kvaser_usb_dev_card_data_hydra *VAR_6 =
       &VAR_1->card_data.hydra;

 if (VAR_5 > 0x007f || VAR_5 < 0x0040) {
  FUNC_0(&VAR_1->intf->dev,
   "CMD_MAP_CHANNEL_RESP, invalid transid: 0x%x\n",
   VAR_5);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 129:
 case 129 + 1:
 case 129 + 2:
 case 129 + 3:
 case 129 + 4:
  VAR_4 = VAR_5 & 0x000f;
  VAR_3 = VAR_2->map_ch_res.he_addr;
  VAR_6->channel_to_he[VAR_4] = VAR_3;
  break;
 case 128:
  VAR_6->sysdbg_he = VAR_2->map_ch_res.he_addr;
  break;
 default:
  FUNC_1(&VAR_1->intf->dev,
    "Unknown CMD_MAP_CHANNEL_RESP transid=0x%x\n",
    VAR_5);
  break;
 }

 return 0;
}
