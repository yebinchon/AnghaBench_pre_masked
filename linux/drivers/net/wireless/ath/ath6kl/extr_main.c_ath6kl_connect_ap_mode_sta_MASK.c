
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct station_info {int* assoc_req_ies; size_t assoc_req_ies_len; } ;
struct TYPE_5__ {int* variable; } ;
struct TYPE_4__ {int* variable; } ;
struct TYPE_6__ {TYPE_2__ reassoc_req; TYPE_1__ assoc_req; } ;
struct ieee80211_mgmt {TYPE_3__ u; int frame_control; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ath6kl_vif {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath6kl_vif*,int*,int ,int*,int,int,int,int,int) ;
 int FUNC_1 (int ,char*,int*,int ) ;
 int FUNC_2 (int ,int*,struct station_info*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct station_info*) ;
 struct station_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct ath6kl_vif *VAR_4, u16 VAR_5, u8 *VAR_6,
    u8 VAR_7, u8 VAR_8, u8 VAR_9,
    u8 VAR_10, u8 *VAR_11, u8 VAR_12)
{
 u8 *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
 size_t VAR_16 = 0;
 struct station_info *VAR_17;

 FUNC_1(VAR_0, "new station %pM aid=%d\n", VAR_6, VAR_5);

 if (VAR_10 > sizeof(struct ieee80211_hdr_3addr)) {
  struct ieee80211_mgmt *VAR_18 =
   (struct ieee80211_mgmt *) VAR_11;
  if (FUNC_3(VAR_18->frame_control) &&
      VAR_10 >= sizeof(struct ieee80211_hdr_3addr) +
      sizeof(VAR_18->u.assoc_req)) {
   VAR_13 = VAR_18->u.assoc_req.variable;
   VAR_16 = VAR_11 + VAR_10 - VAR_13;
  } else if (FUNC_4(VAR_18->frame_control) &&
      VAR_10 >= sizeof(struct ieee80211_hdr_3addr)
      + sizeof(VAR_18->u.reassoc_req)) {
   VAR_13 = VAR_18->u.reassoc_req.variable;
   VAR_16 = VAR_11 + VAR_10 - VAR_13;
  }
 }

 VAR_15 = VAR_13;
 while (VAR_15 && VAR_15 + 1 < VAR_13 + VAR_16) {
  if (VAR_15 + 2 + VAR_15[1] > VAR_13 + VAR_16)
   break;
  if (VAR_15[0] == VAR_2)
   VAR_14 = VAR_15;
  else if (VAR_15[0] == VAR_3 &&
    VAR_15[1] >= 4 &&
    VAR_15[2] == 0x00 && VAR_15[3] == 0x50 && VAR_15[4] == 0xf2) {
   if (VAR_15[5] == 0x01)
    VAR_14 = VAR_15;
   else if (VAR_15[5] == 0x04) {
    VAR_14 = VAR_15;
    break;
   }
  } else if (VAR_15[0] == 0x44 && VAR_14 == ((void*)0)) {
   VAR_14 = VAR_15;
   break;
  }
  VAR_15 += 2 + VAR_15[1];
 }

 FUNC_0(VAR_4, VAR_6, VAR_5, VAR_14,
      VAR_14 ? 2 + VAR_14[1] : 0,
      VAR_7, VAR_8, VAR_9, VAR_12);


 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return;



 VAR_17->assoc_req_ies = VAR_13;
 VAR_17->assoc_req_ies_len = VAR_16;

 FUNC_2(VAR_4->ndev, VAR_6, VAR_17, VAR_1);

 FUNC_7(VAR_4->ndev);

 FUNC_5(VAR_17);
}
