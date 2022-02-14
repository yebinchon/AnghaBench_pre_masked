
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtw_dm_info {scalar_t__* igi_history; scalar_t__ min_rssi; scalar_t__ cck_fa_avg; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static u8 FUNC_0(struct rtw_dev *VAR_9)
{
 struct rtw_dm_info *VAR_10 = &VAR_9->dm_info;
 u8 VAR_11 = VAR_10->igi_history[0];
 u8 VAR_12 = VAR_10->min_rssi;
 u32 VAR_13 = VAR_10->cck_fa_avg;

 if (VAR_11 > VAR_4 && VAR_12 > VAR_8)
  return 4;
 if (VAR_11 > VAR_3 && VAR_12 > VAR_7)
  return 3;
 if (VAR_11 > VAR_2 || VAR_12 > VAR_6)
  return 2;
 if (VAR_13 > VAR_1)
  return 1;
 if (VAR_13 < VAR_0)
  return 0;

 return VAR_5;
}
