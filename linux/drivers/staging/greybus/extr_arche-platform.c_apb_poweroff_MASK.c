
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0);


 if (FUNC_2(0))
  FUNC_1(VAR_0, "failed to control hub device\n");

 return 0;
}
