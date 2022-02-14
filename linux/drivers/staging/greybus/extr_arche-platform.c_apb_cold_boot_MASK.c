
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0, "failed to coldboot\n");


 return 0;
}
