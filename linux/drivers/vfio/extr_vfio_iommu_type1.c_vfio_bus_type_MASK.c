
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct bus_type* bus; } ;
struct bus_type {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_1, void *VAR_2)
{
 struct bus_type **VAR_3 = VAR_2;

 if (*VAR_3 && *VAR_3 != VAR_1->bus)
  return -VAR_0;

 *VAR_3 = VAR_1->bus;

 return 0;
}
