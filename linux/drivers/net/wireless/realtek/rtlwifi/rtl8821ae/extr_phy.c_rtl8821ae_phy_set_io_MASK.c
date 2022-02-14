
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opmode; } ;
struct TYPE_4__ {int xaagccore1; int cca; } ;
struct rtl_phy {int current_io_type; int set_io_inprogress; TYPE_2__ initgain_backup; } ;
struct dig_t {int cur_igvalue; int cur_cck_cca_thres; } ;
struct rtl_priv {TYPE_1__ mac80211; struct rtl_phy phy; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_6(VAR_3);
 struct dig_t *VAR_5 = &VAR_4->dm_digtable;
 struct rtl_phy *VAR_6 = &VAR_4->phy;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "--->Cmd(%#x), set_io_inprogress(%d)\n",
    VAR_6->current_io_type, VAR_6->set_io_inprogress);
 switch (VAR_6->current_io_type) {
 case 128:
  if (VAR_4->mac80211.opmode == VAR_2)
   FUNC_1(VAR_3);
  FUNC_5(VAR_3, VAR_6->initgain_backup.xaagccore1);
  FUNC_4(VAR_3,
       VAR_6->initgain_backup.cca);
  break;
 case 130:
  if (VAR_4->mac80211.opmode == VAR_2)
   FUNC_2(VAR_3);
  VAR_6->initgain_backup.xaagccore1 = VAR_5->cur_igvalue;
  FUNC_5(VAR_3, 0x17);
  VAR_6->initgain_backup.cca = VAR_5->cur_cck_cca_thres;
  FUNC_4(VAR_3, 0x40);
  break;
 case 129:
  break;
 default:
  FUNC_3("switch case %#x not processed\n",
         VAR_6->current_io_type);
  break;
 }
 VAR_6->set_io_inprogress = 0;
 FUNC_0(VAR_4, VAR_0, VAR_1,
   "(%#x)\n", VAR_6->current_io_type);
}
