
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtw_dev {int dummy; } ;
struct rtw_backup_info {int len; size_t reg; int val; } ;


 int FUNC_0 (struct rtw_dev*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct rtw_dev *VAR_0, u32 *VAR_1,
         u32 VAR_2, struct rtw_backup_info *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4].len = 4;
  VAR_3[VAR_4].reg = VAR_1[VAR_4];
  VAR_3[VAR_4].val = FUNC_0(VAR_0, VAR_1[VAR_4]);
 }
}
