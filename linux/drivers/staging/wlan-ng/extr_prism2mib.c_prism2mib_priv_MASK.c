
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpa ;
typedef int u8 ;
struct wlandevice {int netdev; } ;
struct p80211pstrd {int len; int data; } ;
struct p80211msg_dot11req_mibset {int dummy; } ;
struct mibrec {int did; } ;
struct hfa384x_wpa_data {int data; int datalen; } ;
struct hfa384x {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfa384x*,int ,int *,int) ;
 int FUNC_2 (struct hfa384x*,int ,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct mibrec *VAR_1,
     int VAR_2,
     struct wlandevice *VAR_3,
     struct hfa384x *VAR_4,
     struct p80211msg_dot11req_mibset *VAR_5, void *VAR_6)
{
 struct p80211pstrd *VAR_7 = VAR_6;

 switch (VAR_1->did) {
 case 128: {
  struct hfa384x_wpa_data VAR_8;

  if (VAR_2) {
   FUNC_1(VAR_4,
            VAR_0,
            (u8 *)&VAR_8,
            sizeof(VAR_8));
   VAR_7->len = FUNC_3(VAR_8.datalen);
   FUNC_4(VAR_7->data, VAR_8.data, VAR_7->len);
  } else {
   VAR_8.datalen = FUNC_0(VAR_7->len);
   FUNC_4(VAR_8.data, VAR_7->data, VAR_7->len);

   FUNC_2(VAR_4,
            VAR_0,
            (u8 *)&VAR_8,
            sizeof(VAR_8));
  }
  break;
 }
 default:
  FUNC_5(VAR_3->netdev, "Unhandled DID 0x%08x\n", VAR_1->did);
 }

 return 0;
}
