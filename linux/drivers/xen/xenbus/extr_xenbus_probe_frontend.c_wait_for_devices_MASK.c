
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct xenbus_driver {struct device_driver driver; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int *,int *,struct device_driver*,int ) ;
 scalar_t__ FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct device_driver*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (unsigned long,int,unsigned int*) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_6(struct xenbus_driver *VAR_4)
{
 unsigned long VAR_5 = VAR_0;
 struct device_driver *VAR_6 = VAR_4 ? &VAR_4->driver : ((void*)0);
 unsigned int VAR_7 = 0;

 if (!VAR_2 || !FUNC_5())
  return;

 while (FUNC_2(VAR_6))
  if (FUNC_4(VAR_5, 30, &VAR_7))
   break;


 while (FUNC_1(VAR_6))
  if (FUNC_4(VAR_5, 270, &VAR_7))
   break;

 if (VAR_7)
  FUNC_3("\n");

 FUNC_0(&VAR_3.bus, ((void*)0), VAR_6,
    VAR_1);
}
