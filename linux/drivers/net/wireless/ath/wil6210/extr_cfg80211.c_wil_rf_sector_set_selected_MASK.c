
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; int status; } ;
struct wil6210_priv {scalar_t__ max_assoc_sta; TYPE_1__* sta; int fw_capabilities; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ mid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,void const*,int,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 struct wil6210_vif* FUNC_7 (struct wil6210_priv*,struct wireless_dev*) ;
 struct wil6210_priv* FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (struct wil6210_priv*,char*,...) ;
 int FUNC_10 (struct wil6210_priv*,scalar_t__,scalar_t__*) ;
 int VAR_13 ;
 int FUNC_11 (struct wil6210_priv*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_12(struct wiphy *VAR_15,
          struct wireless_dev *VAR_16,
          const void *VAR_17, int VAR_18)
{
 struct wil6210_priv *VAR_19 = FUNC_8(VAR_16);
 struct wil6210_vif *VAR_20 = FUNC_7(VAR_19, VAR_16);
 int VAR_21;
 struct nlattr *VAR_22[VAR_5 + 1];
 u16 VAR_23;
 u8 VAR_24, VAR_25[VAR_3], VAR_26;
 int VAR_27 = 0;

 if (!FUNC_6(VAR_11, VAR_19->fw_capabilities))
  return -VAR_2;

 VAR_21 = FUNC_5(VAR_22, VAR_5, VAR_17,
      VAR_18, VAR_13, ((void*)0));
 if (VAR_21) {
  FUNC_9(VAR_19, "Invalid rf sector ATTR\n");
  return VAR_21;
 }

 if (!VAR_22[VAR_4] ||
     !VAR_22[VAR_6]) {
  FUNC_9(VAR_19, "Invalid rf sector spec\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_3(
  VAR_22[VAR_4]);
 if (VAR_23 >= VAR_10 &&
     VAR_23 != VAR_12) {
  FUNC_9(VAR_19, "Invalid sector index %d\n", VAR_23);
  return -VAR_0;
 }

 VAR_24 = FUNC_4(VAR_22[VAR_6]);
 if (VAR_24 >= VAR_7) {
  FUNC_9(VAR_19, "Invalid sector type %d\n", VAR_24);
  return -VAR_0;
 }

 if (VAR_22[VAR_8]) {
  FUNC_0(VAR_25, FUNC_2(VAR_22[VAR_8]));
  if (!FUNC_1(VAR_25)) {
   VAR_27 = FUNC_10(VAR_19, VAR_20->mid, VAR_25);
   if (VAR_27 < 0) {
    FUNC_9(VAR_19, "invalid MAC address %pM\n",
     VAR_25);
    return -VAR_1;
   }
  } else {
   if (VAR_23 != VAR_12) {
    FUNC_9(VAR_19, "broadcast MAC valid only with unlocking\n");
    return -VAR_0;
   }
   VAR_27 = -1;
  }
 } else {
  if (FUNC_6(VAR_14, VAR_20->status)) {
   FUNC_9(VAR_19, "must specify MAC address when connected\n");
   return -VAR_0;
  }

 }

 if (VAR_27 >= 0) {
  VAR_21 = FUNC_11(VAR_19, VAR_20->mid, VAR_23,
          VAR_24, VAR_27);
 } else {

  VAR_21 = FUNC_11(
   VAR_19, VAR_20->mid, VAR_12,
   VAR_24, VAR_9);
  if (VAR_21 == -VAR_0) {
   for (VAR_26 = 0; VAR_26 < VAR_19->max_assoc_sta; VAR_26++) {
    if (VAR_19->sta[VAR_26].mid != VAR_20->mid)
     continue;
    VAR_21 = FUNC_11(
     VAR_19, VAR_20->mid,
     VAR_12,
     VAR_24, VAR_26);




    if (VAR_21) {
     FUNC_9(VAR_19, "unlock cid %d failed with status %d\n",
      VAR_26, VAR_21);
     break;
    }
   }
  }
 }

 return VAR_21;
}
