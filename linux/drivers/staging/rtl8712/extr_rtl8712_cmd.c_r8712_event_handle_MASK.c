
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wlan_bssid_ex {int dummy; } ;
struct evt_priv {int event_seq; int evt_done_cnt; } ;
struct _adapter {struct evt_priv evtpriv; } ;
typedef int __le32 ;
struct TYPE_2__ {int parmsize; void (* event_callback ) (struct _adapter*,int*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;

void FUNC_2(struct _adapter *VAR_4, __le32 *VAR_5)
{
 u8 VAR_6, VAR_7;
 u16 VAR_8;
 void (*VAR_9)(struct _adapter *VAR_10, u8 *VAR_11);
 struct evt_priv *VAR_12 = &VAR_4->evtpriv;

 if (!VAR_5)
  goto _abort_event_;
 VAR_8 = (u16)(FUNC_1(*VAR_5) & 0xffff);
 VAR_7 = (u8)((FUNC_1(*VAR_5) >> 24) & 0x7f);
 VAR_6 = (u8)((FUNC_1(*VAR_5) >> 16) & 0xff);

 if ((VAR_7 & 0x7f) != VAR_12->event_seq) {
  VAR_12->event_seq = ((VAR_7 + 1) & 0x7f);
  goto _abort_event_;
 }

 if (VAR_6 >= VAR_0) {
  VAR_12->event_seq = ((VAR_7 + 1) & 0x7f);
  goto _abort_event_;
 } else if ((VAR_6 == FUNC_0(VAR_1)) &&
     (VAR_8 > sizeof(struct wlan_bssid_ex))) {
  VAR_12->event_seq = ((VAR_7 + 1) & 0x7f);
  goto _abort_event_;
 }

 if ((VAR_3[VAR_6].parmsize) &&
     (VAR_3[VAR_6].parmsize != VAR_8)) {
  VAR_12->event_seq = ((VAR_7 + 1) & 0x7f);
  goto _abort_event_;
 } else if ((VAR_8 == 0) && (VAR_6 != FUNC_0(VAR_2))) {
  VAR_12->event_seq = ((VAR_7 + 1) & 0x7f);
  goto _abort_event_;
 }
 VAR_12->event_seq++;
 if (VAR_12->event_seq > 127)
  VAR_12->event_seq = 0;

 VAR_5 = VAR_5 + 2;
 VAR_9 = VAR_3[VAR_6].event_callback;
 if (VAR_9)
  VAR_9(VAR_4, (u8 *)VAR_5);
 VAR_12->evt_done_cnt++;
_abort_event_:
 return;
}
