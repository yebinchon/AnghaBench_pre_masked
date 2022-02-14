
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct watchdog_device*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 > VAR_0)
  VAR_2 = FUNC_1(VAR_2);

 VAR_1->timeout = VAR_2;

 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_2(VAR_2);

 return VAR_3;
}
