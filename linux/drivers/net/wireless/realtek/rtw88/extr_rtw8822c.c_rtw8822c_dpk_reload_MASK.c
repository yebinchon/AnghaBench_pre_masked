
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtw_dpk_info {int is_reload; scalar_t__ dpk_ch; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int ,char*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,int ,int,int ) ;

__attribute__((used)) static bool FUNC_3(struct rtw_dev *VAR_3)
{
 struct rtw_dpk_info *VAR_4 = &VAR_3->dm_info.dpk_info;
 u8 VAR_5;

 VAR_4->is_reload = 0;

 VAR_5 = (u8)(FUNC_2(VAR_3, VAR_1, 0x18, VAR_0) & 0xff);

 if (VAR_5 == VAR_4->dpk_ch) {
  FUNC_1(VAR_3, VAR_2,
   "[DPK] DPK reload for CH%d!!\n", VAR_4->dpk_ch);
  FUNC_0(VAR_3);
  VAR_4->is_reload = 1;
 }

 return VAR_4->is_reload;
}
