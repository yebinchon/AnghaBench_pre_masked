
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct rtlwifi_tx_info {int send_time; void* sn; } ;
struct rtl_tx_report {int last_sent_time; void* last_sent_sn; int sn; } ;
struct rtl_priv {struct rtl_tx_report tx_report; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,void*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static u16 FUNC_3(struct ieee80211_hw *VAR_3,
    struct rtlwifi_tx_info *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_3);
 struct rtl_tx_report *VAR_6 = &VAR_5->tx_report;
 u16 VAR_7;





 VAR_7 = (FUNC_1(&VAR_6->sn) & 0x003F) << 2;

 VAR_6->last_sent_sn = VAR_7;
 VAR_6->last_sent_time = VAR_2;
 VAR_4->sn = VAR_7;
 VAR_4->send_time = VAR_6->last_sent_time;
 FUNC_0(VAR_5, VAR_0, VAR_1,
   "Send TX-Report sn=0x%X\n", VAR_7);

 return VAR_7;
}
