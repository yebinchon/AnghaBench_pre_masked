
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_driver {int (* detach ) (struct parport*) ;} ;
struct parport {int dummy; } ;
struct device_driver {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 struct parport_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_0, void *VAR_1)
{
 struct parport *VAR_2 = VAR_1;
 struct parport_driver *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->detach)
  VAR_3->detach(VAR_2);
 return 0;
}
