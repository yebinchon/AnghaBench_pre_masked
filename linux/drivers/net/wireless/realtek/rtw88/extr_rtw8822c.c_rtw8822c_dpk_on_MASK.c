
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_dpk_info {int dpk_path_ok; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int) ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_5, u8 VAR_6)
{
 struct rtw_dpk_info *VAR_7 = &VAR_5->dm_info.dpk_info;

 FUNC_1(VAR_5, VAR_6, VAR_4);

 FUNC_2(VAR_5, VAR_3, VAR_0, 0x8 | (VAR_6 << 1));
 FUNC_2(VAR_5, VAR_2, VAR_1, 0x0);

 if (FUNC_3(VAR_6, VAR_7->dpk_path_ok))
  FUNC_0(VAR_5, VAR_6);
}
