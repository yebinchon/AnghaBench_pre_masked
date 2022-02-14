
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum srp_rport_state { ____Placeholder_srp_rport_state } srp_rport_state ;


 unsigned int FUNC_0 (char const* const*) ;




 int FUNC_1 (char*,char*,char const* const) ;
 struct srp_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 static const char *const VAR_3[] = {
  [128] = "running",
  [131] = "blocked",
  [130] = "fail-fast",
  [129] = "lost",
 };
 struct srp_rport *VAR_4 = FUNC_2(VAR_0);
 enum srp_rport_state VAR_5 = VAR_4->state;

 return FUNC_1(VAR_2, "%s\n",
         (unsigned)VAR_5 < FUNC_0(VAR_3) ?
         VAR_3[VAR_5] : "???");
}
