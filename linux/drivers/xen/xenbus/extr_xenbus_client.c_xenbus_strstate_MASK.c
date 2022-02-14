
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int FUNC_0 (char const* const*) ;
const char *FUNC_1(enum xenbus_state VAR_0)
{
 static const char *const VAR_1[] = {
  [ 128 ] = "Unknown",
  [ 131 ] = "Initialising",
  [ 133 ] = "InitWait",
  [ 132 ] = "Initialised",
  [ 134 ] = "Connected",
  [ 135 ] = "Closing",
  [ 136 ] = "Closed",
  [129] = "Reconfiguring",
  [130] = "Reconfigured",
 };
 return (VAR_0 < FUNC_0(VAR_1)) ? VAR_1[VAR_0] : "INVALID";
}
