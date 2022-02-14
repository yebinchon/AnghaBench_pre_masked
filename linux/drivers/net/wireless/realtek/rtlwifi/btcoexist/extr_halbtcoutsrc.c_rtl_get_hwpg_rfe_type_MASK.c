
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int rfe_type; } ;


 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static
u8 FUNC_1(struct rtl_priv *VAR_0)
{
 struct rtl_hal *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rfe_type;
}
