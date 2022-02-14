
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct rtw_dm_info {scalar_t__*** dack_msbk; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,size_t,int) ;
 int FUNC_2 (struct rtw_dev*,size_t,int,size_t) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_1,
     u8 VAR_2, u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct rtw_dm_info *VAR_6 = &VAR_1->dm_info;
 u16 VAR_7;
 u32 VAR_8;

 if (FUNC_0(VAR_3 >= 2))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_2(VAR_1, VAR_4, 0xf0000000, VAR_8);
  VAR_7 = (u16)FUNC_1(VAR_1, VAR_5, 0x7fc0000);
  VAR_6->dack_msbk[VAR_2][VAR_3][VAR_8] = VAR_7;
 }
}
