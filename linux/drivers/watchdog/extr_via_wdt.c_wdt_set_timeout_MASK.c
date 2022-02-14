
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2,
      unsigned int VAR_3)
{
 FUNC_0(VAR_3, VAR_1 + VAR_0);
 VAR_2->timeout = VAR_3;
 return 0;
}
