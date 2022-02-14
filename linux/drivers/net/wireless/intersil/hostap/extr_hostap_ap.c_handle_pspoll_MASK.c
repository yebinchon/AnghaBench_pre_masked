
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int aid; int flags; int users; int tx_buf; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct ieee80211_hdr {int addr1; int addr2; int duration_id; int frame_control; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct TYPE_6__ {TYPE_5__* ap; struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;
struct TYPE_7__ {int sta_table_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sta_info* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,struct sta_info*,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(local_info_t *VAR_6,
     struct ieee80211_hdr *VAR_7,
     struct hostap_80211_rx_status *VAR_8)
{
 struct net_device *VAR_9 = VAR_6->dev;
 struct sta_info *VAR_10;
 u16 VAR_11;
 struct sk_buff *VAR_12;

 FUNC_1(VAR_2, "handle_pspoll: BSSID=%pM, TA=%pM PWRMGT=%d\n",
        VAR_7->addr1, VAR_7->addr2, !!FUNC_7(VAR_7->frame_control));

 if (!FUNC_5(VAR_7->addr1, VAR_9->dev_addr)) {
  FUNC_1(VAR_0,
         "handle_pspoll - addr1(BSSID)=%pM not own MAC\n",
         VAR_7->addr1);
  return;
 }

 VAR_11 = FUNC_8(VAR_7->duration_id);
 if ((VAR_11 & (FUNC_0(15) | FUNC_0(14))) != (FUNC_0(15) | FUNC_0(14))) {
  FUNC_1(VAR_1, "   PSPOLL and AID[15:14] not set\n");
  return;
 }
 VAR_11 &= ~(FUNC_0(15) | FUNC_0(14));
 if (VAR_11 == 0 || VAR_11 > VAR_3) {
  FUNC_1(VAR_1, "   invalid aid=%d\n", VAR_11);
  return;
 }
 FUNC_1(VAR_2, "   aid=%d\n", VAR_11);

 FUNC_13(&VAR_6->ap->sta_table_lock);
 VAR_10 = FUNC_2(VAR_6->ap, VAR_7->addr2);
 if (VAR_10)
  FUNC_4(&VAR_10->users);
 FUNC_14(&VAR_6->ap->sta_table_lock);

 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_1, "   STA not found\n");
  return;
 }
 if (VAR_10->aid != VAR_11) {
  FUNC_1(VAR_1, "   received aid=%i does not match with "
         "assoc.aid=%d\n", VAR_11, VAR_10->aid);
  return;
 }
 while ((VAR_12 = FUNC_10(&VAR_10->tx_buf)) != ((void*)0)) {

  FUNC_1(VAR_2, "Sending buffered frame to STA after PS POLL"
         " (buffer_count=%d)\n", FUNC_12(&VAR_10->tx_buf));

  FUNC_9(VAR_6, VAR_10, VAR_12);

  if (VAR_10->flags & VAR_4) {




   break;
  }
 }

 if (FUNC_11(&VAR_10->tx_buf)) {

  if (!(VAR_10->flags & VAR_5))
   FUNC_1(VAR_2, "Re-unsetting TIM for aid %d\n",
          VAR_11);
  FUNC_6(VAR_6, VAR_11, 0);
  VAR_10->flags &= ~VAR_5;
 }

 FUNC_3(&VAR_10->users);
}
