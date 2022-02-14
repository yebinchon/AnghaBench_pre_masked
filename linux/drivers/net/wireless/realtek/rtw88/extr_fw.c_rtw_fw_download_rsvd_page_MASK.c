
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct rtw_dev*,struct ieee80211_vif*,int *) ;
 int FUNC_2 (struct rtw_dev*,struct ieee80211_vif*) ;
 int FUNC_3 (struct rtw_dev*,int *,int ) ;
 int FUNC_4 (struct rtw_dev*,char*) ;

int FUNC_5(struct rtw_dev *VAR_1, struct ieee80211_vif *VAR_2)
{
 u8 *VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (!VAR_3) {
  FUNC_4(VAR_1, "failed to build rsvd page pkt\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_1, "failed to download drv rsvd page\n");
  goto free;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_4(VAR_1, "failed to download beacon\n");
  goto free;
 }

free:
 FUNC_0(VAR_3);

 return VAR_5;
}
