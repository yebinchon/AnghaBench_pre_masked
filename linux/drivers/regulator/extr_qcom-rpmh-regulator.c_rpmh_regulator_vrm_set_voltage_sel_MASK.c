
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_vreg {unsigned int voltage_selector; int enabled; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,unsigned int,int) ;
 struct rpmh_vreg* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
     unsigned int VAR_2)
{
 struct rpmh_vreg *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->enabled == -VAR_0) {




  VAR_3->voltage_selector = VAR_2;
  return 0;
 }

 return FUNC_0(VAR_1, VAR_2,
     VAR_2 > VAR_3->voltage_selector);
}
