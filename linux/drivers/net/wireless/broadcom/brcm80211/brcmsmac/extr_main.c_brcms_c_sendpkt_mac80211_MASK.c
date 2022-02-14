
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct sk_buff {int dummy; } ;
struct scb {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct brcms_c_info {struct scb pri_scb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_c_info*,struct ieee80211_hw*,struct sk_buff*,struct scb*,int ,int,int ,int ) ;
 int FUNC_2 (struct brcms_c_info*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

bool FUNC_5(struct brcms_c_info *VAR_0, struct sk_buff *VAR_1,
         struct ieee80211_hw *VAR_2)
{
 uint VAR_3;
 struct scb *VAR_4 = &VAR_0->pri_scb;

 VAR_3 = FUNC_0(FUNC_4(VAR_1));
 FUNC_1(VAR_0, VAR_2, VAR_1, VAR_4, 0, 1, VAR_3, 0);
 if (!FUNC_2(VAR_0, VAR_1))
  return 1;


 FUNC_3(VAR_1);
 return 0;
}
