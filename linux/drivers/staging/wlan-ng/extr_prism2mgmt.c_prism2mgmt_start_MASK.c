
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct wlandevice {int netdev; int macmode; int ssid; struct hfa384x* priv; } ;
struct p80211pstrd {int dummy; } ;
struct TYPE_37__ {int data; scalar_t__ status; } ;
struct TYPE_36__ {scalar_t__ data; } ;
struct TYPE_35__ {scalar_t__ status; int data; } ;
struct TYPE_34__ {scalar_t__ status; int data; } ;
struct TYPE_32__ {scalar_t__ status; int data; } ;
struct TYPE_31__ {scalar_t__ status; int data; } ;
struct TYPE_30__ {scalar_t__ status; int data; } ;
struct TYPE_29__ {scalar_t__ status; int data; } ;
struct TYPE_28__ {scalar_t__ status; int data; } ;
struct TYPE_27__ {int data; } ;
struct TYPE_26__ {scalar_t__ status; int data; } ;
struct TYPE_25__ {scalar_t__ status; int data; } ;
struct TYPE_24__ {scalar_t__ status; int data; } ;
struct TYPE_23__ {scalar_t__ status; int data; } ;
struct TYPE_44__ {scalar_t__ status; int data; } ;
struct TYPE_43__ {scalar_t__ status; int data; } ;
struct TYPE_42__ {scalar_t__ status; int data; } ;
struct TYPE_41__ {int data; } ;
struct TYPE_40__ {int data; } ;
struct TYPE_39__ {int data; } ;
struct TYPE_38__ {int data; } ;
struct p80211msg_dot11req_start {TYPE_2__ resultcode; TYPE_22__ bsstype; TYPE_21__ operationalrate8; TYPE_20__ operationalrate7; TYPE_19__ operationalrate6; TYPE_18__ operationalrate5; TYPE_17__ operationalrate4; TYPE_16__ operationalrate3; TYPE_15__ operationalrate2; TYPE_14__ operationalrate1; TYPE_13__ basicrate8; TYPE_12__ basicrate7; TYPE_11__ basicrate6; TYPE_10__ basicrate5; TYPE_9__ basicrate4; TYPE_8__ basicrate3; TYPE_7__ basicrate2; TYPE_6__ basicrate1; TYPE_5__ dschannel; TYPE_4__ beaconperiod; TYPE_3__ ssid; } ;
struct hfa384x_bytestr {int dummy; } ;
struct TYPE_33__ {int minor; int variant; int major; } ;
struct hfa384x {TYPE_1__ ident_sta_fw; } ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct hfa384x*,int ) ;
 int FUNC_2 (struct hfa384x*,int ,int *,int ) ;
 int FUNC_3 (struct hfa384x*,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hfa384x_bytestr*,struct p80211pstrd*) ;

int FUNC_9(struct wlandevice *VAR_18, void *VAR_19)
{
 int VAR_20 = 0;
 struct hfa384x *VAR_21 = VAR_18->priv;
 struct p80211msg_dot11req_start *VAR_22 = VAR_19;

 struct p80211pstrd *VAR_23;
 u8 VAR_24[80];
 struct hfa384x_bytestr *VAR_25 = (struct hfa384x_bytestr *)VAR_24;
 u16 VAR_26;

 VAR_18->macmode = VAR_17;


 FUNC_4(&VAR_18->ssid, &VAR_22->ssid.data, sizeof(VAR_22->ssid.data));



 if (FUNC_0(VAR_21->ident_sta_fw.major,
         VAR_21->ident_sta_fw.minor,
         VAR_21->ident_sta_fw.variant) <
     FUNC_0(0, 8, 3)) {

  VAR_22->resultcode.status = VAR_12;
  VAR_22->resultcode.data = VAR_14;
  goto done;
 }

 VAR_22->resultcode.status = VAR_12;




 VAR_23 = (struct p80211pstrd *)&VAR_22->ssid.data;
 FUNC_8(VAR_25, VAR_23);
 VAR_20 = FUNC_2(VAR_21, VAR_6,
     VAR_24, VAR_7);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev, "Failed to set CnfOwnSSID\n");
  goto failed;
 }
 VAR_20 = FUNC_2(VAR_21, VAR_2,
     VAR_24,
     VAR_3);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev, "Failed to set CnfDesiredSSID\n");
  goto failed;
 }



 FUNC_3(VAR_21, VAR_8, 0);


 VAR_26 = VAR_22->beaconperiod.data;
 VAR_20 = FUNC_3(VAR_21, VAR_0, VAR_26);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev,
      "Failed to set beacon period=%d.\n", VAR_26);
  goto failed;
 }


 VAR_26 = VAR_22->dschannel.data;
 VAR_20 = FUNC_3(VAR_21, VAR_5, VAR_26);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev,
      "Failed to set channel=%d.\n", VAR_26);
  goto failed;
 }

 VAR_26 = FUNC_7(VAR_22->basicrate1.data);
 if (VAR_22->basicrate2.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate2.data);

 if (VAR_22->basicrate3.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate3.data);

 if (VAR_22->basicrate4.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate4.data);

 if (VAR_22->basicrate5.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate5.data);

 if (VAR_22->basicrate6.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate6.data);

 if (VAR_22->basicrate7.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate7.data);

 if (VAR_22->basicrate8.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->basicrate8.data);

 VAR_20 = FUNC_3(VAR_21, VAR_1, VAR_26);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev,
      "Failed to set basicrates=%d.\n", VAR_26);
  goto failed;
 }


 VAR_26 = FUNC_7(VAR_22->operationalrate1.data);
 if (VAR_22->operationalrate2.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate2.data);

 if (VAR_22->operationalrate3.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate3.data);

 if (VAR_22->operationalrate4.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate4.data);

 if (VAR_22->operationalrate5.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate5.data);

 if (VAR_22->operationalrate6.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate6.data);

 if (VAR_22->operationalrate7.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate7.data);

 if (VAR_22->operationalrate8.status == VAR_12)
  VAR_26 |= FUNC_7(VAR_22->operationalrate8.data);

 VAR_20 = FUNC_3(VAR_21, VAR_9, VAR_26);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev,
      "Failed to set supprates=%d.\n", VAR_26);
  goto failed;
 }

 VAR_20 = FUNC_3(VAR_21, VAR_10, VAR_26);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev, "Failed to set txrates=%d.\n",
      VAR_26);
  goto failed;
 }


 if (VAR_22->bsstype.data == VAR_11) {
  VAR_18->macmode = VAR_16;

  FUNC_3(VAR_21, VAR_4, 2304);
 }


 VAR_20 = FUNC_1(VAR_21, 0);
 if (VAR_20) {
  FUNC_6(VAR_18->netdev,
      "Enable macport failed, result=%d.\n", VAR_20);
  goto failed;
 }

 VAR_22->resultcode.data = VAR_15;

 goto done;
failed:
 FUNC_5(VAR_18->netdev,
     "Failed to set a config option, result=%d\n", VAR_20);
 VAR_22->resultcode.data = VAR_13;

done:
 return 0;
}
