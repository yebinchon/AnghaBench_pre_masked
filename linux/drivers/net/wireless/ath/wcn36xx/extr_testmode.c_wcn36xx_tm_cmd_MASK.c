
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,void*,int,int ,int *) ;
 int FUNC_2 (int ,char*,void*,int) ;
 int FUNC_3 (struct wcn36xx*,struct ieee80211_vif*,struct nlattr**) ;
 int VAR_6 ;

int FUNC_4(struct ieee80211_hw *VAR_7, struct ieee80211_vif *VAR_8,
     void *VAR_9, int VAR_10)
{
 struct wcn36xx *VAR_11 = VAR_7->priv;
 struct nlattr *VAR_12[VAR_4 + 1];
 int VAR_13 = 0;
 unsigned short VAR_14;

 FUNC_2(VAR_2, "Data:", VAR_9, VAR_10);
 VAR_13 = FUNC_1(VAR_12, VAR_4, VAR_9, VAR_10,
       VAR_6, ((void*)0));
 if (VAR_13)
  return VAR_13;

 if (!VAR_12[VAR_3])
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_12[VAR_3]);

 if (VAR_14 != VAR_5)
  return -VAR_1;

 return FUNC_3(VAR_11, VAR_8, VAR_12);
}
