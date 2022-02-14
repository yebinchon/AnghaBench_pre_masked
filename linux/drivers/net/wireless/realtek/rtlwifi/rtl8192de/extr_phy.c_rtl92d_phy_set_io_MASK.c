
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xaagccore1; } ;
struct rtl_phy {int current_io_type; int set_io_inprogress; TYPE_1__ initgain_backup; int current_channel; } ;
struct dig_t {int cur_igvalue; } ;
struct rtl_priv {struct rtl_phy phy; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_4(VAR_2);
 struct dig_t *VAR_4 = &VAR_3->dm_digtable;
 struct rtl_phy *VAR_5 = &(VAR_3->phy);

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "--->Cmd(%#x), set_io_inprogress(%d)\n",
   VAR_5->current_io_type, VAR_5->set_io_inprogress);
 switch (VAR_5->current_io_type) {
 case 128:
  VAR_4->cur_igvalue = VAR_5->initgain_backup.xaagccore1;
  FUNC_2(VAR_2);
  FUNC_3(VAR_2, VAR_5->current_channel);
  break;
 case 129:
  VAR_5->initgain_backup.xaagccore1 = VAR_4->cur_igvalue;
  VAR_4->cur_igvalue = 0x37;
  FUNC_2(VAR_2);
  break;
 default:
  FUNC_1("switch case %#x not processed\n",
         VAR_5->current_io_type);
  break;
 }
 VAR_5->set_io_inprogress = 0;
 FUNC_0(VAR_3, VAR_0, VAR_1, "<---(%#x)\n",
   VAR_5->current_io_type);
}
