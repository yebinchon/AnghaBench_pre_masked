
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int* table; } ;
struct regulator_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct twlreg_info*,int) ;
 int FUNC_1 (int) ;
 struct twlreg_info* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0, unsigned VAR_1)
{
 struct twlreg_info *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_2->table[VAR_1];

 return FUNC_0(VAR_2, VAR_3) ? 0 : (FUNC_1(VAR_3) * 1000);
}
