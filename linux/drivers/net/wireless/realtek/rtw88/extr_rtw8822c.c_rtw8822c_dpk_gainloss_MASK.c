
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtw_dpk_info {int * thermal_dpk_delta; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct rtw_dev*,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct rtw_dev*,scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (struct rtw_dev*,scalar_t__) ;
 int FUNC_7 (struct rtw_dev*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct rtw_dev*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct rtw_dev*,scalar_t__,int ,int ) ;
 int FUNC_10 (struct rtw_dev*,scalar_t__,int ,int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_11(struct rtw_dev *VAR_5, u8 VAR_6)
{
 struct rtw_dpk_info *VAR_7 = &VAR_5->dm_info.dpk_info;
 u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_6(VAR_5, VAR_6);
 VAR_11 = (u8)FUNC_9(VAR_5, VAR_6, VAR_2, VAR_1);

 FUNC_7(VAR_5, VAR_6);
 FUNC_4(VAR_5, VAR_6, VAR_4);
 FUNC_2(VAR_5, VAR_6);

 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_7(VAR_5, VAR_6);
  FUNC_4(VAR_5, VAR_6, VAR_4);
  FUNC_1(VAR_5, VAR_6);
 }

 VAR_13 = FUNC_8(VAR_5, VAR_6);
 VAR_9 = FUNC_5(VAR_5, VAR_6, 0, 1);
 VAR_12 = FUNC_3(VAR_5, VAR_6);

 if (VAR_9 < VAR_12)
  VAR_9 = 0;
 else
  VAR_9 = VAR_9 - VAR_12;

 FUNC_10(VAR_5, VAR_6, VAR_3, VAR_0, VAR_9);

 VAR_8 = VAR_11 - (VAR_10 - VAR_9);

 VAR_14 = FUNC_8(VAR_5, VAR_6);

 VAR_7->thermal_dpk_delta[VAR_6] = FUNC_0(VAR_14 - VAR_13);

 return VAR_8;
}
