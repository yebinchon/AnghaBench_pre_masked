
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator {struct regulator_dev* rdev; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator_dev*,struct ww_acquire_ctx*) ;
 int FUNC_2 (struct regulator_dev*,struct ww_acquire_ctx*) ;

int FUNC_3(struct regulator *VAR_0)
{
 struct regulator_dev *VAR_1 = VAR_0->rdev;
 struct ww_acquire_ctx VAR_2;
 int VAR_3;

 FUNC_1(VAR_1, &VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_1, &VAR_2);

 return VAR_3;
}
