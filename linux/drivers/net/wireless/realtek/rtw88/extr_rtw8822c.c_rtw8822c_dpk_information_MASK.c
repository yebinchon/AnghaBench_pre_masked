
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_dpk_info {int dpk_band; void* dpk_bw; void* dpk_ch; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rtw_dev*,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_2)
{
 struct rtw_dpk_info *VAR_3 = &VAR_2->dm_info.dpk_info;
 u32 VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_1, 0x18, VAR_0);

 VAR_5 = FUNC_1(FUNC_0(16), VAR_4);
 VAR_3->dpk_band = 1 << VAR_5;
 VAR_3->dpk_ch = FUNC_1(0xff, VAR_4);
 VAR_3->dpk_bw = FUNC_1(0x3000, VAR_4);
}
