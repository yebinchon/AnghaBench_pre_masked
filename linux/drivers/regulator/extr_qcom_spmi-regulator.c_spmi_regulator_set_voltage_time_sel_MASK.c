
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator {int slew_rate; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct spmi_regulator* FUNC_2 (struct regulator_dev*) ;
 scalar_t__ FUNC_3 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 struct spmi_regulator *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(FUNC_3(VAR_0, VAR_2) -
        FUNC_3(VAR_0, VAR_1));

 return FUNC_0(VAR_4, VAR_3->slew_rate);
}
