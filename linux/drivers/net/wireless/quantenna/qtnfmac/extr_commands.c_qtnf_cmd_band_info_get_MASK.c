
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qlink_resp_band_info_get {scalar_t__ band; } ;
struct qlink_cmd_band_info_get {scalar_t__ band; } ;
struct ieee80211_supported_band {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct ieee80211_supported_band*,struct qlink_resp_band_info_get*,size_t) ;
 int FUNC_7 (int ,struct sk_buff*,struct sk_buff**,int,size_t*) ;

int FUNC_8(struct qtnf_wmac *VAR_3,
      struct ieee80211_supported_band *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6 = ((void*)0);
 struct qlink_cmd_band_info_get *VAR_7;
 struct qlink_resp_band_info_get *VAR_8;
 size_t VAR_9 = 0;
 int VAR_10 = 0;
 u8 VAR_11 = FUNC_2(VAR_4->band);

 VAR_5 = FUNC_5(VAR_3->macid, 0,
         VAR_2,
         sizeof(*VAR_7));
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = (struct qlink_cmd_band_info_get *)VAR_5->data;
 VAR_7->band = VAR_11;

 FUNC_3(VAR_3->bus);
 VAR_10 = FUNC_7(VAR_3->bus, VAR_5, &VAR_6,
           sizeof(*VAR_8), &VAR_9);
 if (VAR_10)
  goto out;

 VAR_8 = (struct qlink_resp_band_info_get *)VAR_6->data;
 if (VAR_8->band != VAR_11) {
  FUNC_1("MAC%u: reply band %u != cmd band %u\n", VAR_3->macid,
         VAR_8->band, VAR_11);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_6(VAR_4, VAR_8, VAR_9);

out:
 FUNC_4(VAR_3->bus);
 FUNC_0(VAR_6);

 return VAR_10;
}
