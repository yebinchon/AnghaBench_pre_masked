
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dev {int dummy; } ;
struct rtw8822c_dpk_data {int agc_cnt; scalar_t__ gain_only; int limited_pga; int path; scalar_t__ loss_only; scalar_t__ pga; scalar_t__ txbb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rtw_dev*,int ,int ) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_7,
        struct rtw8822c_dpk_data *VAR_8)
{
 u8 VAR_9;

 VAR_8->txbb = (u8)FUNC_1(VAR_7, VAR_8->path, VAR_3,
         VAR_0);
 VAR_8->pga = (u8)FUNC_1(VAR_7, VAR_8->path, VAR_2,
        VAR_1);

 if (VAR_8->loss_only) {
  VAR_9 = VAR_6;
  goto check_end;
 }

 VAR_9 = FUNC_0(VAR_7, VAR_8->path,
       VAR_8->limited_pga);
 if (VAR_9 == VAR_5 && VAR_8->gain_only)
  VAR_9 = VAR_4;
 else if (VAR_9 == VAR_5)
  VAR_9 = VAR_6;

check_end:
 VAR_8->agc_cnt++;
 if (VAR_8->agc_cnt >= 6)
  VAR_9 = VAR_4;

 return VAR_9;
}
