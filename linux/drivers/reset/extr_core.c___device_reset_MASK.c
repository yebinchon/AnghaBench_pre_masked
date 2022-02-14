
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 struct reset_control* FUNC_2 (struct device*,int *,int ,int ,int,int) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;

int FUNC_5(struct device *VAR_0, bool VAR_1)
{
 struct reset_control *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, ((void*)0), 0, 0, VAR_1, 1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 return VAR_3;
}
