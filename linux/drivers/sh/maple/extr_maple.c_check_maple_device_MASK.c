
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device_specify {scalar_t__ port; scalar_t__ unit; } ;
struct maple_device {scalar_t__ port; scalar_t__ unit; } ;
struct device {int dummy; } ;


 struct maple_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct maple_device_specify *VAR_2;
 struct maple_device *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3->port == VAR_2->port && VAR_3->unit == VAR_2->unit)
  return 1;
 return 0;
}
