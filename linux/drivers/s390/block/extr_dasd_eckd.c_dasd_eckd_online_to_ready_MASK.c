
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int kick_validate; int reload_device; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_0)
{
 if (FUNC_0(&VAR_0->reload_device))
  FUNC_1(VAR_0);
 if (FUNC_0(&VAR_0->kick_validate))
  FUNC_1(VAR_0);

 return 0;
}
