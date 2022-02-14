
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ release; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(const struct device *VAR_2)
{
 return VAR_2->release == VAR_0 ||
  VAR_2->release == VAR_1;
}
