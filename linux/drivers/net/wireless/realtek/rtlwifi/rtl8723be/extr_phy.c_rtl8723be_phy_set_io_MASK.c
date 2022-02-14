
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
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_5);
 struct dig_t *VAR_7 = &VAR_6->dm_digtable;
 struct rtl_phy *VAR_8 = &VAR_6->phy;

 FUNC_0(VAR_6, VAR_0, VAR_3,
   "--->Cmd(%#x), set_io_inprogress(%d)\n",
    VAR_8->current_io_type, VAR_8->set_io_inprogress);
 switch (VAR_8->current_io_type) {
 case 128:
  VAR_7->cur_igvalue = VAR_8->initgain_backup.xaagccore1;

  FUNC_1(VAR_5, VAR_8->current_channel);
  FUNC_3(VAR_5, VAR_4, 0xff0000, 0x83);
  break;
 case 129:
  VAR_8->initgain_backup.xaagccore1 = VAR_7->cur_igvalue;
  VAR_7->cur_igvalue = 0x17;
  FUNC_3(VAR_5, VAR_4, 0xff0000, 0x40);
  break;
 default:
  FUNC_0(VAR_6, VAR_1, VAR_2,
    "switch case %#x not processed\n",
    VAR_8->current_io_type);
  break;
 }
 VAR_8->set_io_inprogress = 0;
 FUNC_0(VAR_6, VAR_0, VAR_3,
   "(%#x)\n", VAR_8->current_io_type);
}
