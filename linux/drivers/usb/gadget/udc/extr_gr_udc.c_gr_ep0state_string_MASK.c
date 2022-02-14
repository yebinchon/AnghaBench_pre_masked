
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gr_ep0state { ____Placeholder_gr_ep0state } gr_ep0state ;


 int FUNC_0 (char const* const*) ;
__attribute__((used)) static const char *FUNC_1(enum gr_ep0state VAR_0)
{
 static const char *const VAR_1[] = {
  [135] = "disconnect",
  [130] = "setup",
  [134] = "idata",
  [132] = "odata",
  [133] = "istatus",
  [131] = "ostatus",
  [129] = "stall",
  [128] = "suspend",
 };

 if (VAR_0 < 0 || VAR_0 >= FUNC_0(VAR_1))
  return "UNKNOWN";

 return VAR_1[VAR_0];
}
