
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_phy {int set_io_inprogress; int current_io_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum io_type { ____Placeholder_io_type } io_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

bool FUNC_3(struct ieee80211_hw *VAR_4, enum io_type VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_4);
 struct rtl_phy *VAR_7 = &(VAR_6->phy);
 bool VAR_8 = 0;

 FUNC_0(VAR_6, VAR_0, VAR_3,
   "-->IO Cmd(%#x), set_io_inprogress(%d)\n",
    VAR_5, VAR_7->set_io_inprogress);
 do {
  switch (VAR_5) {
  case 128:
   FUNC_0(VAR_6, VAR_0, VAR_3,
     "[IO CMD] Resume DM after scan.\n");
   VAR_8 = 1;
   break;
  case 129:
   FUNC_0(VAR_6, VAR_0, VAR_3,
     "[IO CMD] Pause DM before scan.\n");
   VAR_8 = 1;
   break;
  default:
   FUNC_0(VAR_6, VAR_1, VAR_2,
     "switch case %#x not processed\n", VAR_5);
   break;
  }
 } while (0);
 if (VAR_8 && !VAR_7->set_io_inprogress) {
  VAR_7->set_io_inprogress = 1;
  VAR_7->current_io_type = VAR_5;
 } else {
  return 0;
 }
 FUNC_1(VAR_4);
 FUNC_0(VAR_6, VAR_0, VAR_3, "IO Type(%#x)\n", VAR_5);
 return 1;
}
