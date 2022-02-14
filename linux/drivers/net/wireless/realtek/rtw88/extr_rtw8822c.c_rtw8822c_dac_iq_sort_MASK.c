
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < (VAR_0 - 1 - VAR_4) ; VAR_5++) {
   FUNC_0(VAR_1, &VAR_2[VAR_5], &VAR_2[VAR_5 + 1]);
   FUNC_0(VAR_1, &VAR_3[VAR_5], &VAR_3[VAR_5 + 1]);
  }
 }
}
