
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;
struct rtw_backup_info {int len; int reg; int val; } ;


 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int,int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;

void FUNC_3(struct rtw_dev *VAR_0,
       struct rtw_backup_info *VAR_1, u32 VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_1++) {
  VAR_3 = VAR_1->len;
  VAR_4 = VAR_1->reg;
  VAR_5 = VAR_1->val;

  switch (VAR_3) {
  case 1:
   FUNC_2(VAR_0, VAR_4, (u8)VAR_5);
   break;
  case 2:
   FUNC_0(VAR_0, VAR_4, (u16)VAR_5);
   break;
  case 4:
   FUNC_1(VAR_0, VAR_4, (u32)VAR_5);
   break;
  default:
   break;
  }
 }
}
