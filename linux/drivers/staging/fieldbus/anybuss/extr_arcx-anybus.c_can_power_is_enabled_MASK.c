
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct controller_priv {scalar_t__ cpld_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct controller_priv* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct controller_priv *VAR_3 = FUNC_0(VAR_2);

 return !(FUNC_1(VAR_3->cpld_base + VAR_0) & VAR_1);
}
