
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dig_t {int cur_igvalue; int cur_cck_cca_thres; } ;
struct TYPE_2__ {int xaagccore1; int cca; } ;
struct rtl_phy {int current_io_type; int set_io_inprogress; TYPE_1__ initgain_backup; int current_channel; } ;
struct rtl_priv {struct dig_t dm_digtable; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_4(VAR_4);
 struct rtl_phy *VAR_6 = &VAR_5->phy;
 struct dig_t *VAR_7 = &VAR_5->dm_digtable;

 FUNC_0(VAR_5, VAR_0, VAR_3,
   "--->Cmd(%#x), set_io_inprogress(%d)\n",
    VAR_6->current_io_type, VAR_6->set_io_inprogress);
 switch (VAR_6->current_io_type) {
 case 128:
  FUNC_2(VAR_4, VAR_6->initgain_backup.xaagccore1);
  FUNC_1(VAR_4, VAR_6->initgain_backup.cca);
  FUNC_0(VAR_5, VAR_0, VAR_3 , "no set txpower\n");
  FUNC_3(VAR_4, VAR_6->current_channel);
  break;
 case 129:

  VAR_6->initgain_backup.xaagccore1 = VAR_7->cur_igvalue;
  FUNC_2(VAR_4, 0x17);
  VAR_6->initgain_backup.cca = VAR_7->cur_cck_cca_thres;
  FUNC_1(VAR_4, 0x40);
  break;
 default:
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "switch case %#x not processed\n",
    VAR_6->current_io_type);
  break;
 }
 VAR_6->set_io_inprogress = 0;
 FUNC_0(VAR_5, VAR_0, VAR_3,
   "(%#x)\n", VAR_6->current_io_type);
}
