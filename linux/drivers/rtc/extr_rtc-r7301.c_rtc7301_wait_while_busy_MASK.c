
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc7301_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtc7301_priv*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct rtc7301_priv *VAR_3)
{
 int VAR_4 = 100;

 while (VAR_4-- > 0) {
  u8 VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_1);
  if (!(VAR_5 & VAR_2))
   return 0;

  FUNC_1(300);
 }

 return -VAR_0;
}
