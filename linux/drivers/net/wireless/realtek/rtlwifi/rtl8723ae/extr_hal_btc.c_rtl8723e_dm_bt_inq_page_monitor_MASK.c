
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int cstate; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {scalar_t__ bt_inq_page_start_time; scalar_t__ c2h_bt_inquiry_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;

 VAR_8 = VAR_5;
 if (VAR_4) {

  if (VAR_4 == 0) {
   VAR_7->btcoexist.cstate |=
   VAR_0;
   VAR_4 = VAR_8;
   FUNC_0(VAR_7, VAR_1, VAR_2,
     "[BTCoex], BT Inquiry/page is started at time : 0x%x\n",
     VAR_4);
  }
 }
 FUNC_0(VAR_7, VAR_1, VAR_2,
   "[BTCoex], BT Inquiry/page started time : 0x%x, cur_time : 0x%x\n",
   VAR_4, VAR_8);

 if (VAR_4) {
  if ((((long)VAR_8 -
   (long)VAR_4) / VAR_3)
   >= 10) {
   FUNC_0(VAR_7, VAR_1, VAR_2,
    "[BTCoex], BT Inquiry/page >= 10sec!!!\n");
   VAR_4 = 0;
   VAR_7->btcoexist.cstate &=
    ~VAR_0;
  }
 }
}
