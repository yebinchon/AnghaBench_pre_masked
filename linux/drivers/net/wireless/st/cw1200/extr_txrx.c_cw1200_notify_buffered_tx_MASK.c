
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;
struct cw1200_common {int vif; int ps_state_lock; TYPE_1__* link_id_db; } ;
struct TYPE_2__ {scalar_t__* buffered; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee80211_sta* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_sta*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cw1200_common *VAR_1,
          struct sk_buff *VAR_2, int VAR_3, int VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct ieee80211_hdr *VAR_6;
 u8 *VAR_7;
 u8 VAR_8 = 0;

 if (VAR_3 && VAR_4 < VAR_0) {
  VAR_7 = VAR_1->link_id_db
    [VAR_3 - 1].buffered;

  FUNC_5(&VAR_1->ps_state_lock);
  if (!FUNC_0(!VAR_7[VAR_4]))
   VAR_8 = --VAR_7[VAR_4];
  FUNC_6(&VAR_1->ps_state_lock);

  if (!VAR_8 && VAR_4 < VAR_0) {
   VAR_6 = (struct ieee80211_hdr *)VAR_2->data;
   FUNC_3();
   VAR_5 = FUNC_1(VAR_1->vif, VAR_6->addr1);
   if (VAR_5)
    FUNC_2(VAR_5, VAR_4, 0);
   FUNC_4();
  }
 }
}
