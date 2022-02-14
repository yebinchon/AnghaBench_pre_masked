
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {int dummy; } ;
struct device {int dummy; } ;


 struct fimc_is* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct fimc_is *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1);
}
