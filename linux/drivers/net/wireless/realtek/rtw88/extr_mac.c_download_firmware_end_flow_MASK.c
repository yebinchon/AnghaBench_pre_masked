
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_6)
{
 u16 VAR_7;

 FUNC_2(VAR_6, VAR_5, VAR_3);


 VAR_7 = FUNC_0(VAR_6, VAR_4);
 if ((VAR_7 & VAR_0) != VAR_0)
  return;

 VAR_7 = (VAR_7 | VAR_1) & ~VAR_2;
 FUNC_1(VAR_6, VAR_4, VAR_7);
}
