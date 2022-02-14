
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ dpk_band; } ;
struct TYPE_5__ {TYPE_1__ dpk_info; } ;
struct TYPE_6__ {int rf_path_num; } ;
struct rtw_dev {TYPE_2__ dm_info; TYPE_3__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct rtw_dev*,int ,int) ;
 int FUNC_1 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_12)
{
 u8 VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_12->hal.rf_path_num; VAR_13++) {
  FUNC_2(VAR_12, VAR_13, VAR_10, VAR_9, 0x0);
  FUNC_0(VAR_12, VAR_8, 0x8 | (VAR_13 << 1));
  if (VAR_12->dm_info.dpk_info.dpk_band == VAR_11)
   FUNC_0(VAR_12, VAR_6, 0x1f100000);
  else
   FUNC_0(VAR_12, VAR_6, 0x1f0d0000);
  FUNC_1(VAR_12, VAR_5, VAR_0, 0x4);
  FUNC_1(VAR_12, VAR_7, VAR_2, 0x3);
 }
 FUNC_1(VAR_12, VAR_8, VAR_1, 0xc);
 FUNC_0(VAR_12, VAR_3, 0x3b23170b);
 FUNC_0(VAR_12, VAR_4, 0x775f5347);
}
