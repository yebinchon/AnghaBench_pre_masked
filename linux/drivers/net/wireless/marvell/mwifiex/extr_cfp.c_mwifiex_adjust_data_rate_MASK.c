
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8 FUNC_1(struct mwifiex_private *VAR_4,
       u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = 0;


 if ((VAR_6 & FUNC_0(0)) && (VAR_6 & FUNC_0(1)))
  VAR_7 = VAR_2 +
        VAR_0 + VAR_5;
 else if (VAR_6 & FUNC_0(0))
  VAR_7 = VAR_2 + VAR_5;
 else
  VAR_7 = (VAR_5 > VAR_3) ?
         VAR_5 - 1 : VAR_5;

 if (VAR_7 >= VAR_1)
  VAR_7 = VAR_1 - 1;

 return VAR_7;
}
