
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ min_timeout; scalar_t__ max_timeout; int max_hw_heartbeat_ms; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct watchdog_device *VAR_0)
{




 if (!VAR_0->max_hw_heartbeat_ms && VAR_0->min_timeout > VAR_0->max_timeout) {
  FUNC_0("Invalid min and max timeout values, resetting to 0!\n");
  VAR_0->min_timeout = 0;
  VAR_0->max_timeout = 0;
 }
}
