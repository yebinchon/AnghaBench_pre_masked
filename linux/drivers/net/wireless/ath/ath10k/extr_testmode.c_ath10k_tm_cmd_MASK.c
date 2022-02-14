
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,struct nlattr**) ;
 int FUNC_1 (struct ath10k*,struct nlattr**) ;
 int FUNC_2 (struct ath10k*,struct nlattr**) ;
 int FUNC_3 (struct ath10k*,struct nlattr**) ;
 int VAR_4 ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,void*,int,int ,int *) ;

int FUNC_6(struct ieee80211_hw *VAR_5, struct ieee80211_vif *VAR_6,
    void *VAR_7, int VAR_8)
{
 struct ath10k *VAR_9 = VAR_5->priv;
 struct nlattr *VAR_10[VAR_1 + 1];
 int VAR_11;

 VAR_11 = FUNC_5(VAR_10, VAR_1, VAR_7, VAR_8,
       VAR_4, ((void*)0));
 if (VAR_11)
  return VAR_11;

 if (!VAR_10[VAR_0])
  return -VAR_2;

 switch (FUNC_4(VAR_10[VAR_0])) {
 case 131:
  return FUNC_0(VAR_9, VAR_10);
 case 130:
  return FUNC_1(VAR_9, VAR_10);
 case 129:
  return FUNC_2(VAR_9, VAR_10);
 case 128:
  return FUNC_3(VAR_9, VAR_10);
 default:
  return -VAR_3;
 }
}
