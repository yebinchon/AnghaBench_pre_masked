
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct twlreg_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct twlreg_info*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct regulator_dev *VAR_2, int VAR_3, int VAR_4,
   unsigned *VAR_5)
{
 struct twlreg_info *VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_0(VAR_3 - 600000, 12500);

 FUNC_2(VAR_6, VAR_0, VAR_1, VAR_7);

 return 0;
}
