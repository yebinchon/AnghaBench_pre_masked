
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {scalar_t__ plt_mode; } ;
struct nlattr {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,void*,int,int ,int *) ;
 int FUNC_2 (struct wl1271*,struct nlattr**) ;
 int FUNC_3 (struct wl1271*,struct nlattr**) ;
 int FUNC_4 (struct wl1271*,struct nlattr**) ;
 int FUNC_5 (struct wl1271*,struct nlattr**) ;
 int VAR_5 ;
 int FUNC_6 (struct wl1271*,struct nlattr**) ;

int FUNC_7(struct ieee80211_hw *VAR_6, struct ieee80211_vif *VAR_7,
    void *VAR_8, int VAR_9)
{
 struct wl1271 *VAR_10 = VAR_6->priv;
 struct nlattr *VAR_11[VAR_4 + 1];
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11, VAR_4, VAR_8, VAR_9,
       VAR_5, ((void*)0));
 if (VAR_13)
  return VAR_13;

 if (!VAR_11[VAR_3])
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_11[VAR_3]);


 if (VAR_10->plt_mode == VAR_2 &&
     VAR_12 != 129)
  return -VAR_1;

 switch (VAR_12) {
 case 128:
  return FUNC_5(VAR_10, VAR_11);
 case 130:
  return FUNC_3(VAR_10, VAR_11);
 case 132:
  return FUNC_2(VAR_10, VAR_11);
 case 129:
  return FUNC_4(VAR_10, VAR_11);
 case 131:
  return FUNC_6(VAR_10, VAR_11);
 default:
  return -VAR_1;
 }
}
