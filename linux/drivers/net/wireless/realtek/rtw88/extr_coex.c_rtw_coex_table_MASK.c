
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_dm {size_t cur_table; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_chip_info* chip; struct rtw_coex coex; } ;
struct rtw_chip_info {size_t table_sant_num; size_t table_nsant_num; TYPE_2__* table_nsant; TYPE_1__* table_sant; } ;
struct TYPE_4__ {int wl; int bt; } ;
struct TYPE_3__ {int wl; int bt; } ;


 int FUNC_0 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_0->coex;
 struct rtw_coex_dm *VAR_3 = &VAR_2->dm;
 struct rtw_chip_info *VAR_4 = VAR_0->chip;
 struct rtw_efuse *VAR_5 = &VAR_0->efuse;

 VAR_3->cur_table = VAR_1;

 if (VAR_5->share_ant) {
  if (VAR_1 < VAR_4->table_sant_num)
   FUNC_0(VAR_0,
        VAR_4->table_sant[VAR_1].bt,
        VAR_4->table_sant[VAR_1].wl);
 } else {
  VAR_1 = VAR_1 - 100;
  if (VAR_1 < VAR_4->table_nsant_num)
   FUNC_0(VAR_0,
        VAR_4->table_nsant[VAR_1].bt,
        VAR_4->table_nsant[VAR_1].wl);
 }
}
