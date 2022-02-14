
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct rtw_dm_info {size_t*** dack_msbk; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct rtw_dev*,size_t,size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (struct rtw_dev*,size_t,int,int) ;

__attribute__((used)) static bool FUNC_5(struct rtw_dev *VAR_1, u8 VAR_2)
{
 struct rtw_dm_info *VAR_3 = &VAR_1->dm_info;
 u32 VAR_4 = 0x1c;
 u32 VAR_5 = 0x2c;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_6 = FUNC_3(VAR_2) + 0xb0;
 VAR_7 = FUNC_2(VAR_2) + 0x08;
 VAR_8 = FUNC_3(VAR_2) + 0xb0 + VAR_4;
 VAR_9 = FUNC_2(VAR_2) + 0x08 + VAR_5;

 if (!FUNC_1(VAR_1, VAR_7, VAR_6 + 0x8))
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_4(VAR_1, VAR_6 + 0x4, FUNC_0(2), 0x0);
  VAR_10 = VAR_3->dack_msbk[VAR_2][0][VAR_11];
  FUNC_4(VAR_1, VAR_6 + 0x4, 0xff8, VAR_10);
  FUNC_4(VAR_1, VAR_6, 0xf0000000, VAR_11);
  FUNC_4(VAR_1, VAR_6 + 0x4, FUNC_0(2), 0x1);
 }

 FUNC_4(VAR_1, VAR_6 + 0x4, FUNC_0(2), 0x0);

 if (!FUNC_1(VAR_1, VAR_9, VAR_8 + 0x8))
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_4(VAR_1, VAR_8 + 0x4, FUNC_0(2), 0x0);
  VAR_10 = VAR_3->dack_msbk[VAR_2][1][VAR_11];
  FUNC_4(VAR_1, VAR_8 + 0x4, 0xff8, VAR_10);
  FUNC_4(VAR_1, VAR_8, 0xf0000000, VAR_11);
  FUNC_4(VAR_1, VAR_8 + 0x4, FUNC_0(2), 0x1);
 }
 FUNC_4(VAR_1, VAR_8 + 0x4, FUNC_0(2), 0x0);

 FUNC_4(VAR_1, VAR_6 + 0x8, FUNC_0(26) | FUNC_0(25), 0x0);
 FUNC_4(VAR_1, VAR_8 + 0x8, FUNC_0(26) | FUNC_0(25), 0x0);
 FUNC_4(VAR_1, VAR_6 + 0x4, FUNC_0(0), 0x0);
 FUNC_4(VAR_1, VAR_8 + 0x4, FUNC_0(0), 0x0);

 return 1;
}
