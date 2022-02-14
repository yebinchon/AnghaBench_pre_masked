
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; scalar_t__ silence; scalar_t__ signal; int rate; int time; int frame_control; int data_len; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;
union hfa384x_usbin {TYPE_3__ rxfrm; } ;
typedef int u16 ;
struct wlandevice {int hostwep; int netdev; struct hfa384x* priv; } ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct p80211_rxmeta {scalar_t__ noise; scalar_t__ signal; int rxrate; int mactime; } ;
struct hfa384x_rx_frame {int dummy; } ;
struct hfa384x {TYPE_1__* wlandev; scalar_t__ dbmadjust; } ;
struct TYPE_4__ {int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct wlandevice*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct wlandevice*,struct sk_buff*) ;
 struct p80211_rxmeta* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct wlandevice*,struct sk_buff*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_21(struct wlandevice *VAR_2, struct sk_buff *VAR_3)
{
 union hfa384x_usbin *VAR_4 = (union hfa384x_usbin *)VAR_3->data;
 struct hfa384x *VAR_5 = VAR_2->priv;
 int VAR_6;
 struct p80211_rxmeta *VAR_7;
 u16 VAR_8;
 u16 VAR_9;


 FUNC_6(&VAR_4->rxfrm.desc.status);
 FUNC_7(&VAR_4->rxfrm.desc.time);


 switch (FUNC_1(VAR_4->rxfrm.desc.status)) {
 case 0:
  VAR_9 = FUNC_5(VAR_4->rxfrm.desc.frame_control);


  if ((VAR_2->hostwep & VAR_0) &&
      !FUNC_2(VAR_9)) {
   break;
  }

  VAR_8 = FUNC_5(VAR_4->rxfrm.desc.data_len);


  VAR_6 = FUNC_11(VAR_9);


  FUNC_16(VAR_3, sizeof(struct hfa384x_rx_frame));




  FUNC_8(FUNC_17(VAR_3, VAR_6),
   &VAR_4->rxfrm.desc.frame_control, VAR_6);

  VAR_3->dev = VAR_2->netdev;


  FUNC_20(VAR_3, VAR_8 + VAR_6);


  FUNC_9(FUNC_18(VAR_3, VAR_1), 0xff, VAR_1);

  FUNC_19(VAR_3);


  FUNC_14(VAR_2, VAR_3);
  VAR_7 = FUNC_13(VAR_3);
  VAR_7->mactime = VAR_4->rxfrm.desc.time;
  VAR_7->rxrate = VAR_4->rxfrm.desc.rate;
  VAR_7->signal = VAR_4->rxfrm.desc.signal - VAR_5->dbmadjust;
  VAR_7->noise = VAR_4->rxfrm.desc.silence - VAR_5->dbmadjust;

  FUNC_12(VAR_2, VAR_3);

  break;

 case 7:
  if (!FUNC_0(VAR_4->rxfrm.desc.status)) {

   FUNC_4(VAR_2, &VAR_4->rxfrm);
   FUNC_3(VAR_3);
  } else {
   FUNC_15("Received monitor frame: FCSerr set\n");
  }
  break;

 default:
  FUNC_10(VAR_5->wlandev->netdev, "Received frame on unsupported port=%d\n",
       FUNC_1(VAR_4->rxfrm.desc.status));
  break;
 }
}
