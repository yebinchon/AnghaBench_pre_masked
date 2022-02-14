
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_dpk_info {int* result; int * dpk_txagc; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int,int) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_3, u32 VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 struct rtw_dpk_info *VAR_7 = &VAR_3->dm_info.dpk_info;

 FUNC_2(VAR_3, VAR_2, VAR_0, 0x8 | (VAR_5 << 1));

 if (VAR_6)
  FUNC_3(VAR_3, VAR_1, (u8)(VAR_4 - 6));
 else
  FUNC_3(VAR_3, VAR_1, 0x00);

 VAR_7->result[VAR_5] = VAR_6;
 VAR_7->dpk_txagc[VAR_5] = FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_3, VAR_5, VAR_6);
}
