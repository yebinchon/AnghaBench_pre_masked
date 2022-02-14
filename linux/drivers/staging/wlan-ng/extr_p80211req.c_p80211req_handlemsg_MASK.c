
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {int hostwep; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int data; } ;
struct p80211msg_lnxreq_hostwep {TYPE_1__ encrypt; TYPE_2__ decrypt; } ;
struct p80211msg_dot11req_mibget {int dummy; } ;
struct p80211msg {int msgcode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wlandevice*,struct p80211msg_dot11req_mibget*,int) ;

__attribute__((used)) static void FUNC_1(struct wlandevice *VAR_3,
    struct p80211msg *VAR_4)
{
 switch (VAR_4->msgcode) {
 case 128: {
  struct p80211msg_lnxreq_hostwep *VAR_5 =
   (struct p80211msg_lnxreq_hostwep *)VAR_4;
  VAR_3->hostwep &=
    ~(VAR_0 | VAR_1);
  if (VAR_5->decrypt.data == VAR_2)
   VAR_3->hostwep |= VAR_0;
  if (VAR_5->encrypt.data == VAR_2)
   VAR_3->hostwep |= VAR_1;

  break;
 }
 case 130:
 case 129: {
  int VAR_6 = (VAR_4->msgcode == 130);
  struct p80211msg_dot11req_mibget *VAR_7 =
   (struct p80211msg_dot11req_mibget *)VAR_4;
  FUNC_0(VAR_3, VAR_7, VAR_6);
  break;
 }
 }
}
