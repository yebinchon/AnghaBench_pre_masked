
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct mt76_wcid {int * rx_key_pn; int rx_check_pn; } ;
struct mt76_rx_status {int flag; size_t tid; int iv; struct mt76_wcid* wcid; } ;
struct ieee80211_hdr {int frame_control; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_4)
{
 struct mt76_rx_status *VAR_5 = (struct mt76_rx_status *)VAR_4->cb;
 struct mt76_wcid *VAR_6 = VAR_5->wcid;
 struct ieee80211_hdr *VAR_7;
 int VAR_8;

 if (!(VAR_5->flag & VAR_1))
  return 0;

 if (!VAR_6 || !VAR_6->rx_check_pn)
  return 0;

 if (!(VAR_5->flag & VAR_2)) {




  VAR_7 = (struct ieee80211_hdr *)VAR_4->data;
  if (FUNC_2(VAR_7) &&
      !FUNC_1(VAR_7->frame_control))
   return 0;
 }

 FUNC_0(sizeof(VAR_5->iv) != sizeof(VAR_6->rx_key_pn[0]));
 VAR_8 = FUNC_3(VAR_5->iv, VAR_6->rx_key_pn[VAR_5->tid],
       sizeof(VAR_5->iv));
 if (VAR_8 <= 0)
  return -VAR_0;

 FUNC_4(VAR_6->rx_key_pn[VAR_5->tid], VAR_5->iv, sizeof(VAR_5->iv));

 if (VAR_5->flag & VAR_2)
  VAR_5->flag |= VAR_3;

 return 0;
}
