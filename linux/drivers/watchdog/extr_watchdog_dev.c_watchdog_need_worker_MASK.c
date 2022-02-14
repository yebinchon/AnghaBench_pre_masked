
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int max_hw_heartbeat_ms; int timeout; } ;


 scalar_t__ FUNC_0 (struct watchdog_device*) ;
 scalar_t__ FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static inline bool FUNC_2(struct watchdog_device *VAR_0)
{

 unsigned int VAR_1 = VAR_0->max_hw_heartbeat_ms;
 unsigned int VAR_2 = VAR_0->timeout * 1000;
 return (VAR_1 && FUNC_0(VAR_0) && VAR_2 > VAR_1) ||
  (VAR_2 && !FUNC_0(VAR_0) && FUNC_1(VAR_0));
}
