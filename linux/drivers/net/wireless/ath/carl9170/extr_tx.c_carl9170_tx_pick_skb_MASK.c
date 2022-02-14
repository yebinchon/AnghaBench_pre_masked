
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {scalar_t__ rate_driver_data; } ;
struct carl9170_tx_info {int timeout; } ;
struct ar9170 {int dummy; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff_head*) ;
 scalar_t__ FUNC_3 (struct ar9170*,struct sk_buff*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ar9170 *VAR_1,
         struct sk_buff_head *VAR_2)
{
 struct sk_buff *VAR_3;
 struct ieee80211_tx_info *VAR_4;
 struct carl9170_tx_info *VAR_5;

 FUNC_0(sizeof(*VAR_5) > sizeof(VAR_4->rate_driver_data));

 FUNC_5(&VAR_2->lock);
 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_7(!VAR_3))
  goto err_unlock;

 if (FUNC_3(VAR_1, VAR_3))
  goto err_unlock;

 FUNC_2(VAR_3, VAR_2);
 FUNC_6(&VAR_2->lock);

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = (void *) VAR_4->rate_driver_data;

 VAR_5->timeout = VAR_0;
 return VAR_3;

err_unlock:
 FUNC_6(&VAR_2->lock);
 return ((void*)0);
}
