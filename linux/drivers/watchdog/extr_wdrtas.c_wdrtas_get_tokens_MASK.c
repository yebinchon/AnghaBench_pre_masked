
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_4 = FUNC_2("get-sensor-state");
 if (VAR_4 == VAR_1) {
  FUNC_1("couldn't get token for get-sensor-state. Trying to continue without temperature support.\n");
 }

 VAR_5 = FUNC_2("ibm,get-system-parameter");
 if (VAR_5 == VAR_1) {
  FUNC_1("couldn't get token for ibm,get-system-parameter. Trying to continue with a default timeout value of %i seconds.\n",
   VAR_2);
 }

 VAR_6 = FUNC_2("set-indicator");
 if (VAR_6 == VAR_1) {
  FUNC_0("couldn't get token for set-indicator. Terminating watchdog code.\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_2("event-scan");
 if (VAR_3 == VAR_1) {
  FUNC_0("couldn't get token for event-scan. Terminating watchdog code.\n");
  return -VAR_0;
 }

 return 0;
}
