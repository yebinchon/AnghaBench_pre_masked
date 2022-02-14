
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc7301_priv {int bank; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtc7301_priv*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtc7301_priv *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_4 == VAR_3->bank)
  return;

 if (VAR_4 & FUNC_0(0))
  VAR_5 |= VAR_1;
 if (VAR_4 & FUNC_0(1))
  VAR_5 |= VAR_2;

 FUNC_1(VAR_3, VAR_0,
       VAR_1 |
       VAR_2, VAR_5);

 VAR_3->bank = VAR_4;
}
