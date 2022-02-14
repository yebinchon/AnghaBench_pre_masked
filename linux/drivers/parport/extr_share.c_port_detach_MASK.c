
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_driver {int (* detach ) (int ) ;} ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct parport_driver *VAR_2 = VAR_1;

 if (FUNC_0(VAR_0) && VAR_2->detach)
  VAR_2->detach(FUNC_2(VAR_0));

 return 0;
}
