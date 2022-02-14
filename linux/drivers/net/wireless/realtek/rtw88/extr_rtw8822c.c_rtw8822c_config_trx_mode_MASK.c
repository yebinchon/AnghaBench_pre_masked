
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int) ;
 int FUNC_1 (struct rtw_dev*,int,int) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_5, u8 VAR_6,
         u8 VAR_7, bool VAR_8)
{
 if ((VAR_6 | VAR_7) & VAR_0)
  FUNC_3(VAR_5, VAR_3, VAR_2, 0x33312);
 else
  FUNC_3(VAR_5, VAR_3, VAR_2, 0x11111);
 if ((VAR_6 | VAR_7) & VAR_1)
  FUNC_3(VAR_5, VAR_4, VAR_2, 0x33312);
 else
  FUNC_3(VAR_5, VAR_4, VAR_2, 0x11111);

 FUNC_0(VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_6, VAR_8);

 FUNC_2(VAR_5);
}
