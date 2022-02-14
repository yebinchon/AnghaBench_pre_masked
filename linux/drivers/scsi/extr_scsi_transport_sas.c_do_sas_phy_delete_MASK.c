
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, void *VAR_1)
{
 int VAR_2 = (int)(unsigned long)VAR_1;

 if (VAR_2 == 0 && FUNC_5(VAR_0))
  FUNC_3(FUNC_1(VAR_0));
 else if (VAR_2 == 1 && FUNC_4(VAR_0))
  FUNC_2(FUNC_0(VAR_0));
 return 0;
}
