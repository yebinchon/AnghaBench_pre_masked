
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_vreg {int bypassed; } ;
struct regulator_dev {int dummy; } ;


 struct rpmh_vreg* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0,
    bool *VAR_1)
{
 struct rpmh_vreg *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->bypassed;

 return 0;
}
