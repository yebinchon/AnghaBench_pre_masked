
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtw_dm_info {scalar_t__* igi_history; scalar_t__ igi_bitmap; scalar_t__* fa_history; } ;
struct rtw_dev {struct rtw_dm_info dm_info; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* dig; } ;
struct TYPE_2__ {int mask; int addr; } ;


 int FUNC_0 (struct rtw_dev*) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ) ;

void FUNC_2(struct rtw_dev *VAR_0)
{
 struct rtw_chip_info *VAR_1 = VAR_0->chip;
 struct rtw_dm_info *VAR_2 = &VAR_0->dm_info;
 u32 VAR_3, VAR_4;

 VAR_2->fa_history[3] = 0;
 VAR_2->fa_history[2] = 0;
 VAR_2->fa_history[1] = 0;
 VAR_2->fa_history[0] = 0;
 VAR_2->igi_bitmap = 0;
 VAR_2->igi_history[3] = 0;
 VAR_2->igi_history[2] = 0;
 VAR_2->igi_history[1] = 0;

 VAR_3 = VAR_1->dig[0].addr;
 VAR_4 = VAR_1->dig[0].mask;
 VAR_2->igi_history[0] = FUNC_1(VAR_0, VAR_3, VAR_4);
 FUNC_0(VAR_0);
}
