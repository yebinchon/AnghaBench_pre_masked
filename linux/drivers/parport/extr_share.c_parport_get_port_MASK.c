
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int bus_dev; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *) ;
 struct parport* FUNC_1 (struct device*) ;

struct parport *FUNC_2(struct parport *VAR_0)
{
 struct device *VAR_1 = FUNC_0(&VAR_0->bus_dev);

 return FUNC_1(VAR_1);
}
