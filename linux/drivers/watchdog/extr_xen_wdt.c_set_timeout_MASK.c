
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct watchdog_device {scalar_t__ timeout; } ;
struct TYPE_2__ {scalar_t__ timeout; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline time64_t FUNC_1(struct watchdog_device *VAR_1)
{
 VAR_0.timeout = VAR_1->timeout;
 return FUNC_0() + VAR_1->timeout;
}
