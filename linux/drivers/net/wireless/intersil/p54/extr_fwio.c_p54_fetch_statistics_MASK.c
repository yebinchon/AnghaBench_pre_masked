
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_tx_info {int extra_len; } ;
struct p54_statistics {int dummy; } ;
struct p54_common {int dummy; } ;
struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;

int FUNC_3(struct p54_common *VAR_4)
{
 struct ieee80211_tx_info *VAR_5;
 struct p54_tx_info *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_3,
       sizeof(struct p54_statistics),
       VAR_2, VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_7);
 VAR_6 = (void *) VAR_5->rate_driver_data;
 VAR_6->extra_len = sizeof(struct p54_statistics);

 FUNC_2(VAR_4, VAR_7);
 return 0;
}
