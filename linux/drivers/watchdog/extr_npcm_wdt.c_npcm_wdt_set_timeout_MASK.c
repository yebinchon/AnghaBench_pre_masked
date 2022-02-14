
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;


 int FUNC_0 (struct watchdog_device*) ;
 scalar_t__ FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0,
    unsigned int VAR_1)
{
 if (VAR_1 < 2)
  VAR_0->timeout = 1;
 else if (VAR_1 < 3)
       VAR_0->timeout = 2;
 else if (VAR_1 < 6)
       VAR_0->timeout = 5;
 else if (VAR_1 < 11)
       VAR_0->timeout = 10;
 else if (VAR_1 < 22)
       VAR_0->timeout = 21;
 else if (VAR_1 < 44)
       VAR_0->timeout = 43;
 else if (VAR_1 < 87)
       VAR_0->timeout = 86;
 else if (VAR_1 < 173)
       VAR_0->timeout = 172;
 else if (VAR_1 < 688)
       VAR_0->timeout = 687;
 else
       VAR_0->timeout = 2750;

 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0);

 return 0;
}
