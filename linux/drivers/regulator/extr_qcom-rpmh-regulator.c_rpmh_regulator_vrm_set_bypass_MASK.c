
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_vreg {int bypassed; int mode; } ;
struct regulator_dev {int dummy; } ;


 struct rpmh_vreg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct rpmh_vreg*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
    bool VAR_1)
{
 struct rpmh_vreg *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 if (VAR_2->bypassed == VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_2->mode, VAR_1);
 if (!VAR_3)
  VAR_2->bypassed = VAR_1;

 return VAR_3;
}
