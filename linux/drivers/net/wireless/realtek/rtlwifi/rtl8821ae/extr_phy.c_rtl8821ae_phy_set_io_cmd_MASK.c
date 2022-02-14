
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



 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

bool FUNC_4(struct ieee80211_hw *VAR_2, enum io_type VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_2);
 struct rtl_phy *VAR_5 = &VAR_4->phy;
 bool VAR_6 = 0;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "-->IO Cmd(%#x), set_io_inprogress(%d)\n",
    VAR_3, VAR_5->set_io_inprogress);
 do {
  switch (VAR_3) {
  case 128:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[IO CMD] Resume DM after scan.\n");
   VAR_6 = 1;
   break;
  case 130:
  case 129:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[IO CMD] Pause DM before scan.\n");
   VAR_6 = 1;
   break;
  default:
   FUNC_1("switch case %#x not processed\n",
          VAR_3);
   break;
  }
 } while (0);
 if (VAR_6 && !VAR_5->set_io_inprogress) {
  VAR_5->set_io_inprogress = 1;
  VAR_5->current_io_type = VAR_3;
 } else {
  return 0;
 }
 FUNC_2(VAR_2);
 FUNC_0(VAR_4, VAR_0, VAR_1, "IO Type(%#x)\n", VAR_3);
 return 1;
}
