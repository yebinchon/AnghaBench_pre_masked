
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_dm {int cur_ps_tdma_on; int cur_ps_tdma; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_chip_info* chip; struct rtw_coex coex; } ;
struct rtw_chip_info {int tdma_sant_num; int tdma_nsant_num; TYPE_2__* tdma_nsant; TYPE_1__* tdma_sant; } ;
struct TYPE_4__ {int * para; } ;
struct TYPE_3__ {int * para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int ,char*,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_5, bool VAR_6, u32 VAR_7)
{
 struct rtw_coex *VAR_8 = &VAR_5->coex;
 struct rtw_coex_dm *VAR_9 = &VAR_8->dm;
 struct rtw_chip_info *VAR_10 = VAR_5->chip;
 struct rtw_efuse *VAR_11 = &VAR_5->efuse;
 u8 VAR_12, VAR_13;
 bool VAR_14;

 if (VAR_7 & VAR_4)
  FUNC_1(VAR_5, 3);
 else
  FUNC_1(VAR_5, 0);

 VAR_13 = (u8)(VAR_7 & 0xff);

 VAR_14 = (VAR_13 == 0 || VAR_13 == 100) ? 0 : 1;

 if (!VAR_6) {
  if (VAR_14 == VAR_9->cur_ps_tdma_on &&
      VAR_13 == VAR_9->cur_ps_tdma) {
   return;
  }
 }

 if (VAR_14) {

  FUNC_4(VAR_5, VAR_2, VAR_0);
  FUNC_2(VAR_5, VAR_1, 1);
 } else {
  FUNC_2(VAR_5, VAR_1, 0);
 }

 if (VAR_11->share_ant) {
  if (VAR_13 < VAR_10->tdma_sant_num)
   FUNC_0(VAR_5,
       VAR_10->tdma_sant[VAR_13].para[0],
       VAR_10->tdma_sant[VAR_13].para[1],
       VAR_10->tdma_sant[VAR_13].para[2],
       VAR_10->tdma_sant[VAR_13].para[3],
       VAR_10->tdma_sant[VAR_13].para[4]);
 } else {
  VAR_12 = VAR_13 - 100;
  if (VAR_12 < VAR_10->tdma_nsant_num)
   FUNC_0(VAR_5,
       VAR_10->tdma_nsant[VAR_12].para[0],
       VAR_10->tdma_nsant[VAR_12].para[1],
       VAR_10->tdma_nsant[VAR_12].para[2],
       VAR_10->tdma_nsant[VAR_12].para[3],
       VAR_10->tdma_nsant[VAR_12].para[4]);
 }


 VAR_9->cur_ps_tdma_on = VAR_14;
 VAR_9->cur_ps_tdma = VAR_13;

 FUNC_3(VAR_5, VAR_3, "coex: coex tdma type (%d)\n", VAR_13);
}
