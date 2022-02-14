
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct rtl8xxxu_priv {TYPE_1__* udev; } ;
struct TYPE_10__ {int payload; } ;
struct TYPE_9__ {int rate; int macid; int noisy_state; int dummy0_0; } ;
struct TYPE_8__ {int status; int ext_id; } ;
struct TYPE_7__ {int tx_rx_mask; int bt_has_reset; int response_source; } ;
struct rtl8723bu_c2h {int id; TYPE_5__ raw; int seq; TYPE_4__ ra_report; TYPE_3__ bt_mp_info; TYPE_2__ bt_info; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,int ) ;
 int FUNC_2 (int ,char*,int ,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtl8xxxu_priv *VAR_3,
     struct sk_buff *VAR_4)
{
 struct rtl8723bu_c2h *VAR_5 = (struct rtl8723bu_c2h *)VAR_4->data;
 struct device *VAR_6 = &VAR_3->udev->dev;
 int VAR_7;

 VAR_7 = VAR_4->len - 2;

 FUNC_0(VAR_6, "C2H ID %02x seq %02x, len %02x source %02x\n",
  VAR_5->id, VAR_5->seq, VAR_7, VAR_5->bt_info.response_source);

 switch(VAR_5->id) {
 case 130:
  if (VAR_5->bt_info.response_source >
      VAR_0)
   FUNC_0(VAR_6, "C2H_BT_INFO WiFi only firmware\n");
  else
   FUNC_0(VAR_6, "C2H_BT_INFO BT/WiFi coexist firmware\n");

  if (VAR_5->bt_info.bt_has_reset)
   FUNC_0(VAR_6, "BT has been reset\n");
  if (VAR_5->bt_info.tx_rx_mask)
   FUNC_0(VAR_6, "BT TRx mask\n");

  break;
 case 129:
  FUNC_0(VAR_6, "C2H_MP_INFO ext ID %02x, status %02x\n",
   VAR_5->bt_mp_info.ext_id, VAR_5->bt_mp_info.status);
  break;
 case 128:
  FUNC_0(VAR_6,
   "C2H RA RPT: rate %02x, unk %i, macid %02x, noise %i\n",
   VAR_5->ra_report.rate, VAR_5->ra_report.dummy0_0,
   VAR_5->ra_report.macid, VAR_5->ra_report.noisy_state);
  break;
 default:
  FUNC_1(VAR_6, "Unhandled C2H event %02x seq %02x\n",
    VAR_5->id, VAR_5->seq);
  FUNC_2(VAR_2, "C2H content: ", VAR_1,
          16, 1, VAR_5->raw.payload, VAR_7, 0);
  break;
 }
}
