
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static bool FUNC_1(struct rtl_priv *VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_2;
 struct rtl_mac *VAR_4 = FUNC_0(VAR_3);

 bool VAR_5 = 0;

 if ((VAR_4->mode == VAR_0) || (VAR_4->mode == VAR_1))
  VAR_5 = 1;

 return VAR_5;
}
