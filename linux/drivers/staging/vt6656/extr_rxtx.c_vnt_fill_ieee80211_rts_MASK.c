
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_usb_send_context {TYPE_1__* skb; } ;
struct ieee80211_rts {int ta; int ra; int frame_control; int duration; } ;
struct ieee80211_hdr {int addr2; int addr1; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vnt_usb_send_context *VAR_2,
      struct ieee80211_rts *VAR_3, __le16 VAR_4)
{
 struct ieee80211_hdr *VAR_5 =
    (struct ieee80211_hdr *)VAR_2->skb->data;

 VAR_3->duration = VAR_4;
 VAR_3->frame_control =
  FUNC_0(VAR_0 | VAR_1);

 FUNC_1(VAR_3->ra, VAR_5->addr1);
 FUNC_1(VAR_3->ta, VAR_5->addr2);

 return 0;
}
