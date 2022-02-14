
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
 int FUNC_0 (struct rtw_dev*,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct rtw_dev *VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;
 u8 VAR_11[2][2] = {{VAR_0, VAR_2},
      {VAR_1, VAR_3} };

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_9 = VAR_11[VAR_8][0];
  VAR_10 = VAR_11[VAR_8][1];

  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);
 }
}
