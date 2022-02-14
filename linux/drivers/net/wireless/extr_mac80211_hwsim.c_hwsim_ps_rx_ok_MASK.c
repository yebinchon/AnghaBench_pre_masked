
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct mac80211_hwsim_data {int ps; int ps_poll_pending; } ;






 int FUNC_0 (struct mac80211_hwsim_data*,int ) ;

__attribute__((used)) static bool FUNC_1(struct mac80211_hwsim_data *VAR_0,
      struct sk_buff *VAR_1)
{
 switch (VAR_0->ps) {
 case 130:
  return 1;
 case 129:
  return 0;
 case 131:


  return 1;
 case 128:


  if (VAR_0->ps_poll_pending &&
      FUNC_0(VAR_0, VAR_1->data + 4)) {
   VAR_0->ps_poll_pending = 0;
   return 1;
  }
  return 0;
 }

 return 1;
}
