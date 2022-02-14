
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data; scalar_t__ cb; } ;
struct TYPE_2__ {int c2hcmd_lock; } ;
struct rtl_priv {TYPE_1__ locks; int c2hcmd_queue; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct ieee80211_hw *VAR_2, int VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_5(VAR_2);
 struct sk_buff *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 200; VAR_7++) {

  FUNC_6(&VAR_4->locks.c2hcmd_lock, VAR_6);

  VAR_5 = FUNC_2(&VAR_4->c2hcmd_queue);

  FUNC_7(&VAR_4->locks.c2hcmd_lock, VAR_6);


  if (!VAR_5)
   break;

  FUNC_1(VAR_4, VAR_0, VAR_1, "C2H rx_desc_shift=%d\n",
    *((u8 *)VAR_5->cb));
  FUNC_0(VAR_4, VAR_0, VAR_1,
         "C2H data: ", VAR_5->data, VAR_5->len);

  if (VAR_3)
   FUNC_4(VAR_2, VAR_5);


  FUNC_3(VAR_5);
 }
}
