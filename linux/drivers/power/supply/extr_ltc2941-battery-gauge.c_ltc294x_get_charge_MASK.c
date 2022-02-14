
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc294x_info {scalar_t__ Qlsb; } ;
typedef enum ltc294x_reg { ____Placeholder_ltc294x_reg } ltc294x_reg ;


 int FUNC_0 (struct ltc294x_info const*,int) ;
 int FUNC_1 (struct ltc294x_info const*,int) ;

__attribute__((used)) static int FUNC_2(const struct ltc294x_info *VAR_0,
    enum ltc294x_reg VAR_1, int *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_0->Qlsb < 0)
  VAR_3 -= 0xFFFF;
 *VAR_2 = FUNC_0(VAR_0, VAR_3);
 return 0;
}
