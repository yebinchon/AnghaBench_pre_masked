
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_iqk_para {int clear; int member_0; } ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int ,char*,int) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_iqk_para*) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_3)
{
 struct rtw_iqk_para VAR_4 = {0};
 u8 VAR_5;
 int VAR_6;

 VAR_4.clear = 1;
 FUNC_2(VAR_3, &VAR_4);

 for (VAR_6 = 0; VAR_6 < 300; VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_1);
  if (VAR_5 == 0xaa)
   break;
  FUNC_0(20);
 }
 FUNC_4(VAR_3, VAR_0, 0x0);

 FUNC_1(VAR_3, VAR_2, "iqk counter=%d\n", VAR_6);
}
