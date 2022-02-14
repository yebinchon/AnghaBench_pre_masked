
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_hdr_4addr {int addr3; int addr1; int addr2; int frame_ctl; } ;
struct libipw_hdr_3addr {int dummy; } ;
struct libipw_device {int iw_mode; TYPE_2__* dev; int bssid; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {int flags; TYPE_1__ stats; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct libipw_device*,struct sk_buff*,struct libipw_rx_stats*) ;
 int FUNC_5 (struct libipw_device*,struct libipw_hdr_4addr*,struct libipw_rx_stats*) ;

void FUNC_6(struct libipw_device *VAR_6,
       struct sk_buff *VAR_7, struct libipw_rx_stats *VAR_8)
{
 struct libipw_hdr_4addr *VAR_9;
 int VAR_10;
 u16 VAR_11;

 if (VAR_6->iw_mode == VAR_5) {
  if (!FUNC_4(VAR_6, VAR_7, VAR_8))
   FUNC_0(VAR_7);
  return;
 }

 if (VAR_7->len < sizeof(struct ieee80211_hdr))
  goto drop_free;

 VAR_9 = (struct libipw_hdr_4addr *)VAR_7->data;
 VAR_11 = FUNC_3(VAR_9->frame_ctl);

 if ((VAR_11 & VAR_3) != 0)
  goto drop_free;

 switch (VAR_11 & VAR_1) {
 case 130:
  if (VAR_7->len < sizeof(struct libipw_hdr_3addr))
   goto drop_free;
  FUNC_5(VAR_6, VAR_9, VAR_8);
  FUNC_0(VAR_7);
  return;
 case 131:
  break;
 case 132:
  return;
 default:
  return;
 }

 VAR_10 = 0;
 switch (VAR_6->iw_mode) {
 case 129:

  if (FUNC_1(VAR_9->addr3, VAR_6->bssid))
  if ((VAR_11 & (VAR_2+VAR_0)) == 0) {

   if (VAR_6->dev->flags & VAR_4)
    VAR_10 = 1;

   else if (FUNC_1(VAR_9->addr1, VAR_6->dev->dev_addr))
    VAR_10 = 1;

   else if (FUNC_2(VAR_9->addr1))
    VAR_10 = 1;
  }
  break;
 case 128:

  if (FUNC_1(VAR_9->addr2, VAR_6->bssid))
  if ((VAR_11 & (VAR_2+VAR_0)) == VAR_0) {

   if (VAR_6->dev->flags & VAR_4)
    VAR_10 = 1;

   else if (FUNC_1(VAR_9->addr1, VAR_6->dev->dev_addr))
    VAR_10 = 1;

   else if (FUNC_2(VAR_9->addr1)) {

    if (!FUNC_1(VAR_9->addr3, VAR_6->dev->dev_addr))
     VAR_10 = 1;
   }
  }
  break;
 default:

  break;
 }

 if (VAR_10)
  if (!FUNC_4(VAR_6, VAR_7, VAR_8))
   FUNC_0(VAR_7);
 return;

drop_free:
 FUNC_0(VAR_7);
 VAR_6->dev->stats.rx_dropped++;
}
