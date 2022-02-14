
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtw_dm_info {int cck_fa_cnt; int cck_fa_avg; } ;
struct TYPE_3__ {scalar_t__ current_band_type; } ;
struct rtw_dev {TYPE_1__ hal; struct rtw_chip_info* chip; struct rtw_dm_info dm_info; } ;
struct rtw_chip_info {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* cck_pd_set ) (struct rtw_dev*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_3)
{
 struct rtw_dm_info *VAR_4 = &VAR_3->dm_info;
 struct rtw_chip_info *VAR_5 = VAR_3->chip;
 u32 VAR_6 = VAR_4->cck_fa_cnt;
 u8 VAR_7;

 if (VAR_3->hal.current_band_type != VAR_2)
  return;

 if (VAR_4->cck_fa_avg == VAR_0)
  VAR_4->cck_fa_avg = VAR_6;
 else
  VAR_4->cck_fa_avg = (VAR_4->cck_fa_avg * 3 + VAR_6) >> 2;

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_7 >= VAR_1)
  return;

 if (VAR_5->ops->cck_pd_set)
  VAR_5->ops->cck_pd_set(VAR_3, VAR_7);
}
