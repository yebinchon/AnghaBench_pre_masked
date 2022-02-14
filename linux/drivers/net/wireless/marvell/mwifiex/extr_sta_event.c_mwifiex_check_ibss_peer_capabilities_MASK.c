
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct mwifiex_sta_node {int is_11n_enabled; int is_11ac_enabled; void* max_amsdu; } ;
struct mwifiex_private {int adapter; } ;
struct TYPE_2__ {int len; int type; } ;
struct mwifiex_ie_types_mgmt_frame {TYPE_1__ header; } ;
struct ieee_types_header {int len; int element_id; } ;
struct ieee80211_vht_cap {int vht_cap_info; } ;
struct ieee80211_ht_cap {int cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (int ,int ,char*,int *,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct mwifiex_private *VAR_9,
             struct mwifiex_sta_node *VAR_10,
             struct sk_buff *VAR_11)
{
 int VAR_12, VAR_13;
 u8 *VAR_14;
 struct ieee_types_header *VAR_15;
 struct mwifiex_ie_types_mgmt_frame *VAR_16;
 const struct ieee80211_ht_cap *VAR_17;
 const struct ieee80211_vht_cap *VAR_18;

 FUNC_4(VAR_11, VAR_4);
 VAR_12 = VAR_11->len;
 VAR_14 = VAR_11->data;

 FUNC_3(VAR_9->adapter, VAR_0, "ibss peer capabilities:",
    VAR_11->data, VAR_11->len);

 FUNC_5(VAR_11, VAR_4);

 VAR_16 = (void *)VAR_14;
 if (VAR_12 >= sizeof(*VAR_16) &&
     FUNC_0(VAR_16->header.type) ==
     VAR_8) {




  VAR_12 = FUNC_0(VAR_16->header.len);
  VAR_14 += (sizeof(*VAR_16) + 12);
 } else {
  FUNC_2(VAR_9->adapter, VAR_3,
       "management frame tlv not found!\n");
  return 0;
 }

 while (VAR_12 >= sizeof(*VAR_15)) {
  VAR_15 = (struct ieee_types_header *)VAR_14;
  VAR_13 = VAR_15->len;

  if (VAR_12 < VAR_13 + sizeof(*VAR_15))
   break;

  switch (VAR_15->element_id) {
  case 129:
   VAR_10->is_11n_enabled = 1;
   VAR_17 = (void *)(VAR_15 + 2);
   VAR_10->max_amsdu = FUNC_0(VAR_17->cap_info) &
    VAR_1 ?
    VAR_7 :
    VAR_6;
   FUNC_2(VAR_9->adapter, VAR_2,
        "11n enabled!, max_amsdu : %d\n",
        VAR_10->max_amsdu);
   break;

  case 128:
   VAR_10->is_11ac_enabled = 1;
   VAR_18 = (void *)(VAR_15 + 2);

   switch (FUNC_1(VAR_18->vht_cap_info) & 0x3) {
   case 132:
    VAR_10->max_amsdu =
     VAR_5;
    break;
   case 130:
    VAR_10->max_amsdu =
     VAR_7;
    break;
   case 131:
    VAR_10->max_amsdu =
     VAR_6;
   default:
    break;
   }

   FUNC_2(VAR_9->adapter, VAR_2,
        "11ac enabled!, max_amsdu : %d\n",
        VAR_10->max_amsdu);
   break;
  default:
   break;
  }

  VAR_14 += (VAR_13 + sizeof(*VAR_15));
  VAR_12 -= (VAR_13 + sizeof(*VAR_15));
 }

 return 0;
}
