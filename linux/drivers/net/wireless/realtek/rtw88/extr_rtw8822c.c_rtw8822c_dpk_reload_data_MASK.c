
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtw_dpk_info {scalar_t__ dpk_ch; scalar_t__ dpk_band; int* dpk_gs; int dpk_path_ok; int * dpk_txagc; } ;
struct TYPE_4__ {int rf_path_num; } ;
struct TYPE_3__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_2__ hal; TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_5 (struct rtw_dev*,int ,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct rtw_dev *VAR_11)
{
 struct rtw_dpk_info *VAR_12 = &VAR_11->dm_info.dpk_info;
 u8 VAR_13;

 if (!FUNC_6(VAR_7, VAR_12->dpk_path_ok) &&
     !FUNC_6(VAR_8, VAR_12->dpk_path_ok) &&
     VAR_12->dpk_ch == 0)
  return;

 for (VAR_13 = 0; VAR_13 < VAR_11->hal.rf_path_num; VAR_13++) {
  FUNC_4(VAR_11, VAR_6, VAR_1,
     0x8 | (VAR_13 << 1));
  if (VAR_12->dpk_band == VAR_9)
   FUNC_3(VAR_11, VAR_5, 0x1f100000);
  else
   FUNC_3(VAR_11, VAR_5, 0x1f0d0000);

  FUNC_5(VAR_11, VAR_2, VAR_12->dpk_txagc[VAR_13]);

  FUNC_1(VAR_11, VAR_13,
     FUNC_6(VAR_13, VAR_12->dpk_path_ok));

  FUNC_2(VAR_11, VAR_13, VAR_10);

  FUNC_4(VAR_11, VAR_6, VAR_1, 0xc);

  if (VAR_13 == VAR_7)
   FUNC_4(VAR_11, VAR_3, VAR_0,
      VAR_12->dpk_gs[VAR_13]);
  else
   FUNC_4(VAR_11, VAR_4, VAR_0,
      VAR_12->dpk_gs[VAR_13]);
 }
 FUNC_0(VAR_11);
}
