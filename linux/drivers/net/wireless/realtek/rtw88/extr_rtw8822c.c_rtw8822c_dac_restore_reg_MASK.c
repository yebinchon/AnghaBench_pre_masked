
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtw_dev {int dummy; } ;
struct rtw_backup_info {size_t val; size_t reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtw_dev*,struct rtw_backup_info*,int ) ;
 int FUNC_1 (struct rtw_dev*,size_t,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_4,
         struct rtw_backup_info *VAR_5,
         struct rtw_backup_info *VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_0(VAR_4, VAR_5, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_9 = VAR_6[VAR_7 * VAR_8 + VAR_8].val;
   VAR_10 = VAR_6[VAR_7 * VAR_8 + VAR_8].reg;
   FUNC_1(VAR_4, VAR_7, VAR_10, VAR_3, VAR_9);
  }
 }
}
